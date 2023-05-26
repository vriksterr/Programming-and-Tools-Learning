/*

    ****************************************
    * How C++ Compilers Handles References *
    ****************************************
    Now it depends on the opitmizations level you set while compiling 
    for eg in clang if its -O0 which means no optimizations the references will be treated as a pointer
    of you set it to -O3 it will do register based optimizations

    When it comes to handling references, compilers have some flexibility in choosing their implementation strategies. Here are a few 
    different strategies that a compiler can employ:

    1. Aliasing: The most common strategy is to treat references as aliases or alternative names for the object being referred to. 
                 The compiler generates code that directly accesses the memory of the referenced object whenever the reference is used. This strategy avoids 
                 introducing additional memory addresses for references.

    2. Pointer-based: Some compilers may internally implement references as pointers. They use pointers to track the referenced objects and perform 
                      indirection whenever the reference is accessed. This strategy allows the compiler to reuse the existing pointer manipulation mechanisms.

    3. Optimized representation: Compilers may optimize the representation of references based on the specific context and usage patterns. For example, 
                                 if a reference is only used within a limited scope and its lifetime can be determined statically, the compiler may optimize the 
                                 reference to behave similarly to a pointer or eliminate it altogether.

    4. Register-based: In certain cases, especially with register-based architectures, compilers can optimize references by storing them directly 
                       in registers instead of memory locations. This can improve performance by eliminating memory accesses for frequently used references.

    It's important to note that the C++ language specification does not dictate a specific implementation strategy for references. The choice of strategy 
    is left to the compiler, as long as the behavior of references adheres to the language rules and semantics.

    The actual strategies employed by compilers may vary depending on the compiler, optimization settings, and the specific context of the code being compiled. 
    Different compilers may use different combinations of strategies or even employ more advanced techniques mentioned below.

    In addition to the strategies mentioned earlier, compilers can employ more advanced techniques to optimize the handling of references. Here are a few examples:

    1. Escape analysis: Compilers can perform escape analysis to determine if a reference escapes the local scope. If the compiler can prove that a reference does 
                        not escape the current function or scope, it can optimize the reference by storing it in a register instead of allocating memory for it.

    2. Reference inlining: When the compiler encounters a reference, it may decide to inline the operations performed on the referenced object. Instead of generating 
                           separate code to dereference the reference and access the object, the compiler can replace the reference with direct access to the object, eliminating the overhead 
                           of indirection.

    3. Copy elision: Copy elision is an optimization technique that allows the compiler to eliminate unnecessary copy operations. 
                     When returning a local object by value, the compiler can directly construct the object in the caller's context, bypassing the need 
                     for a temporary object. This optimization can be applied to references as well, allowing the referenced object to be constructed 
                     directly at the caller's location.

    4. Constant propagation: If a reference is bound to a constant value, the compiler can perform constant propagation. It replaces references 
                             with the actual constant value throughout the code, enabling further optimizations based on the known constant value.

    5. Reference collapsing: In template metaprogramming scenarios, where references are involved in complex type deduction and forwarding, 
                             compilers can employ reference collapsing rules to ensure consistent behavior and optimize the generated code.

    These advanced techniques go beyond the basic handling of references and involve more sophisticated analysis and transformations performed 
    by the compiler. The specific techniques employed can vary among compilers and depend on the optimization settings, target architecture, 
    and the capabilities of the compiler's optimization infrastructure.

    It's important to note that the effectiveness of these techniques and the level of optimization achieved can depend on factors such as the 
    complexity of the code, compiler capabilities, and the specific optimization flags used during compilation.


    This topic started coz of this video : https://youtu.be/wro8Bb6JnwU?t=224 where he forgets to tell about compiler optimizations and just basically assumes how
    its implemented under the hood as he did no optimizations option in compiler at the time of compile.
*/