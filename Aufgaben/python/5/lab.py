
# Import a library of functions called 'pygame'
import pygame
 
# Initialize the game engine
pygame.init()
 
# Define some colors
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)
BLUE = (0, 0, 255)
GREEN = (0, 255, 0)
RED = (255, 0, 0)
YELLOW = (255, 255, 0)
 
PI = 3.141592653
 
# Set the height and width of the screen
size = (1000, 800)
screen = pygame.display.set_mode(size)

# Loop until the user clicks the close button.
done = False
clock = pygame.time.Clock()
 
# Loop as long as done == False
while not done:
 
    for event in pygame.event.get():  # User did something
        if event.type == pygame.QUIT:  # If user clicked close
            done = True  # Flag that we are done so we exit this loop
 
    # All drawing code happens after the for loop and but
    # inside the main while not done loop.
 
    # Clear the screen and set the screen background
    screen.fill(BLACK)
 
    # Draw on the screen a line from (0,0) to (100,100)
    # 5 pixels wide.
    pygame.draw.line(screen, RED, [500, 705], [500, 770], 5)
    pygame.draw.line(screen, RED, [445, 705], [445, 770], 5)
    pygame.draw.line(screen, RED, [475, 705], [475, 770], 5)
    pygame.draw.line(screen, RED, [555, 705], [555, 770], 5)
    pygame.draw.line(screen, RED, [530, 705], [530, 770], 5)
    pygame.draw.line(screen, RED, [500, 705], [500, 770], 5)
 

 
    # Draw a rectangle
    pygame.draw.rect(screen, BLUE, [350, 205, 305, 400])
    pygame.draw.rect(screen, BLUE, [425, 605, 75, 100])
    pygame.draw.rect(screen, BLUE, [500, 605, 75, 100])
    pygame.draw.rect(screen, BLUE, [200, 305, 50, 150])
    pygame.draw.rect(screen, BLUE, [750, 305, 50, 150])
  
    
 
    pygame.draw.circle(screen, YELLOW, [500, 330], 50)
 
    # This draws a triangle using the polygon command
    pygame.draw.polygon(screen, BLUE, [[500, 100], [350, 200], [650, 200]])
    pygame.draw.polygon(screen, BLUE, [[350, 400], [350, 300], [150, 400]])
    pygame.draw.polygon(screen, BLUE, [[654, 400], [654, 300], [850, 400]])

 
    # Put the image of the text on the screen at 250x250
    screen.blit(text, [250, 250])
 
    # Go ahead and update the screen with what we've drawn.
    # This MUST happen after all the other drawing commands.
    pygame.display.flip()
 
    # This limits the while loop to a max of 60 times per second.
    # Leave this out and we will use all CPU we can.
    clock.tick(60)
 
# Be IDLE friendly
pygame.quit()
