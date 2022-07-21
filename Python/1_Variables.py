"""
 ___________________
| Python Data Types |
|___________________|

Same as C++

intergers = 9,8,6
float/Floating Point = 1.23,2.2222
Complex Numbers = 4 + 5j where j is a complex part where it is an imaginary number
Boolean = 0 or 1 or true or false which basically means 0 or 1
"""
#Valid variables/identifiers
stage = "Begineer"
age = 24
name = "anuj"
last_name =  "maan"
_id = '23x533268'
name2 = "vineet"
fruits_list = ['Apple', 'Banana', 'kiwi']   #it will print exactly like it is 

#invalid variables/identifiers
"""
2name = "vineet"
marks$=98
class = "Hello"
"""
print("Hello! welcome to my python learning which is written in double quotes and the learning stage is->", stage)
print('i am also another comment writter in single quotes ')
print(age)
print(name)
print(fruits_list)
print("for",name,"its data type is->", type(name))  #here we can chain commands like we can in C++ with cout and type(name) function will tell us the type of the data stored inside the variable name
