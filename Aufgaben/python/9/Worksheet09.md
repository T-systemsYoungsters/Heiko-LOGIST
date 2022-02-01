## Worksheet09

## Beispiele chapter 09

+ Meine Ergebnis 
- Die Lösung

1) +- A <br>
2) +- ABC <br>
3) +- ABC<br>
4) +- <br>
A start <br>
      B start <br>
      C start and end<br>
      B end, A end<br>
5) +-<br>
A start, <br>
x = 5,<br>
 B start, <br>
 x = 6,<br>
  C start and end,<br>
   x = 7,<br>
    B end,<br>
     x = 6,<br>
      A end,<br>
       x = 5
6) +- 3<br>
7) +- 3<br>
8) +- 4<br>
9) +-<br>
 21,<br>
 11<br>
10) +<br>
21,<br>
 11<br>
-<br>
11<br>
11) +<br>
21,<br>
 11<br>
-<br>
(11, 21)
12) +-<br>
11,<br>
 21<br>
13) +-<br>
 global scope,<br>
  my_data = 10,<br> 
function a,<br>
 my_data =   10l, <br>
function a,<br>
 my_data =   20, <br>
global scope,<br>
 my_data = 10<br>
 
14) +-<br>
 global scope,<br>
  list = [5, 2, 4]<br>
function a,<br>
 list =   [5, 2, 4]<br>
function a,<br>
 list =   [10, 20, 30]<br>
global scope,<br>
 list = [5, 2, 4]
15) +-<br>
 global scope,<br>
  list = [5, 2, 4]<br>
function a,<br>
 list =   [5, 2, 4]<br>
function a,<br>
 list =   [1000, 2, 4]<br>
global scope, <br>
list = [1000, 2, 4]<br>

## Worksheet 09 
_Aufgaben_

1) +- 1, 2, 3, 4, 5
2) +- 0, 1, 2, 3, 4
3) +- 5
4) +-25
5) +- <br>
0 0<br>
0 1<br>
0 2<br>
0 3<br>
0 4<br>
…..<br>
4 1<br>
4 2<br>
4 3<br>
4 4<br>
6) +-<br>
*<br>
….<br>
*<br>
7) +- <br>
*****<br>
*****<br>
*****<br>
*****<br>
*****<br>
8)
*************************<br>

9) For I ist der Fehler, weil nach einem Durchgang die 5 Position<br> 
10) +- 5 <br> 
11) +0 und 1 random<br> 
-01110, Play again?
12) +- 3
13) +-  4, 3
14) +- 4 3
15) +- z not defined
16) +- x= 10, x= 11, x= 10
17) +- <br>
f start<br>
g start<br>
h<br>
g end<br>
h<br>
f end<br>
18) +-<br>
 x= 10<br>
foo has been called<br>
x= 10<br>
19) +/<br>
-main 1<br>
a 1<br>
a 2<br>
main 1<br>
main 5<br>
b 5<br>
b 6<br>
main 6<br>
main 5<br>
c 5<br>
c 102<br>
main 5<br>


2.1)<br>
  def sum(a, b, c):<br>
    return(a + b + c)<br>
 
print(sum(10, 11, 12))<br>
2.2)<br>
 def increase(x):<br>
      return x + 1<br>
     
 
x = 10<br>
print("X is", x, " I
will now increase x." )<br>
x=increase(x)<br>
print("X is now", x)

2.3) <br>
def print_hello():<br>
    print("Hello")<br>
 
print_hello()<br>
2.4)<br>
def count_to_ten():<br>
    for i in range(10):<br>
        print(i)<br>
 
count_to_ten()<br>
2.5)<br>
def sum_list(list):<br>
    summ = 0<br>
    for i in list:<br>
        summ = summ + i<br>
    return summ<br>
 
list = [45, 2, 10, -5, 100]<br>
print(sum_list(list))<br>
2.6)<br>
def reverse(text):<br>
    result = ""<br>
    text_length = len(text)<br>
    for i in range(text_length):<br>
        result = result + text[i * -1]<br>
    return result<br>
 
text = " Programming is the coolest thing ever."<br>
print(reverse(text))<br>
2.7) <br>
def get_user_choice():<br>
    while True:<br>
        command = input("Command: ")<br>
        if command == "f" or command == "m" or command == "s" or command == "d" or command == "q":<br>
            return command<br>
 
        print("Hey, that's not a command. Here are your options:" )
        print("f - Full speed ahead")
        print("m - Moderate speed")
        print("s - Status")
        print("d - Drink")
        print("q - Quit")
 
user_command = get_user_choice()<br>
print("You entered:", user_command)<br>

## Letzte Aufgabe 

#1)<br>
def print_hello():<br>
    print("Hello World")<br>
#2)<br>
print_hello()<br>
#3)<br>
def Name(name):<br>
    print("Hello",name)<br>
#4)<br>
Name("Bob")<br>
#5)<br>
def produkt(a,b):<br>
    print(a*b)<br>
#6)<br>
produkt(23,26)<br>
#7)<br>
def Satz(satz,zahl):<br>
    for i in range(zahl):<br>
        print(satz)<br>
#8)<br>
Satz("Ich bins",7)<br>
#9)<br>
def nummer(x):<br>
    return x*x<br>
#10)<br>
ergebnis=nummer(12)<br>
print(ergebnis)<br>
#11)<br>
def force(m,r,v):<br>
    return m*r*v**2<br>
#12)<br>
a=force(12,2,5)<br>
print(a)<br>
#13)<br>
def nummern(list):<br>
    for item in list:<br>
        print(item)<br>

