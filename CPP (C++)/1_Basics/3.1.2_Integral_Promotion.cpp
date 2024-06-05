/*

	*************************
    *	Integral Promotion	*
    *************************
	Integral types less than 4 bytes in size dont support arithmetic operations. This is due to processor design and they decided to choose int as the smallest integral type for which you can 
	do arthemetic operations.
	In C++, integral promotion is a process where smaller integer types are converted to a larger integer type by compiler (`int` or `unsigned int`) when they are used in expressions. 
	This promotion occurs to ensure that arithmetic operations are performed with a type that can represent the result accurately and efficiently. Here's why `short int` and `char` are promoted to `int`:

	### Reasons for Integral Promotion:

	1. **Standardization and Uniformity**:
	- C++ inherited integral promotion rules from the C programming language. These rules were designed to make arithmetic operations consistent and avoid complications with small integer types.
	- By promoting smaller integer types to `int`, the language ensures uniformity in arithmetic operations, making the behavior more predictable.

	2. **Efficiency**:
	- Modern CPUs are optimized to handle operations on the word size (typically 32 or 64 bits) efficiently. Performing arithmetic operations on `int` (which is usually 32 bits on many systems) can be more 
	  efficient than performing them on smaller types like `char` or `short int`.
	- Promoting to `int` reduces the need for the CPU to handle multiple cases for different small integer sizes, simplifying the hardware design and improving performance.

	3. **Avoiding Overflows**:
	- Promoting smaller types to `int` helps to avoid overflow issues that could occur if the operations were performed on the smaller types themselves. For example, adding two `char` values 
	  could easily exceed the range of `char` (typically -128 to 127), but promoting to `int` (typically -2,147,483,648 to 2,147,483,647) provides a much larger range and reduces the risk of overflow.
	
	4. **Backward Compatibility**:
	- These promotion rules have been part of C and C++ since their inception. Changing these rules would break a large amount of existing code, so the rules remain consistent to maintain 
	  backward compatibility.

	### Integral Promotion Rules:

	1. **Promotion of `char` and `short int`**:
	- When an arithmetic operation involves `char` or `short int`, these types are promoted to `int` if `int` can represent all the values of the original type.
	- If `int` cannot represent all the values of the original type (which is rare), they are promoted to `unsigned int`.

	### Example in the Provided Code:

	```cpp
	short int var1 {10};  // 2 bytes
	short int var2 {20};  // 2 bytes
	char var3 {40};       // 1 byte
	char var4 {50};       // 1 byte

	auto result1 = var1 + var2;  // var1 and var2 are promoted to int before addition
	auto result2 = var3 + var4;  // var3 and var4 are promoted to int before addition
	```

	- `var1` and `var2` are `short int` (2 bytes). When `var1 + var2` is evaluated, both are promoted to `int` before the addition. The result is of type `int`.
	- `var3` and `var4` are `char` (1 byte). When `var3 + var4` is evaluated, both are promoted to `int` before the addition. The result is of type `int`.

	### Conclusion:

	Integral promotion to `int` in C++ ensures consistent and efficient arithmetic operations, leveraging the capabilities of modern CPUs and providing a larger range to avoid overflow issues. 
	This behavior is deeply rooted in the language's history and design principles, ensuring backward compatibility and predictability.


*/

#include <iostream>


int main(){

	short int var1 {10}; // 2 bytes
	short int var2 {20};
	
	char var3 {40}; //1
	char var4 {50};
	
	std::cout << "size of var1 : " << sizeof(var1) << std::endl;
	std::cout << "size of var2 : " << sizeof(var2) << std::endl;
	std::cout << "size of var3 : " << sizeof(var3) << std::endl;
	std::cout << "size of var4 : " << sizeof(var4) << std::endl;
	
	auto result1 = var1 + var2 ;
	auto result2 = var3 + var4;
	
	std::cout << "size of result1 : " << sizeof(result1) << std::endl; // 4
	std::cout << "size of result2 : " << sizeof(result2) << std::endl; // 4
	
   
    return 0;
}