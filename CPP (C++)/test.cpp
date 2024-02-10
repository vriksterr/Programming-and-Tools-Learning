/*   

    ***************************
    *
    ***************************

     __________________________
    |
    |__________________________

      /_________________________
     /
    /_________________________

    
    •
    •
    •

*/

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <iterator>
#include <fstream>
#include <thread>
#include <mutex>
#include <cmath>
#include <memory>
#include <stdexcept>
using vrik= int;
int main() {
    int car;
    // Containers
    std::vector<int> myVector = {4, 2, 7, 1, 9};
    std::deque<char> myDeque = {'a', 'b', 'c'};
    std::list<double> myList = {3.14, 2.71, 1.618};

    // Strings
    std::string myString = "Hello, ";
    std::wstring myWideString = L"World!";

    // Streams
    std::cout << "Containers:" << std::endl;
    std::copy(myVector.begin(), myVector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    // Algorithms
    std::sort(myVector.begin(), myVector.end());
    std::reverse(myList.begin(), myList.end());

    // Iterators
    std::cout << "Sorted Vector:";
    std::copy(myVector.begin(), myVector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    // Memory Management
    std::unique_ptr<int> myUniquePtr = std::make_unique<int>(42);

    // Concurrency
    std::mutex myMutex;
    std::thread myThread([&myMutex]() {
        std::lock_guard<std::mutex> lock(myMutex);
        std::cout << "Thread ID: " << std::this_thread::get_id() << std::endl;
    });

    myThread.join();

    // Numeric Functions
    double sqrtResult = std::sqrt(25.0);
    std::cout << "Square root of 25: " << sqrtResult << std::endl;

    // Utility Functions
    std::swap(myVector[0], myVector[1]);
    std::cout << "Swapped elements: ";
    std::copy(myVector.begin(), myVector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    // Exception Handling
    try {
        throw std::runtime_error("An exception occurred!");
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
