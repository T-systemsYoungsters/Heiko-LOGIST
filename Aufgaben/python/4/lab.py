import random
Q="Q"
E="E"
D="D"
C="C"
B="B"
A="A"
b=0
c=0
e=0
g=0
h=0
f=0
d=0
Milestraveled=0
thirst=0
cameltiredness=0
natives=20
drinksinthecanteen=4
print("Welcome to Camel!")
print("You have stolen a camel to make your way across the great Mobi desert.")
print("The natives want their camel back and are chasing you down! Survive your desert trek and outrun the natives.")
done = False
bool(done)

while done == False:
    print("A. Drink from your canteen.")
    print("B. Ahead moderate speed.")
    print("C. Ahead full speed.")
    print("D. Stop for the night.")
    print("E. Status check.")
    print("Q. Quit.")
    print("A ,B ,C ,D ,or Q ?")
    h=(random.randint(1,20))
    a=input()
    if a==Q:
        done=True
    if a==E:
        print("Miles traveled:",Milestraveled,"\n","your thirst:",thirst,"\n","your camel tiredness is:",cameltiredness,"\n","natives are ",natives,"miles away","\n","drinks in the canteen:",drinksinthecanteen)
    if a==D:
        cameltiredness=0
        print("Camel is happy")
        b=(random.randint(7,14))
        natives=natives-b
        print("the natives are",natives,"miles away")
    elif a==C:
        c=(random.randint(10,20))
        print("you moved",c,"miles")
        Milestraveled=Milestraveled+c
        print("combined you moved",Milestraveled,"miles")
        thirst=thirst+1
        print("you got more thirsty",thirst)
        d=(random.randint(1,3))
        cameltiredness=cameltiredness+d
        print("the tiredness of your camel is",cameltiredness)
        e=(random.randint(7,14))
        natives=natives-e+c
        print("the natives moved",e,"miles")
        print("the natives are",natives,"miles away")
    if a==B:
        f=(random.randint(5,12))
        print("you moved",f,"miles")
        Milestraveled=Milestraveled+f
        print("combined you moved",Milestraveled,"miles")
        thirst=thirst+1
        print("you got more thirsty",thirst)
        cameltiredness=cameltiredness+1
        print("your camel got more tired",cameltiredness)
        g=(random.randint(7,14))
        natives=natives-g+f
        print("the natives moved",g,"miles")
        print("the natives are",natives,"miles away")
    if a==A:
        print("glug glug glug")
        if drinksinthecanteen>0:
            drinksinthecanteen=drinksinthecanteen-1
            print("you have drunk",drinksinthecanteen)
        else:
            print("OH NO! Your canteen is empty")
    if thirst>4:
        print("you are thirsty",thirst)
    if thirst>6:
        print("You died of thirst!")
        done=True
    if cameltiredness>5:
        print("the camel tiredness is above 5")
    if cameltiredness>8:
        print("your camel died, that means you have to  walk, but it doesnt take long until they will get you")
        done=True
    if natives<15:
        print("faster the natives are close")
        print(natives)
    if natives ==0 or natives <0:
        print("they have you, hopefully they are merciful")
        done=True
    if Milestraveled > 200:
        print("you did it, you left the desert")
        print("YOU WON!")
    if h==20:
        print("you found a oasis")
        thirst=0
        cameltiredness=0
        drinksinthecanteen=4
        print("You have refilled your canteen")
        print("You and your camel rested")
        print("your thirst is:",thirst,"\n","the tiredness is:",cameltiredness,"\n","your canteen is full:",drinksinthecanteen)
    
        
    
