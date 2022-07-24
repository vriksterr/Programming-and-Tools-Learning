"""
 ____________________
| Funtions in Python |
|____________________|

In Python, function is a group of related statements that perform a specific task.

Functions help break our program into smaller and modular chunks. As out program grown larger and larger,
functions make it more organzed and manageable.

Build in Functions:

int()/float()/ eval()
input()
min()/max()
abs()
type()
len()
round()
range()

Modules:

A module is a file containing functions and variables defined in seprate files. A module is a simply a file
that contains Python code. When we break a program into modules, each module shouls contain functions 
that perform related task.

We can import the definitions inside a module to another module or the interactive interpreter in Python.

We use the import keyword to do this, we can rename modules using as, we can also import from a module
without importing the module as a whole using from
"""
import math as m    # so we imported a math library and we made an alias of it can called it m so we can use m instead of typing math
print(m.pi)

from math import cos,sin,pi    # we have just imported 1 funtion from the math library that is cos and just using it in out program
print(cos(3.14))
print(sin(3.14))

print(pi)

from math import *      #so we can import all the functions from math by using *




print("==============User Defined Function==============")

def greet():
    print("Good Morning, Anuj")

greet()



print("==============Functions Pass by Value==============")

print("What is your name?->")
name = input()

def hello(name,dish="pizza"):       #so what is happening here is that dish has a default value which will be used if no pass by value occures for dish when we call the function
    print("Welcome to function pass by value->",name,"and my fav food is->")

hello(name)


print("==============Functions return==============")

def sum_of_2_numbers(a,b):
    return a+b

def sum_of_marks(a):
    return sum(a)


marks = [1,2,3,4,5,6,7,8,9,10]


print("Sum of marks->",sum_of_marks(marks))
print("Sum of 2 numbers is->",sum_of_2_numbers(5,5))

