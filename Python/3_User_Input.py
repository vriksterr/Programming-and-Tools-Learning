"""
  ________________________
 | Taking input form user |
 |________________________|
 
 - input ()
 - all the inputs are in string type so we will have to convert it to the desired type using typecasting like we do it in C++.
"""

from re import A


name = input()

print("what was the user entered input", name)

print("======= TypeCasting ========")

a = int(input())
b = int(input())
c = a + b

print("As input takes input as string so we need to typecast it so the output is->",c)

