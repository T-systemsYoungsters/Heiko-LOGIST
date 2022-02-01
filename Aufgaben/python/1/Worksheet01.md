# Chapter 01 Worksheet

1. Write a line of code that will print your name:  **print("Heiko")**

2. How do you enter a comment in a program?: **#**

3. What do the following lines of code output? ALSO: Why do they give a different answer?:

_print(2 / 3) = 0.6_


_print(2 // 3) = 0_  **gibt keine 0, aus nur ganze Zahlen, z.B. 10//3=3**

4. Write a line of code that creates a variable called pi and sets it to an appropriate value.: **pi = 3.14**

5. Why does this code not work?

_A = 22_ <br/> 
_print(a)_<br/>
**weil A groß geschrieben definiert ist, aber a klein geschrieben nicht.**

6. All of the variable names below can be used. But which ONE of these is the better variable name to use?: **area_of_rectangle**

7. Which of these variables names are not allowed in Python?: **account number, 1Apple, 2x, account#, account.number, great.big.variable, total% und #left.
8. Why does this code not work?: 

print(a)<br/>
a = 45<br/>
**weil wir a ausgeben ohne es VORHER zu definieren**

9. Explain the mistake in this code: 

pi = float(3.14) 

10. This program runs, but the code still could be better. Explain what is wrong with the code.

radius = float(input("Radius:")) <br>
x = 3.14 nutzlos <br>
pi = x statt x 3.14<br>
area = pi  * radius ** 2<br>
print(area)<br>

11. Explain the mistake in the following code:

x = 4 <br>
y = 5 <br>
a = ((x) * (y)) <br>
print(a) <br>
Klammern unnötig

12. Explain the mistake in the following code:

x = 4 <br>
y = 5 <br>
a = 3(x + y) <br>
print(a) <br>
es fehlr ein * nach der 3

13. Explain the mistake in the following code:

radius = input(float("Enter the radius:")) <br>
da möchte er str statt float

14. Do all these print the same value? Which one is better to use and why?:

print(2/3+4)<br>
print(2 / 3 + 4)<br>
print(   2 /    3+    4  )<br>
alle gleich, Mitte schöner.

15. What is a constant?:

Eine Variable die einen Wert hat und nicht geändert wird.

16. How are variable names for constants different than other variable names?

17. What is a single quote and what is a double quote? Give and label an example of both.

`<br>
"

18. Write a Python program that will use escape codes to print a double-quote and a new line using the Window's standard.

print("Ich habe Lust\"etwas\"zu\n machen")

19. Can a Python program print text to the screen using single quotes instead of double quotes?

ja

20. Why does this code not calculate the average?

print(3 + 4 + 5 / 3)<br>
erst / dann +

21. What is an ``operator'' in Python?

Operatoren sind Zeichen um operationen mit Variablen und Werten durchzuführen 

22. What does the following program print out?

x = 3<br>
x + 1<br>
print(x)<br>
3

23. Correct the following code:

user_name = input(str("Enter your name: "))

24. Correct the following code:
value = input("your age:")<br>
print(value)



# LAB 1

print("Heute ist ein \"regnerischer\" Tag \nWas machst du bei dem Wetter")

a = input("Gib die Temp in Fahrenheit an:") <br>
a = float(a)<br>
b = (a - 32) * 5/9<br>
print("Wir haben",b,"Celcius")<br>
<b>
Gib die Temp in Fahrenheit an: 1<br>
Wir haben -17.22222222222222 Celcius <br>
</b>
<br>
<br>
h = input("Gib die Höhe des Trapez an ") <br>
h = float(h) <br>
ul = input("gib die untere Länge an")<br>
ul = float(ul)<br>
ol = input("gib die obere Länge an")<br>
ol = float(ol)<br>
a = ul + ol<br>
A = 0<br>
A = float(A)<br>
A = a/2*h<br>
print(A)<br>
<b>
Gib die Höhe des Trapez an  5<br>
gib die untere Länge an 10<br>
gib die obere Länge an 7<br>
42.5<br>
</b>
<br>

<br>
PI = 3.14
r = input("gib den Radius an") <br>
r = float(r)<br>
A = PI * r *r <br>
print(A)<br>
<b>
gib den Radius an 2<br>
12.56
</b>
















