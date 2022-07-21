# single or multiline strings can be done via " " ' ' or for paragraph """ """ or ''' ''' 

from curses.ascii import isalpha


a= """Hey!
How-are you today
was waiting for you at bus stop"""

print(a)


#String indexing will print the a specific index of the string

print("a[0] will print->",a[0],"and a[-3] will print->",a[-3])
print("a[4:8] will print->",a[4:8])  #A specific range to be printed between 4 and 8 excluding 4 and 8
print("a[4:] will print->",a[4:])
print("a[:8] will print->",a[:8])
print("a[4:12] will print->",a[4:8:2])  #Here the 2 means after each string the next 2 strings will be skipped
print("a[::-1] will print->",a[::-1])    #Will print in reverse as as it is in reverse
print("a[-1::-1] will print->",a[-1::-1])# is same as above remember  if we are reversing the counting start will also be from reverse which will be -ve


print("=====================Strings Methods===============================")
"""
 _______________________
| Python String Methods |
|_______________________|

-Same as C++
-In python there are already predefined function that are there to check the type and return bool as result

isalpha()
isdigit()
islower()
lower()     #converts a string in lower letters
upper()     #converts a string in upper letters
isupper()
lstrip()
rstrip()
"""

password = "abcdefghijk"

print("Is the password entered by the user an isalpha() ->",password.isalpha())
print("Is the password entered by the user an isdigit() ->",password.isdigit()) 