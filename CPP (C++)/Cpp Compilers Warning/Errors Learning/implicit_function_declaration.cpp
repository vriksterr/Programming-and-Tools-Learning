/*

    *********************************
    * Implicit Function Declaration *
    *********************************
    Give a warning (or error) whenever a function is used before being declared.


*/

// For example fork() function dosent work in windows but works in linux so compiler gives warning as it is not defined and gives an implicit function
// declaration warning as we are using mingiw compiler on windows but it will work on linux.
// What is a fork function it is used to creat child process of the current running process.

#include <iostream>
#include <sys/wait.h>       //works on linux
#include <unistd.h>
int function(){
    fork();
    printf("2\n");

}
int main() {
    printf("1\n");
    function();
    printf("3\n");
    return 0;
}
