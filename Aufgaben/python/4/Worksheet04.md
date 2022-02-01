# Worksheet04
1. for i in range(10): <br>
    print("Heiko")<br>
print("done")<br>

2. for i in range(20): <br>
    print("Red")  <br>
    print("Gold") <br>

3. for i in range(50): <br>
    print((i + 1) * 2) <br>

4. x=10 <br>
while x>0: <br>
    print(x) <br>
    x=x-1 <br>
print("Blast off!")<br>
5. x ist die letzte Zahl die eingegeben wurde, i die Anzahl an Nummern nicht sum und int(input())<br>
print("This program takes three numbers and returns the sum.")<br>
total = 0<br>
x = 0<br>
 
for i in range(3):<br>
    x = int(input("Enter a number: "))<br>
    total = total + x<br>
print("The total is:", total)<br>

6. import random <br>
print(random.randint(1,10))<br>

7. import random <br>
print(random.uniform(0.5,10))<br>
8. 
y=0<br>
z=0<br>
a=0<br>
b=0<br>
for i in range(7):<br>
    x = int(input("Enter a number:"))<br>
    y = y+x<br>
    if x>0:<br>
        z=z+1<br>
    elif x<0:<br>
        a=a+1<br>
    else:<br>
        b=b+1<br>
            
print("the total is:",y)<br>
print("positive:",z,"negative:",a,"zeros:",b)<br>
              

9. a=0<br>
b=0<br>
c=0<br>
import random<br>
for i in range (50):<br>
    a=(random.randint(0,1))<br>
    if a==0:<br>
        b=b+1<br>
        print("heads")<br>
    else:<br>
        c=c+1<br>
        print("tails")<br>
print("heads:",b,"tails:",c)<br>
10. 
import random<br>
rock=0<br>
paper=0<br>
scissor=0<br>
print("choose one by typing 0,1 or2")<br>
print("rock = 0")<br>
print("paper = 1")<br>
print("scissor = 2")<br>
b=int(input())<br>
a=random.randint(0,2)<br>
if a == 0:<br>
    print("rock")<br>
elif a == 1:<br>
    print("paper")<br>
elif a==2:<br>
    print("scissor")<br>
if b==a:<br>
    print("draw")<br>
elif a==0 and b==1:<br>
    print("you win")<br>
elif a==0 and b==2:<br>
    print("you loose")<br>
elif a==1 and b==0:<br>
    print("you loose")<br>
elif a==1 and b==2:<br>
    print("you win")<br>
elif a==2 and b==1:<br>
    print("you loose")<br>
elif a==2 and b==0:<br>
    print("you win")<br>
