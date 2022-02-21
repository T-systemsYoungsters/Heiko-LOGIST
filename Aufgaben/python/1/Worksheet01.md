# Chapter 01 Worksheet

1. Write a line of code that will print your name:  **print("Heiko")**

2. How do you enter a comment in a program?: **#**

3. What do the following lines of code output? ALSO: Why do they give a different answer?:
```python

_print(2 / 3) = 0.6_


_print(2 // 3) = 0_  **gibt keine 0, aus nur ganze Zahlen, z.B. 10//3=3**
```

4. Write a line of code that creates a variable called pi and sets it to an appropriate value.: **pi = 3.14**

5. Why does this code not work?
```python
_A = 22_ 
_print(a)_
```
**weil A groß geschrieben definiert ist, aber a klein geschrieben nicht.**

6. All of the variable names below can be used. But which ONE of these is the better variable name to use?: **area_of_rectangle**

7. Which of these variables names are not allowed in Python?: **account number, 1Apple, 2x, account#, account.number, great.big.variable, total% und #left.
8. Why does this code not work?: 
```python
print(a)
a = 45
```
**weil wir a ausgeben ohne es VORHER zu definieren**

9. Explain the mistake in this code: 

pi = float(3.14) 

10. This program runs, but the code still could be better. Explain what is wrong with the code.
```python
radius = float(input("Radius:")) 
x = 3.14 nutzlos 
pi = x statt x 3.14
area = pi  * radius ** 2
print(area)
```

11. Explain the mistake in the following code:
```python
x = 4 
y = 5 
a = ((x) * (y)) 
print(a) 
```
Klammern unnötig

12. Explain the mistake in the following code:
```python
x = 4 
y = 5 
a = 3(x + y) 
print(a) 
```
es fehlr ein * nach der 3

13. Explain the mistake in the following code:
```python
radius = input(float("Enter the radius:")) 
```
da möchte er str statt float

14. Do all these print the same value? Which one is better to use and why?:
```python
print(2/3+4)
print(2 / 3 + 4)
print(   2 /    3+    4  )
```
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
```python
print(3 + 4 + 5 / 3)
```
erst / dann +

21. What is an ``operator'' in Python?

Operatoren sind Zeichen um operationen mit Variablen und Werten durchzuführen 

22. What does the following program print out?
```python
x = 3
x + 1
print(x)
```
3

23. Correct the following code:
```python
user_name = input(str("Enter your name: "))
```
24. Correct the following code:
```python
value = input("your age:")
print(value)
```


# LAB 1
```python
print("Heute ist ein \"regnerischer\" Tag \nWas machst du bei dem Wetter")

a = input("Gib die Temp in Fahrenheit an:") 
a = float(a)
b = (a - 32) * 5/9
print("Wir haben",b,"Celcius")

Gib die Temp in Fahrenheit an: 1
Wir haben -17.22222222222222 Celcius 

h = input("Gib die Höhe des Trapez an ") 
h = float(h) 
ul = input("gib die untere Länge an")
ul = float(ul)
ol = input("gib die obere Länge an")
ol = float(ol)
a = ul + ol
A = 0
A = float(A)
A = a/2*h
print(A)

Gib die Höhe des Trapez an  5
gib die untere Länge an 10
gib die obere Länge an 7
42.5




PI = 3.14
r = input("gib den Radius an") 
r = float(r)
A = PI * r *r 
print(A)<br>

gib den Radius an 2
12.56

```















