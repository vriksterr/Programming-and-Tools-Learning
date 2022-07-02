/*

    ***************************
    * Pointers and References *
    ***************************

    Pointer:
        It has its own memory address and it stores addresses to what it is going to point to.

    References:
        Unlike a pointer, once a reference is bound to an object, it can not be "reseated" to another object. 
        The reference itself isn't an object (it has no identity; taking the address of a reference gives 
        you the address of the referent; remember: the reference is its referent).

        - also reference are same as pointers but reference memory address cannot be accessed coz there there 
          no defined compiler syntax to do so like the & operator but maybe can be done via some C++ library.
        
        - in most cases the optimizer in compiler optimizes away the reference with the object it was refering to in
          those cases there is no pointer.
          
        - so basically a referrence dose have its own memory address ( which cannot accessed via & but can be 
          done in assembly or some other C++ library) so it dose take memory space to store the address(4bytes same as pointer space to store address)
          of the referenced object a (eg: int &b{a};)and works same as pointer do unless it gets optimized away.

Refered from :https://isocpp.org/wiki/faq/references 
              && https://stackoverflow.com/questions/1950779/is-there-any-way-to-find-the-address-of-a-reference 
              && https://www.youtube.com/watch?v=Zl-JLUOuyGI 
              && https://stackoverflow.com/questions/21145171/c-references-and-pointers-at-the-compiler-level 
              && https://stackoverflow.com/questions/1501341/reference-type-and-pointer-in-disassembly
              && https://www.quora.com/Does-a-reference-variable-take-memory-in-RAM-C++
              && https://en.cppreference.com/w/cpp/language/reference
              && https://stackoverflow.com/questions/3954764/how-are-references-implemented-internally
*/

#include <iostream>
using namespace std;
int main(){

    int a{100};
    int b{200};
    int &c{a};
    int *d{&a};
    int *e(&c); //pointing to a reference which is pointing to a how its working without the optimization e -> c -> a and with optimization e -> a here c reference got optimized away and got replaced with a so this reference is not talking any memory address. 

    cout<<a<<b<<c<<d<<e;
}