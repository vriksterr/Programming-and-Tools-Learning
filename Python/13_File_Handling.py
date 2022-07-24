"""
 __________________
| What is a file ? |
|__________________|

File is a named location on disk to store related information. It is used to permanently store data in a
non-volatile memory(eg. hard disk).

in python, a file operation takes place in the following order.

1. Open a file
2. Read or write(Perform operation)
3. Close the file



Open a file:

Python has a build in function open() to open a file. This function returns a file object.

We can specify the mode while opening a file. In mode, we specify weather we want to read 'r',write 'w'
or append 'a' to the file. We also specify if we want to open the file in the text mode or binary mode.

We can also use with statement instead of open() and close():
with open('filename.txt', 'w') as fileObject:
"""

f = open('/home/vineet/Vineet/Vineet/Documents/Work/Programming and Tools Learning/Python/textfile.txt','r')

print(f.readline())

f.read  #reads the entire file 
f.close             #we have to close file once work done as it is resource heavy