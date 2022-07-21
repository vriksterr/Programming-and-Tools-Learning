"""
 _________________
| Loops in Python |
|_________________|

Its functioning is same as C++ loops
"""

#for loops

for x in range(10):
    print(2*x, end=", ")

a=['anuj', 'rohit', 'shivam']
# this is same as the C++ for(int x : a){} wehre all the values of a are being copied over to x and then printed
for name in a:
    print(name * 2)     #this will return the repeted names 2 times



#while loops
x = 5
while x >= 0:
    print(x)
    x -= 1


"""
 ________________________________________
| Continue and Break statement in Python |
|________________________________________|

Its functioning is same as C++
"""
#continue continues the statement when its working and breaks out of the loop itself reffer C++