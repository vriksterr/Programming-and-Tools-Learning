#include <iostream>
#include <bitset>   //for std::bitset<>()


int main(){

    unsigned short int data {15};

    std::cout << "data (dec) : " <<std::showbase <<  std::dec << data << std::endl; //shows result in decimal
    std::cout << "data (oct) : " <<std::showbase <<  std::oct << data << std::endl; //shows result in octal
    std::cout << "data (hex) : " <<std::showbase <<  std::hex << data << std::endl; //shows result in hexadecimal
    std::cout << "data (bin) : " << std::bitset<16>(data) << std::endl; //shows result in binary
   
    return 0;
}