#include <Arduino.h>
#include <WiFiClientSecure.h> // Https client
#include "UniversalTelegramBot.h"
#include "esp_camera.h"
#include <WiFi.h>

// Initialize Wifi connection to the router
char ssid[] = "XXX";        // your network SSID (name)
char password[] = "XXX"; // your network key
String chat_id = "XXX";

// Initialize Telegram BOT
#define BOTtoken "XXX" // your Bot Token (Get from Botfather)
String token = BOTtoken;

WiFiClientSecure client;                    // Https client
UniversalTelegramBot bot(BOTtoken, client); // erstellt objekt mit Bottoken und client

int Bot_mtbs = 3000; //mean time between scan messages
long Bot_lasttime;   //last time messages' scan has been done

camera_fb_t *fb;    // erzeugt array vom typ camera_fb_t
uint8_t *fb_buffer; // erzeugt framebuffer vom typ uint8_t
size_t fb_length;   // länger vom buffer
int currentByte;    //erzeugt int

int soundPin = 33;
int sensorValue = 13;

#define PWDN_GPIO_NUM 32
#define RESET_GPIO_NUM -1
#define XCLK_GPIO_NUM 0
#define SIOD_GPIO_NUM 26
#define SIOC_GPIO_NUM 27

#define Y9_GPIO_NUM 35 //y wahrscheinlich farbkanal
#define Y8_GPIO_NUM 34
#define Y7_GPIO_NUM 39
#define Y6_GPIO_NUM 36
#define Y5_GPIO_NUM 21
#define Y4_GPIO_NUM 19
#define Y3_GPIO_NUM 18
#define Y2_GPIO_NUM 5
#define VSYNC_GPIO_NUM 25
#define HREF_GPIO_NUM 23
#define PCLK_GPIO_NUM 22

void setup()
{
  Serial.begin(115200);

  camera_config_t config; // objekt für camera config
  config.ledc_channel = LEDC_CHANNEL_0;
  config.ledc_timer = LEDC_TIMER_0;
  config.pin_d0 = Y2_GPIO_NUM;
  config.pin_d1 = Y3_GPIO_NUM;
  config.pin_d2 = Y4_GPIO_NUM;
  config.pin_d3 = Y5_GPIO_NUM;
  config.pin_d4 = Y6_GPIO_NUM;
  config.pin_d5 = Y7_GPIO_NUM;
  config.pin_d6 = Y8_GPIO_NUM;
  config.pin_d7 = Y9_GPIO_NUM;
  config.pin_xclk = XCLK_GPIO_NUM;
  config.pin_pclk = PCLK_GPIO_NUM;
  config.pin_vsync = VSYNC_GPIO_NUM;
  config.pin_href = HREF_GPIO_NUM;
  config.pin_sscb_sda = SIOD_GPIO_NUM;
  config.pin_sscb_scl = SIOC_GPIO_NUM;
  config.pin_pwdn = PWDN_GPIO_NUM;
  config.pin_reset = RESET_GPIO_NUM;
  config.xclk_freq_hz = 20000000;
  config.pixel_format = PIXFORMAT_JPEG;
  //init with high specs to pre-allocate larger buffers
  if (psramFound()) //schaut ob extra speicher da ist
  {
    Serial.println("found psram");
    config.frame_size = FRAMESIZE_QVGA;
    config.jpeg_quality = 10;
    config.fb_count = 2; // Trying to reduce memory use
  }
  else
  {
    config.frame_size = FRAMESIZE_QVGA;
    config.jpeg_quality = 12;
    config.fb_count = 1;
  }

  // camera init
  esp_err_t err = esp_camera_init(&config);
  if (err != ESP_OK)
  {
    Serial.printf("Camera init failed with error 0x%x", err); // Fehlermeldung wenn init nicht funk.
    delay(1000);
    ESP.restart(); // restart
  }

  // Drop down frame size for higher initial frame rate
  sensor_t *s = esp_camera_sensor_get();  //sets framesize
  s->set_framesize(s, config.frame_size); // UXGA|SXGA|XGA|SVGA|VGA|CIF|QVGA|HQVGA|QQVGA

  // Attempt to connect to Wifi network:
  Serial.print("Connecting Wifi: ");
  Serial.println(ssid);

  // Set WiFi to station mode and disconnect from an AP if it was Previously
  // connected
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(500);
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  client.setInsecure(); //akzeptiert invalide zertifikate
}

bool isMoreDataAvailable() //ist mehr da oder nicht
{
  return (fb_length - currentByte); // gibt null zurück wenn currentByte = fb länge
}

uint8_t photoNextByte() //iteriert zum nächsten byte des fb
{
  currentByte++;
  return (fb_buffer[currentByte - 1]);
}

void take_send_photo(String chat_id) // mache und sende foto
{
  camera_fb_t *fb = NULL;   //initalisiere camera_fb
  fb = esp_camera_fb_get(); //gleich setzen der beiden
  currentByte = 0;
  fb_length = fb->len; //def der fb länge
  fb_buffer = fb->buf; //extraktion des buffer in byte aus dem fb objekt
  bot.sendPhotoByBinary(chat_id, "image/jpeg", fb->len, isMoreDataAvailable, photoNextByte, nullptr, nullptr);
  esp_camera_fb_return(fb);
  fb_length = NULL;
  fb_buffer = NULL;
}

void loop()
{
  //take_send_photo(chat_id);
  sensorValue = analogRead(soundPin);
  Serial.println(sensorValue);
  if (sensorValue>300){
    take_send_photo(chat_id);
  }
  delay(2500);

  //if (millis() > Bot_lasttime + Bot_mtbs)
  //{                                                                     //wenn bot_mtbs vergangen sind dann sende foto
  // int numNewMessages = bot.getUpdates(bot.last_message_received + 1); //schau ob neue nachricht da ist

  // while (numNewMessages)
  //{ //wenn neue nachricht
  // Serial.println("got response");
  //chat_id = bot.messages[0].chat_id; //get chat_id

  //for (int i = 0; i < numNewMessages; i++)
  //{ //für jede neue msg
  //bot.sendMessage(bot.messages[i].chat_id, bot.messages[i].text, "");
  //take_send_photo(chat_id);
  //}
  //numNewMessages = bot.getUpdates(bot.last_message_received + 1);
  //}

  //Bot_lasttime = millis();
  // }
}