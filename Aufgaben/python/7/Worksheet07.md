## Worksheet07

1.
```python
String a=hallo
integer a=3
float a=5.433
boolean a=true
```
2. 
2, 101, out of range

3. 
die ganze liste (5,2,6,8,101)

4. 
[5, 2, 6, 10, 101] und error wegen tuple

5. 
[15] (5*3)
[3, 3, 3, 3, 3] weil 5 mal die list [3]

6. 
[5, 0, 1, 2, 3, 4]  weil die 5 von der liste und 0-4 von i in range 5

7. 
2<br>
9<br>
8<br>
1<br>
Traceback (most recent call last):<br>
  File "<string>", line 5, in <module><br>
TypeError: object of type 'int' has no len()<br>

8. 
SimpsonCollege<br>
Simpsono <br>
i

9. 
S<br>
i<br>
m<br>
p<br>
s<br>
o<br>
n<br>

10. 
SimpsonCollegeCollegeCollege

11. 
HiHiHi

12. 
The 3rd spot is:  <br>
The -1 spot is: . <br>

13. 
1<br>
012<br>
3456789<br>

14. 
```python
liste=[]
for i in range(5):
    a = input("gib eine ganze zahl ein:")
    a = int(a)
    liste.append(a)
    print(liste)
  ```

15. 
 ```python
my_list=[4,7,4,68,24,8,12,2]
print(my_list)
list_total=0

for i in range(len(my_list)):
    list_total+=my_list[i]
print(list_total)
avg=list_total/len(my_list)
print("The avarage is:",avg)




