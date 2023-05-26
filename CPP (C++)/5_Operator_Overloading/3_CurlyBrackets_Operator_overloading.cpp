#include <iostream>
using namespace std;

class NestedFunction {
    public:
    void operator()(int z) {
        cout << z;
    }
};

int main() {
    int x = 10;

    NestedFunction fun;
    fun(x);

    return 0;
}
