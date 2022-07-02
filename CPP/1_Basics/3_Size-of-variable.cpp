#include <iostream>
#include <string>
#include <climits> // make sure to include climit for integer types similar information for floating point numbers is contained in <cfloat>

int main()
    {
        std::cout<<"sizeof information"<<std::endl;
        std::cout<<"==============================="<<std::endl;

        std::cout<<"char: "<< sizeof(char) << "bytes"<<std::endl;
        std::cout<<"int: "<< sizeof(int) << "bytes"<<std::endl;
        std::cout<<"unsigned int: "<< sizeof(unsigned int) << "bytes"<<std::endl;
        std::cout<<"short: "<< sizeof(short) << "bytes"<<std::endl;
        std::cout<<"long: "<< sizeof(long) << "bytes"<<std::endl;
        std::cout<<"long long: "<< sizeof(long long) << "bytes"<<std::endl;

        std::cout<<"================================"<<std::endl;

        std::cout<<"float: "<<sizeof(float)<<"bytes"<<std::endl;
        std::cout<<"double: "<<sizeof(double)<<"bytes"<<std::endl;
        std::cout<<"long double: "<<sizeof(long double)<<"bytes"<<std::endl;

        // use value defined in <climit>
        std::cout<<"================================"<<std::endl;

        std::cout<<"Minimum Values:"<<std::endl;
        std::cout<<"char: "<<CHAR_MIN<<std::endl;
        std::cout<<"int: "<<INT_MIN<<std::endl;
        std::cout<<"short: "<<SHRT_MIN<<std::endl;
        std::cout<<"long: "<<LONG_MIN<<std::endl;
        std::cout<<"long long: "<<LLONG_MIN<<std::endl;

        std::cout<<"================================"<<std::endl;

        std::cout<<"Maximum Values:"<<std::endl;
        std::cout<<"char: "<<CHAR_MAX<<std::endl;
        std::cout<<"int: "<<INT_MAX<<std::endl;
        std::cout<<"short: "<<SHRT_MAX<<std::endl;
        std::cout<<"long: "<<LONG_MAX<<std::endl;
        std::cout<<"long long: "<<LLONG_MAX<<std::endl;
        // A C++ string can have up to 4294967295 characters (this was on a site which is less than what is actuall true) https://en.cppreference.com/w/cpp/string/basic_string/max_size https://stackoverflow.com/questions/3649639/limit-on-string-size-in-c
        std::string s;
        std::cout<< "Maximum size of a string is " << s.max_size() << " ("<< std::hex << std::showbase << s.max_size()<< "), pointer size: " << std::dec<< CHAR_BIT*sizeof(void*) << " bits\n";


        return 0;
    }