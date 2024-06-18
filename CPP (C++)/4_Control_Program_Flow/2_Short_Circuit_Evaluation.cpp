/*
    ********************************
    *   Short Circuit Evaluation   *
    ********************************
    Short circuit evaluation in C++ is a programming technique used with logical operators where the evaluation of expressions stops as soon as the result is determined. These
    short circuit evaluation can some you expensive computations in your program.
    This feature is typically used with the logical AND (`&&`) and logical OR (`||`) operators.

    1.Logical AND (`&&`):
        In an expression using the `&&` operator, if the first operand evaluates to `false`, the entire expression will evaluate to `false` regardless of the value of 
        the second operand. Thus, the second operand is not evaluated.

        **Example:**
        ```cpp
        int a = 0;
        int b = 10;

        if (a != 0 && b / a > 5) {
            // This block will not be executed because the first operand (a != 0) is false.
            // Therefore, the second operand (b / a > 5) is not evaluated, avoiding a division by zero.
        }
        ```

    2.Logical OR (`||`)
        In an expression using the `||` operator, if the first operand evaluates to `true`, the entire expression will evaluate to `true` regardless of the value of 
        the second operand. Thus, the second operand is not evaluated.

        **Example:**
        ```cpp
        int a = 1;
        int b = 0;

        if (a == 1 || b / a > 5) {
            // This block will be executed because the first operand (a == 1) is true.
            // Therefore, the second operand (b / a > 5) is not evaluated, avoiding a division by zero.
        }
        ```

    ### Benefits of Short Circuit Evaluation
    1. **Performance Improvement:** By not evaluating all operands, short circuit evaluation can improve performance, especially when dealing with complex or time-consuming operations.
    2. **Prevention of Errors:** It helps prevent runtime errors, such as division by zero or null pointer dereferencing, by ensuring that potentially unsafe code is not executed if it isn't necessary.

    ### Practical Usage
    Short circuit evaluation is often used in situations where certain conditions must be met before subsequent conditions are checked. For example, checking if a pointer 
    is not `nullptr` before accessing its value:
    ```cpp
    if (ptr != nullptr && *ptr == some_value) {
        // Safe to dereference ptr because we know it is not nullptr
    }
    ```

    ### Conclusion
    Short circuit evaluation is a powerful feature in C++ that optimizes the evaluation process of logical expressions and enhances code safety by preventing unnecessary or unsafe operations.
*/

#include <iostream>

bool car() {
    std::cout << "car function running" << std::endl;
    return false;
}

bool house() {
    std::cout << "house function running" << std::endl;
    return true;
}
bool job() {
    std::cout << "job function running" << std::endl;
    return true;
}
bool spouse() {
    std::cout << "spouse function running" << std::endl;
    return true;
}



int main(){


	bool a{ true };
	bool b{ true };
	bool c{ true };
	bool d{ false };

	bool p{ false };
	bool q{ false };
	bool r{ false };
	bool m{ true };

	
	//AND : If one of the operands is 0, the result is 0
	std::cout << std::endl;
	std::cout << "AND short circuit" << std::endl;
	bool result = a && b && c && d;
	std::cout << "result : " << std::boolalpha << result << std::endl;

	//OR : If one of the operands is 1, the result is 1.
	std::cout << std::endl;
	std::cout << "OR short circuit" << std::endl;
	result = p || q || r || m;
	std::cout << "result : " << std::boolalpha << result << std::endl;
    std::cout<<"***************************************************"<<std::endl;


   //to see if the compiler is doing the shortcut evaluation or no
    if (car() && house() && job() && spouse()) {        //here the first 2 are getting evaluated to false so we jumped to else so short circuit evaluation is working
        std::cout << "I am happy(&&)" << std::endl;
    }
    else {
        std::cout << "I am sad(&&)" << std::endl;
    }
    

    if (car() || house() || job() || spouse()) {
        std::cout << "I am happy(||)" << std::endl;
    }
    else {
        std::cout << "I am sad(||)" << std::endl;
    }
   
    return 0;
}