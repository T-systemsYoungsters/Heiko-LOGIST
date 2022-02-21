# Worksheet04
1. 
```python
for i in range(10): 
    print("Heiko")
print("done")
```
2.
```python
for i in range(20): 
    print("Red")  
    print("Gold") 
```
3. 
```python
for i in range(50): 
  print((i + 1) * 2) 
```
4.
```python
x=10 
while x>0: 
    print(x) 
    x=x-1 
print("Blast off!")
```
5. x ist die letzte Zahl die eingegeben wurde, i die Anzahl an Nummern nicht sum und int(input())
```python
print("This program takes three numbers and returns the sum.")
total = 0
x = 0
 
for i in range(3):
    x = int(input("Enter a number: "))
    total = total + x
print("The total is:", total)
```
6. 
```python
import random 
print(random.randint(1,10))
```
7.
```python
import random 
print(random.uniform(0.5,10))
```
8. 
```python
y=0
z=0
a=0
b=0
for i in range(7):
    x = int(input("Enter a number:"))
    y = y+x
    if x>0:
        z=z+1
    elif x<0:
        a=a+1
    else:
        b=b+1
            
print("the total is:",y)
print("positive:",z,"negative:",a,"zeros:",b)
              
```
9. 
```python
a=0
b=0
c=0
import random
for i in range (50):
    a=(random.randint(0,1))
    if a==0:
        b=b+1
        print("heads")
    else:
        c=c+1
        print("tails")
print("heads:",b,"tails:",c)
```
10. 
```python
import random
rock=0
paper=0
scissor=0
print("choose one by typing 0,1 or2")
print("rock = 0")
print("paper = 1")
print("scissor = 2")
b=int(input())
a=random.randint(0,2)
if a == 0:
    print("rock")
elif a == 1:
    print("paper")
elif a==2:
    print("scissor")
if b==a:
    print("draw")
elif a==0 and b==1:
    print("you win")
elif a==0 and b==2:
    print("you loose")
elif a==1 and b==0:
    print("you loose")
elif a==1 and b==2:
    print("you win")
elif a==2 and b==1:
    print("you loose")
elif a==2 and b==0:
    print("you win")
 
