/*

    *********************************
    * C++ Runtime Memory Management *
    *********************************

    C++ provides a way for programmers to manage memory manually using pointers and dynamic memory allocation functions such as new and delete. 
    This gives C++ developers a lot of control over how memory is used in their programs, but it also means that they need to be careful to avoid 
    memory leaks, dangling pointers, and other issues that can arise from incorrect memory management.

    To help with these issues, C++ also provides features such as destructors, which are special member functions that are called automatically 
    when an object is destroyed. Destructors can be used to clean up any resources that an object may have acquired during its lifetime, such as dynamically allocated memory.

    In addition, C++11 introduced a new set of memory management features called smart pointers. Smart pointers are template classes that wrap 
    around raw pointers and provide automatic memory management. They use reference counting to keep track of how many objects are pointing to a 
    particular block of memory, and automatically delete the memory when it is no longer needed.

    Overall, C++ runtime memory management can be complex, but with careful use of pointers, dynamic memory allocation, destructors, and smart pointers, developers can 
    ensure that their programs use memory efficiently and avoid common memory-related bugs.

    !So for a temporary object a destructor is called after its use is complete?
    Yes, that's correct. When a temporary object goes out of scope or is no longer needed, its destructor is automatically called by the C++ runtime. 
    This is part of C++'s automatic memory management system, which ensures that memory used by objects is released when it is no longer needed.

    The destructor of an object is responsible for cleaning up any resources held by the object, such as dynamically allocated memory or file handles. 
    For temporary objects, the destructor is called automatically by the runtime after the object's scope is exited or the expression it appears in is evaluated. 
    This ensures that any resources held by the object are released in a timely manner and that memory leaks and other resource management issues are avoided.

    For examples look in 2_Plus_Operator_Overloading.cpp
    where we are using temp object
*/