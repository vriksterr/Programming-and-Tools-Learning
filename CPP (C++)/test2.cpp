#include <iostream>

int main() {
    switch (1) {
        case 0:
            std::cout << "Case 0" << std::endl;
            break;
                
        case 1:
            std::cout << "Case 1" << std::endl;
            break;
            
        default:
            int u = 10000; // Variable 'u' declared and initialized
            std::cout << "u: " << u << std::endl;
            break;
    }

    goto skipInitialization; // Jump to a label that bypasses the initialization of 'u'
    
    int v ; // Variable 'v' declared and initialized
    v = 1000;
    
skipInitialization:
    std::cout << "Skipping initialization" << std::endl;
    std::cout << "v: " << v << std::endl; // Error: 'v' is used uninitialized
    
    return 0;
}
