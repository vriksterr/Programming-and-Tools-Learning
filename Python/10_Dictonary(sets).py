"""
 ___________
| Dictonary |
|___________|

It is same as Sets and maps in C++ where unique non-repeating elements are stored and can also store with
key-value pair as well.

Python dictionary is an unordered collection of items. While other compound data tupes have only value as an element,
a dictionary has a key: value pair.

1.  my_dict = {}
2.  my_dict = {1:'apple',2:'ball'}          #Here 1 is key and apple is value
3.  my_dict = {'name': 'John', 1: [2,4,3]}
4.  my_dict = dict({1:'apple', 2:'ball'})

Updating an element in a dictonary is same as we do in C++
"""

a = {1,2,3,4,5,6,4,6,1,0}     #as you can see we have repeating elements 

print(a)        #but you can see only unique elements are printed in accending order

b = {1: 30, 2: 60, 3: 90, 4: 130, 5:1000, 6:2000,}

for i in b:
    print(i,b[i])
