"""
 ________________
| List in Python |
|________________|

-List in python supports different type of data to be inputed by the user its not like C++ where we have a 
 defined type for a array like int char string.
"""
from statistics import median_high


a = 5
b = 5
my_list = [1,2,"Vineet",input(),a+b]
my_list[2] = "Viiniit"  #Changing the element at the 3rd index
print("My current list is->",my_list)
print("Thrid element in my list is->",my_list[2])
print("Last element in the string is->",my_list[-1])


print("=============List Comprehension==============")
"""
 _____________________
| Lists Comprehension |
|_____________________|

List comprehension is an elegant and concise way to create a new list from an existing list in python.

List comprehension consists of an expression followed by for statement inside square brackets.

new list = [expression      for item in list        if condition]
"""

#Making a list 
list = [x   for x in range(100)     if x%2 == 0]
print("Making a list->",list) #will print even numbers

#Print the 3**i values 
list2=[3**i for i in range(10)]
print("Print the 3**i values->",list2)


print("=============List Methods==============")
"""
 ______________
| List Methods |
|______________|

-Simillar to vector where we push_back() or list where we can push_back(), pop_back(), etc

-appent
-insert
-sort
-pop
-clear
-reverse
-index
-count

"""

method_list = [1,2,3,"apple"]

#append
method_list.append(4)

#insert
method_list.insert(1,2.5)   #at position 1 insert 2.5

#sort
method_list.sort()      #wont work with list that have both alphabets and numericals

#reverse
method_list.reverse()   #wont work with list that have both alphabets and numericals

#pop
method_list.pop(0)

#clear
method_list.clear()

#index
print("index position of an element->", method_list.index("apple"))

#count
print("how many times apple has arrived in the list->", method_list.count("apple"))



print("=============List Functions==============")
"""
 ________________
| List Functions |
|________________|

-len(list)      #tells the length of a string list
-max(list)      #tells the maximul element in a string
-min(list)      #tells the manimum element in a string
-list(seq)      #typecast a list in a specific type
-sum(list)      #tells the sum of a numbers in a list


"""


print("=============for loops with Lists==============")
"""
 ______________________
| for loops with Lists |
|______________________|
"""

for car in ['swift','ritz','bmw']:
    print(car)