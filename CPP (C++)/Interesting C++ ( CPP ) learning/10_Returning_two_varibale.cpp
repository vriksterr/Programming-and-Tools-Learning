/*
    In C++, the comma operator `,` is used to separate expressions. In the `get()` function, the expression `100l, 150l` uses the comma operator. However, only the value `150l` will be returned because the comma operator evaluates each expression from left to right and returns the value of the last expression.

    So effectively, `get()` returns `150l`.

    However, in the main function, there's a problem with the assignment of the returned value. You're trying to assign the returned value to two variables `a` and `b`, but the assignment will only work for `b`. This is because in C++, when multiple values are returned, only the first one will be assigned to the first variable in the list, and the rest will be discarded.

    Therefore, in the line `long long a, b = get();`, only `b` gets assigned the value `150l`. The value assigned to `a` will be uninitialized, which means it will contain garbage data.

    When you print `a` and `b`, you'll see the value of `b` (which is `150l`), but the value of `a` is unpredictable and could be any arbitrary value.

    To fix this and assign both values properly, you can return a `std::pair` or use references as function parameters to modify multiple variables. Here's an example using `std::pair`:

    ```cpp
    #include <iostream>
    using namespace std;

    pair<long long, long long> get(){
    return {100l, 150l};
    }

    int main(){
    pair<long long, long long> result = get();
    long long a = result.first;
    long long b = result.second;
    printf("%ld\n", b);
    printf("%ld\n", a);
    }
    ```

    This way, both `a` and `b` will be assigned their respective values correctly.


    source 
        tho this is a troll but a good learning

        https://twitter.com/supahvee1234/status/1761824431821713710
        https://x.com/CustomWetware/status/1762008769662198112?s=20
*/

#include <iostream>
using namespace std;

long long get(){
  return 100l, 150l;
}

int main(){
  long long a,b = get();
  printf("%ld\n",b);
  printf("%ld\n",a);

}
