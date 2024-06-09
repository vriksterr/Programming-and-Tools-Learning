/*
    *************
    *   Masks   *
    *************
    Using the knowledge of the operators we can understand the concept of a "mask" in programming, especially in C++, generally refers to bit masks. Bit masks 
    are used to manipulate specific bits within an integer or other data types that can be interpreted as a sequence of bits.

    Definition:
    A bit mask is a binary number that is used to isolate or manipulate specific bits within another binary number through bitwise operations.

    Common Operations:
        1. Setting Bits:
        To set specific bits to `1`, you use the bitwise OR operator (`|`).
        ```
        int mask = 0b00000100; // Mask with the third bit set
        int value = 0b00000001; // Original value
        int result = value | mask; // Result is 0b00000101
        ```

        2. Clearing Bits:
        To clear specific bits to `0`, you use the bitwise AND operator (`&`) with a negated mask.
        ```
        int mask = 0b11111011; // Mask with the third bit cleared
        int value = 0b00000101; // Original value
        int result = value & mask; // Result is 0b00000001
        ```

        3. Toggling Bits:
        To toggle specific bits (invert them), you use the bitwise XOR operator (`^`).
        ```
        int mask = 0b00000100; // Mask with the third bit set
        int value = 0b00000101; // Original value
        int result = value ^ mask; // Result is 0b00000001
        ```

        4. Checking Bits:
        To check the value of specific bits, you use the bitwise AND operator (`&`) and compare the result with the mask.
        ```cpp
        int mask = 0b00000100; // Mask with the third bit set
        int value = 0b00000101; // Original value
        bool isSet = (value & mask) != 0; // Check if the third bit is set
        ```

    Practical Example:
        Suppose you have an integer representing a set of flags, and you want to manipulate and check specific flags.

        ```
        #include <iostream>

        int main() {
            const int FLAG_ONE = 0b00000001; // Flag 1
            const int FLAG_TWO = 0b00000010; // Flag 2
            const int FLAG_THREE = 0b00000100; // Flag 3

            int flags = 0; // No flags set

            // Setting FLAG_ONE and FLAG_THREE
            flags |= (FLAG_ONE | FLAG_THREE);
            std::cout << "Flags after setting FLAG_ONE and FLAG_THREE: " << std::bitset<8>(flags) << std::endl;

            // Clearing FLAG_ONE
            flags &= ~FLAG_ONE;
            std::cout << "Flags after clearing FLAG_ONE: " << std::bitset<8>(flags) << std::endl;

            // Toggling FLAG_TWO
            flags ^= FLAG_TWO;
            std::cout << "Flags after toggling FLAG_TWO: " << std::bitset<8>(flags) << std::endl;

            // Checking FLAG_THREE
            bool isFlagThreeSet = (flags & FLAG_THREE) != 0;
            std::cout << "Is FLAG_THREE set? " << isFlagThreeSet << std::endl;

            return 0;
        }
        ```
        This code demonstrates setting, clearing, toggling, and checking flags using bit masks.

    If "maska" is a typo or misinterpretation, and you meant something else, please provide more context or details, and I would be happy to help!

*/
#include <iostream>
#include <iomanip>
#include <bitset>


int main(){

	const int COLUMN_WIDTH {20};
    
	//Highlight position for bit of interest with a 1
	//Mask other positions with 0
	
    const unsigned char mask_bit_0 {0b00000001} ;//Bit0
    const unsigned char mask_bit_1 {0b00000010} ;//Bit1
    const unsigned char mask_bit_2 {0b00000100} ;//Bit2
    const unsigned char mask_bit_3 {0b00001000} ;//Bit3
    const unsigned char mask_bit_4 {0b00010000} ;//Bit4
    const unsigned char mask_bit_5 {0b00100000} ;//Bit5
    const unsigned char mask_bit_6 {0b01000000} ;//Bit6
    const unsigned char mask_bit_7 {0b10000000} ;//Bit7
    
    //Sandbox variable
    unsigned char var {0b00000000};// Starts off all bits off
    
    std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;



    //Set a few bits : make them 1's regardless of what's in there

	//SETTING BITS
    //Setting : |= with mask of the bit
	
    //Set bit 1
	std::cout << "Setting bit in position 1" << std::endl;
	var |= mask_bit_1;
	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

	//Set bit 5
	std::cout << "Setting bit in position 5" << std::endl;
	var |= mask_bit_5;
	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;


	//RESETTING BITS : set to 0
    //Resetting : &= (~mask)
	
	//Reset bit 1
	std::cout << "Resetting bit in position 1" << std::endl;
    var &= (~mask_bit_1);
	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

	//Reset bit 5
	std::cout << "Resetting bit in position 1" << std::endl;
    var &= (~mask_bit_5);
	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;


	//Set all bits
	std::cout << "Setting all bits" << std::endl;
    var |= ( mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 |
             mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;


	//Reset bits at pos 0,2,4,6
	std::cout << "Reset bits at pos 0,2,4,6" << std::endl;
    var &= ~(mask_bit_0 | mask_bit_2 | mask_bit_4 | mask_bit_6);
	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;



	//Check state of a bit
	std::cout << std::endl;
	std::cout << "Checking the state of each bit position (on/off)" << std::endl;
	std::cout << "bit0 is " << ((var & mask_bit_0) >> 0 )<< std::endl;
    std::cout << "bit1 is " << ((var & mask_bit_1) >> 1 ) << std::endl;
    std::cout << "bit2 is " << ((var & mask_bit_2) >> 2 ) << std::endl;
    std::cout << "bit3 is " << ((var & mask_bit_3) >> 3 ) << std::endl;
    std::cout << "bit4 is " << ((var & mask_bit_4) >> 4 ) << std::endl;
    std::cout << "bit5 is " << ((var & mask_bit_5) >> 5 ) << std::endl;
	std::cout << std::boolalpha;
    std::cout << "bit6 is " << ((var & mask_bit_6) >> 6 ) << std::endl;
	std::cout << "bit6 is " << static_cast<bool>(var & mask_bit_6) << std::endl;

    std::cout << "bit7 is " << ((var & mask_bit_7) >> 7 ) << std::endl;
    std::cout << "bit7 is " << static_cast<bool>(var & mask_bit_7) << std::endl;


	//Toggle bits
	//Toggle : var ^ mask
	
	//Toggle bit 0
	std::cout << std::endl;
	std::cout << "Toggle bit 0" << std::endl;
    var ^= mask_bit_0;
	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    //Toggle bit7 
	std::cout << "Toggle bit 7" << std::endl;
    var ^= mask_bit_7;
	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

	//Toggle multiple bits in one go : the 4 higher bits
	std::cout << "Toggle multiple bits in one go : the 4 higher bits" << std::endl;
    var ^= (mask_bit_7 | mask_bit_6 | mask_bit_5 | mask_bit_4);
	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
   
    return 0;
}