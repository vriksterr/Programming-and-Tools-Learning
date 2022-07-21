"""
 _______
| Range |
|_______|

-We can generate a swquence of numbers using range() function. range(10) will generate numbers from 0 to 9 (10 numbers)-> [0,1,2,3,4,5,6,7,8,9]

-We can also define the start, stop, and step size as range(start,stop,step size). step size defaults to 1 if not provided

"""

a = range(10)           # This will remember the info of the range it wont print it just remember the rage
b = list(range(10))     # This will print from 0 to 9
c = list(range(5,11))   # This will print from 5 to 10
d = list(range(5,11,2)) # This will print from 5 to 10 with 2 increments

print(a)
print(b)
print(c)
print(d)