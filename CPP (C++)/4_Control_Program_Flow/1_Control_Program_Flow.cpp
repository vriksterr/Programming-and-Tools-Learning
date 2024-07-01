/* 
    **************************
    *  Control Program Flow  *
    **************************
    We can change the flow of program based on condition. Also you will see many control flow can either use or not use scopes {} remember if a control flow needs to have 
    more than one statement you will have to put them inside a scope.

    Selection: It allows you to make decisions and execute parts of your program only when certain conditions are true or false.
        - if statement, if Statement with Initialization (since C++17), if-else statement, Nested if statement if { if {if {}}}
        - Switch statement, Switch with Initialization
        - Conditional operator ?:
        - Try Catch (exception handling)

    Iteration: These constructs that let us loop and repeat parts of our program. Looping or repeating.
        - for loop, Range-based for loop
        - while loop
        - do-while loop
        - continue and break

        Some other types of Control Flow for knowledge
            - Infinite loops
            - Nested loops- loops withing loops

    Unconditional Jumps: This involves transferring control to another part of the program unconditionally.
        - goto

    Source:
    (Exception Handling Resources)
    https://www.w3schools.com/cpp/cpp_exceptions.asp#:~:text=The%20try%20statement%20allows%20you,occurs%20in%20the%20try%20block.
    https://www.youtube.com/watch?v=kjEhqgmEiWY
    https://www.youtube.com/watch?v=EyXXLpFriMc

*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{

//____________________________
//     Continue & Break
//____________________________
/*
    In C++ continue and break are used in a loop only like while, for, do-while, switch statements. Outside of these contexts, these statements are not applicable, and attempting to use them may result in compilation errors.
    When you are using continue; in program like for example in if else statements and you use continue it will continue and if you use break; it will exit out of the loop.

    However, it's important to note that the use of break and continue is specific to control flow structures, and they don't have a broader application outside of loops and switch statements in the C++ language.

    If you're looking for more generalized ways to alter the flow of your program or exit a function, you might want to explore other constructs and 
    statements such as return (to exit a function), goto (although its use is generally discouraged due to its potential for creating spaghetti code), or throwing and catching exceptions (for more advanced error handling scenarios).
*/

//____________________________
//       IF Statement
//____________________________
/* The difference between if if and if else statement is that in the if else, only one of the two statements can be executed 
   while in the if if case it is possible for both of them to be executed. In below example, it does not matter since the two 
   conditions are mutually exclusive, but it may become important if it is possible for both conditions to be true. In that case, 
   “if else if” would only execute the first “if” statement and “if if” would execute them both in sequence.
    
   Also in if statement the value inside bracket is evaluated to either be 0=false and 1(or any non zero number)=true
   so if we do this:
   int a = 0;
   int b = 5;
   if (a = b) {
        std::cout<<"it works";
    }
   the result of a = b where a is now 5 which is a non zero number so if statement is true and "it works" gets printed.

*/

    int num {};
    const int min {10};
    const int max {100};

    if (min){
        cout<<"In if statements any value gets converted to a bool by compiler and any value other than 0 will be true including -ve numbers." <<endl;
    }
 
    cout<<"Enter a number between "<<min<<" and "<<max<<" : ";
    cin>>num;

    if(num >= min) {

        cout<<endl<<"=================IF Statement 1================="<<endl;
        cout<<num<<" is greater than or equal to "<<min<<endl;

        int diff {num-min};
        cout<<num<<" is "<<diff<<" greater than "<<min<<endl;
    }
    
    if (num <= max ) {

        cout<<endl<<"=================IF Statement 2================="<<endl;
        cout<<num<<" is less than or equal to "<<min<<endl;

        int diff {max - num};
        cout<<num<<" is "<<diff<<" max than "<<max<<endl;        

    }

    if (num >= min && num <= max) {

        cout<<endl<<"=================IF Statement 3================="<<endl;
        cout<<num<<" is in range "<<endl;
        cout<<" This means statement 1 and 2 must also display!! "<<endl;

    }

    if (num == min || num == max) {

        cout<<endl<<"=================IF Statement 4================="<<endl;
        cout<<num<<" is right on a boundary "<<endl;
        cout<<" This means all 4 statements display "<<endl<<endl;
        
    }

    if (num == min != num == max) {     //This was used to showcase the != Logical Operator

        cout<<endl<<"=================IF Statement 5================="<<endl;
        cout<<num<<" is nowhere on boundry "<<endl;
       
    }

//____________________________________________
//            IF-Else Statement
//____________________________________________

    int num1{};
    const int target{10};

    cout<<endl<<"Enter a number and I'll comopare it to "<<target<<" : ";
    cin>>num;

    if(num>=target){

        cout<<endl<<"============================================"<<endl;
        cout<<num<<" is greater than or equal to "<<target<<endl;
        int diff{num - target};
        cout<<num<<" is "<<diff<<" greater than "<<target<<endl;
    }

    else if (num <= target) {

        cout<<" is smaller than or equal to "<<target<<endl;
    }

    else {

        cout<<endl<<"============================================"<<endl;
        cout<<num<<" is less than "<<target<<endl;
        int diff{target -num};
        cout<<num<<" is "<<diff<<" less than "<<target<<endl;
       
    }

//____________________________________________
//            Nested-IF Statement
//____________________________________________

    int score{};
    cout<<endl<<"Enter your score on the exam (0-100): ";
    cin>>score;
 
    char letter_grade{};

    if (score>0 && score<=100) {

        if(score > 90)
        letter_grade='A';

        else if(score > 80)
        letter_grade='B';

        else if(score > 70)
        letter_grade='C';

        else if(score > 70)
        letter_grade='D';

        else
        letter_grade='F';

        cout<<"Your Grade is: "<<letter_grade<<endl;

        if(letter_grade == 'F')
        cout<<"Sorry you must repeat the class"<<endl;

        else
        cout<<"Congrats"<<endl;

    }

    else {

        cout<<"Sorry "<<score<<" is not in range"<<endl<<endl;
    }
//____________________________________________
//    IF-Else Statement with Initialization
//____________________________________________
/*
    In C++ we can pollute with global variables but if we want to use a variable in if statements we can initialize it with it and the advantage is the scope of that 
    variable stays with the if statement.
    Now you might wonder why not just declare it inside the if statement scope well the problem is it wont its not going to be available for else statement.

    Do note it will only work for if-else, if-else if-else and not other if types.
*/  
bool go {false};
    if(int speed{33}; go){
        int useless_speed = 50;
        if(speed > 5){
            cout<<"Slow Down!"<<endl;
        }
        else{
            cout<<"All Good!"<<endl;
        }
    }
    else if(1){                     //we are putting 1 so that this gets initialized 
        cout << "Your current Speed: " << speed << endl;
        //cout<< useless_speed;     //This is not accessable coz it ends in the if scope never gets 
    }
    else{
        cout << "Nothing!" << endl;
    }

//____________________________________________
//            Switch Statement
//____________________________________________
/* 
Switch-Case is one complete scope meaning case dont have there scope by default unless you define it using {}. Variables that you declare (not initialize) in the 
scope are visible to other cases as well if scope are not used by above case. Based on the switch value case act as a JUMP point during run time.
    Example.
        ```
        switch(2){
            case 1: 
                int i;
                i = 10;
                cout<<"result 1";
                break;

            case 2:
                cout<<"value of i: "<<i;    //tho this is not a good practice as it will be garbage value which can result to a undefined behaviour later as if value of switch is 2 it will just skip defination of variable i=10;.
                
                i = 20;
                cout<<"value of i: "<<i;    //tho we can initialize the value of i again in case 2 but still dont do this rater use scope for each case instead for safety.
                break;
        }
        ```

Q-In the the switch case are the variables replaced by its values during comparision ?
    In the switch case, the value of the variable tool is compared against the case labels, which are the values of the constants 
    like Pen, Marker, Eraser, etc. These constants are replaced by their respective integer values during compilation.
    To answer your question directly: Yes, in the switch case, Eraser is replaced with its value (30) by the compiler. During 
    compilation, the constant Eraser is replaced by its integer value (30), and this value is used in the comparison in the switch statement.

The difference between ifelse vs switch is that if we dont use break; after a case is a hit it will continue to execute all cases until there is a break statement
    ```
    int a = 10;

    switch(10){
        case 20: cout<<"10"<<endl;
        case 10: cout<<"10"<<endl;
        case 30: cout<<"30"<<endl;
        case 40: cout<<"40"<<endl;
        case 50: cout<<"50"<<endl;
        break;
    }
    ```
    take the above for an example case 10 and case 30,40,50 will get printed coz there was no break after case 10. If you noticed that case 20 didnt get printed coz
    it checks for the condition and reached the condition which is true and after that keeps executing until it finds a break statement. Also in the end right before }
    you dont need to put the break statement coz the switch statements ends at } so there is no need to put a break; there but seems clean if you put it.

Facts about Switch cases:
    1.You are not allowed to add duplicate cases.
    2.Only those expressions are allowed in switch which results in an integral constant value. Meaning only integers as final result not float, etc.
    3.Float values in not allowed as a constant value in case lable. Only integer constants/constant expressions are allowed in case label.
    4.Case expression must have a constant value
        ```
            int x =2;
            const int y=2 , z =23;
            switch (x){
                case y: cout<<"hello1"<<endl;
                    break;
                case z: cout<<"hello1"<<endl;
                    break;
            }
        ```
    5.Macros are allowed as case lables.
    6.Defaults can be places anywhere inside switch but good habbit is to place it at the end of switch case.
    7.You can't have in a switch statement is another switch statement if you want to have it have it within {} scopes.

Source:
    https://www.youtube.com/watch?v=-JMSaLRqsgo
    https://forum.arduino.cc/t/why-cant-i-declare-a-local-variable-in-a-switch-case/64115/2
    https://stackoverflow.com/questions/92396/why-cant-variables-be-declared-in-a-switch-statement
*/

    char letter_grade1{};
    cout<<endl<<"Enter the letter grade you expect on the exam: ";
    cin>>letter_grade1;

    switch (letter_grade1){

        case'a':
        case'A':
            cout<<"You need a 90 or above,study hard!"<<endl;
        break;

        case'b':
        case'B':
            cout<<"You need a 80-89, study hard!"<<endl;
        break;

        case'c':
        case'C':
            cout<<"You need a 70-79, study hard!"<<endl;
        break;

        case'd':
        case'D':
            cout<<"You should strive for better marks"<<endl;
        break;

        case'f':
        case'F':{

            char confirm{};
            cout<<"are you sure(Y/N)";
            cin>>confirm;

            if (confirm == 'y' || confirm == 'Y'){

                cout<<"OK I guess you didnt study";
            }
            else if(confirm == 'n' || confirm == 'N'){

                cout<<"Good go study now"<<endl;
            }
            else
            cout<<"Wrong input try again"<<endl;
            break;
        }
        break;
        default:
            cout<<"You need a 90 or above,study hard!"<<endl;
        break;

        
    
    }

    enum Direction {left,right,up,down};    // enumuration type where we are are declaring enumurations constants that are left,right,up,down

    Direction heading {left};

    switch (heading){

        case left:
        cout<<"Going Left"<<endl;
        break;

        case right:
        cout<<"Going right"<<endl;
        break;

        default:             // if you dont use this the other up & down constants wont be handled
        cout<<"OK"<<endl;
    }

//____________________________________________
//    Switch Statement with Initialization
//____________________________________________
/*
We can initialize variabled within the parameter of switch-case by defining it in the initialization statement part of switch statement for eg.
    ```
    switch (double strength{3.56};tool)
    { case1:...........;
      case2:...........;
      case3:...........;
      default:...........;
    }
    ```
Q-Now you might think why not initialize variable inside the cases directly ?
    or
Q-But what to do if you want a variable declared inside case? 
    lets understand with below example
    ```
    #include <iostream>

    int main(){

        switch (0){
            int x{9};   // Never going to get initialized, Error: crosses initialization
            case 0 :
                int y = 5;  //Error: crosses initialization
                std::cout << "y : " << y << std::endl;
                break;

            case 1 : 
                int z;
                std::cout << "z : " << z << std::endl;
                break;
            
            default:
                int u = 20; //OK
                break;
        }
        return 0;
    }
    ```
    Q- Why cant we do int y = 5; ? but we can do it for default case where int u = 20 why is that ?
        In C++, each case label within a switch statement does not create a new scope. This means that all the variables declared within the different cases are technically in the same scope. 
        When you declare a variable in a switch statement without introducing a new block (with {}), the compiler treats all these declarations as if they are at the same level, which can lead 
        to several problems:

        1.Multiple Declarations: If you declare variables with the same name in different cases, the compiler will treat these as multiple declarations within the same scope, leading to an error.

        2.Cross/Jump/Bypass Initialization: Variables declared in one case might interfere with variables in another case if they are not properly scoped. This can lead to undefined behavior or compilation errors.
                              And crossing initialization of variable can coz undefined behavior or runtime errors later in the code like for eg. goto or case (switch case) the compiler dont let you skip
                              initialization (int x = 10; not int x; thats declaration) because compiler dosent know where this skipping can mess with the program logic in 1M+ lines of code later on.
                              The compiler aims to ensure that variables are properly scoped and initialized to prevent any undefined behavior or errors that could arise from such situations.Coz
                              compiler dosent analyze the entire program to see if an uninitialized variable might be used thousands of lines later and then getting an error over there either during
                              compile time or runtime rather it would just tell that "you are crossing initialization" so you can avoid pitfalls later.
                              
                              Also if you have a variable declaration that initializes a variable and there is a goto, break, or case label that jumps past the initialization, the compiler will 
                              generate an error because it can't guarantee that the variable is properly initialized before its ever used later in the program.

    Q- How the GCC Compiler handles this check?
        In GCC, the handling of variable initialization within a switch statement that spans multiple cases is managed by the parser and semantic analysis phases of the compiler. This is done to 
        ensure that variables are not improperly initialized in cases where they might not be reached due to the control flow of the switch statement.
        Here's an example of how GCC's source code might look which might handle such cases:
            ```(this example can be wrong as this was told by gpt so look at original gcc source code for that https://github.com/gcc-mirror/gcc )
            void
            expand_case (tree exp)
            {
            // Process each case within the switch statement.
            for (case_node = CASE_BODY (exp); case_node; case_node = TREE_CHAIN (case_node))
            {
                // Ensure variables are properly scoped and initialized.
                if (TREE_CODE (case_node) == VAR_DECL)
                error ("crosses initialization of %qD", case_node);
            }
            }
            ```
            This function iterates over each case and checks for improper variable initialization. When it detects that a variable crosses initialization, it raises an error.
        
        Do note compiler will spot and tell the error the moment it spots one it wont read 1000+ lines after the point of error to see if it got initialized properly 
        later on or not, if compiler sees something wrong it will tell the programmer right there and then coz compiler dosent know what undefined behaviour that skipped 
        initialization of variable will cause 10k+ down the code. Also keeping track of such skip so many likes later to see if variable got defined later or not will make compilation slow
        and probably even memory intensive for super big projects.

    Another Example
    ```
    switch (choice) {

        case 1:
            int x;
        break;
            
        case 2:
            int y;
            x = 50;
            cout<<x;
        break;

        case 3:
            int z = 20;
            cout<<z;
        break;

    }
    ```
    Q-How can we access x of case 1 in case 2 even tho case 1 never gets executed in switch case ?
        To answer this you have to understand few things 1st that in switch case cases dosent have a scope by default, 2nd compiler after checking the scope accessibility of a variables it sees 
        that x is used in case 2, so int x memory allocation is included in the final compiled code and other variables that were never in program are removed during compiler time optimizations by 
        the compiler like variable y to save memory. Despite x being declared in case 1, due to the lack of explicit scoping (no braces {} around case 1 and case 2) and the compiler also does not 
        create separate scopes for each case either. Thus, x remains accessible in case 2 as both case 1 and 2 are in same scope.

    Q-But why can case 3 can have a variable initialized but cant do the same in case 1 or 2 ?
        As it is next to the end of the switch scope the compiler can see that the variable lifetime will end and also there are no cases after case 3 so such behaviour is allowed. However, this 
        can still lead to a potential issue if the flow of the switch statement is not controlled correctly using break or other mechanisms like goto.

    Q-Now in below example why can we jump over int z initialization but not over int x initialization why the int x = 10; give initialization skip error?
        ```
        #include <iostream>
        using namespace std;

        int main() {
            switch (3) {
                case 1:
                    goto point_1;
                    int x = 10; // initialization is skipped and compiler gives "initialization skip error"
                    break;

                case 2:
                    int y;
                    break;

                case 3:
                    goto point_2;
                    int z = 20; // initialization is skipped but no error of "initialization skip" happens here 
                    cout << z;
                    break;
                    
            }

            point_1:
                cout << "hello!!" << endl;

            point_2:
                cout << "bye!!" << endl;
                
        return 0;
        }
        ```
        Tho more research needs to be conducted so learn about it via compiler creation or reading the compiler source code. 
        But from what i understand by reading the error messages is that compiler jumps to all cases 1 by 1 from top to bottom and if it notices variable initialization and there 
        is another case below it, compiler throws a "error: cannot jump, it bypasses variable initialization" if there is no more case after initialization of variable no more jump error.
        Also goto out of switch scope will not give an error as variables initialized inside the switch case will die once jumping out of the switch so this behaviour is fine!
        All this was analyzed after look at the error message using this command-> clang -S -emit-llvm test.cpp -o test.ll
        ```
        test.cpp:38:9: error: cannot jump from switch statement to this case label
        38 |         case 3:
            |         ^
        test.cpp:31:17: note: jump bypasses variable initialization
        31 |             int x = 10; // initialization is skipped and compiler gives "initialization skip error"
            |                 ^
        test.cpp:34:9: error: cannot jump from switch statement to this case label
        34 |         case 2:
            |         ^
        ```

    Another example were the switch case outcome cannot be predicted by the compiler
    ```
    int choice;
    cin >> choice;
    switch (choice) {

        case 1:
            int x;
            x = 100;
            cout<<x;
            break;
            
        case 2:
            int y;
            y = 200;
            cout<<y;
            break;

    }
    ```
    Its Assembly:
    ```
        main:
            push    rbp
            mov     rbp, rsp
            sub     rsp, 16
            lea     rax, [rbp-12]
            mov     rsi, rax
            mov     edi, OFFSET FLAT:std::cin
            call    std::basic_istream<char, std::char_traits<char> >::operator>>(int&)
            mov     eax, DWORD PTR [rbp-12]
            cmp     eax, 1
            je      .L2
            cmp     eax, 2
            je      .L3
            jmp     .L4
    .L2:
            mov     DWORD PTR [rbp-8], 100
            mov     eax, DWORD PTR [rbp-8]
            mov     esi, eax
            mov     edi, OFFSET FLAT:std::cout
            call    std::basic_ostream<char, std::char_traits<char> >::operator<<(int)
            jmp     .L4
    .L3:
            mov     DWORD PTR [rbp-4], 200
            mov     eax, DWORD PTR [rbp-4]
            mov     esi, eax
            mov     edi, OFFSET FLAT:std::cout
            call    std::basic_ostream<char, std::char_traits<char> >::operator<<(int)
            nop
    .L4:
            mov     eax, 0
            leave
            ret
    ```
    Here we can clearly see that when the switch case cannot be predicted by the compiler the compiled code will have all the variables declared in the compiled code 
    thats what we can see here too for switch case we have int x and int y both declared in L2 and L3 respectively. Also declaration might not produce any assembly 
    output if its just a stack allocation.

    BEST WAY TO USE SWITCH CASE WOULD BE TO USE SCOPE like below example:
    ```
    switch (choice) {
        case 1: {
            int x = 10; // x is scoped to this block
        }
        break;
            
        case 2: {
            int y;
            y = 50;
            std::cout << y;
        }
        break;

        case 3: {
            int z = 20;
            std::cout << z;
        }
        break;
    }



Now lets look Switch case with Initialization:
*/

const int Pen{ 10 };
const int Marker{ 20 };
const int Eraser{ 30 };
const int Rectangle{ 40 };
const int Circle{ 50 };
const int Ellipse{ 60 };

int tool {Eraser};

    switch (double strength{3.56};tool)
    {
        case Pen : {
             std::cout << "Active tool is Pen. strength : " <<  strength << std::endl;
        }
        break;

        case Marker : {
             std::cout << "Active tool is Marker. strength : " <<  strength << std::endl;
        }
        break;


        case Eraser :
        case Rectangle : 
        case Circle : {
             std::cout << "Drawing Shapes. strength : " <<  strength << std::endl;
        }
        break;

        case Ellipse : {
             std::cout << "Active tool is Ellipse. strength : " <<  strength << std::endl;
        }
        break;
    
        default: {
            std::cout << "No match found. strength : " <<  strength << std::endl;
        }
        break;
    }

    std::cout << "Moving on" << std::endl;
    //strength++;       //out of scope as its declared inside switch case

//____________________________________________
//        Conditional/Ternary Operator
//____________________________________________
/*
    ?:
    (cond_expr) ? expr1 : expr2

    -cond_expr evaluates to a boolean expression
        
        -if cond_expr is true then the value of expr1 is returned
        -if cond_expr is false then the value of expr2 is returned

    -Similar to if-else construct
    -both expr1 and expr2 needs to of the same type of should be convertable to the type.
    -Tenary operator
    -Very usefull when used inline
    -Very easy to abuse!

    Example:

    int a{10}, b{20};
    int score{92};
    int result{};

    result = (a > b) ? a : b;    // in this if a is bigger than b then value of a will be assigned to result else b value will be assigned to result

    result = (a < b) ? (b-a) : (a-b);

    result = (b != 0) ? (a/b) : 0;

    cout<<((score >90) ? "Excellent" : "Good");  
*/
    //Example 1
    int num2{};

    cout<<"Enter an integer: ";
    cin>>num;

    cout<<num<<" is "<< ((num % 2 == 0) ? "even" : "odd") <<endl;   //easier to use this instead of other ways if you just 1 pair of if-else 

    //Example 2
    int num3{},num4{};

    cout<<endl<<"Enter two integers seprated by space: ";
    cin>>num3>>num4;

    if(num1 != num2){

        cout<<"Largest: "<<((num1 > num2) ? num3 : num4)<<endl;
        cout<<"Smallest: "<<((num1 < num2) ? num3 : num4)<<endl;
    }

    else 
    cout<<"The numbers are the same"<<endl;

    //Example 3
    int value_t = 10;
    int value2_t = 20;

    int value_result{};
    value_result = (value_t < value2_t) ? value_t : 22.12f; //here the types are not same but float can be converted to int but lets say if we had value_result = (value_t < value2_t) ? value_t : "hello"; this wont work can we cant convert char to int.
    cout<<"smallest value is: "<< value_result << endl;


//____________________________________________
//              Try Catch
//____________________________________________
/*
*C++ Exceptions
    When executing C++ code, different errors can occur: coding errors made by the programmer, errors due to wrong input, or other unforeseeable things.
    When an error occurs, C++ will normally stop and generate an error message. The technical term for this is: C++ will throw an exception (throw an error).

*C++ try and catch
    Exception handling in C++ consist of three keywords: try, throw and catch:

    The try statement allows you to define a block of code to be tested for errors while it is being executed.

    The throw keyword throws an exception when a problem is detected, which lets us create a custom error.

    The catch statement allows you to define a block of code to be executed, if an error occurs in the try block.

    try {
    // Block of code to try
    throw exception; // Throw an exception when a problem arise
    }
    catch () {
    // Block of code to handle errors
    }

    Look in Sources for more examples.
*/
    try {
    int age = 15;
    if (age >= 18) {
        cout << "Access granted - you are old enough.";
    } else {
        throw (age);    //as you can see age is being thrown to myNum in catch
    }
    }
    catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Your Age is: " << myNum << "Which is blow 18"<<endl;
    }

//_____________________
//      Looping
//_____________________
/*

    -The third basic building block of programming
        -sequence,selection,iteration

    -Iteration or repetition

    -Allows the execution of a statement or block of statements repeatedly

    -Loops are made up a loop condition and the body which contains the statements to repeat

    Usecases of loop:
    
    -a specific number of times
    -for each element in a collection
    -while a specific condition remains true
    -until a specific condition becomes false
    -until we reach the end of some input stream
    -forever
    -etc


    Types of Loops
    1) for LOOP
        -iterate a specific number of times

    2) RANGE BASED for loop
        -one iteration for each element in a range or collection

    3) while LOOP
        -iterate while a condition remains true
        -stop when the condition becomes false
        -check the condition at the beginning of every iteration

    4) do-while LOOP
        -iterate while a condition remains true
        -stop when the condition becomes false
        -check the condition at the end of every iteration

*/

//____________________________________________
//               for Loop
//____________________________________________
/*

    •Lets understand parts of the for loop:

        for(expression 1 ; expresssion 2 ; expression 3)    // where expression 1 , 2 , 3 are initialization, condition and increment respectively.
        for ( Multiple initialization ; Multiple condition ; Multiple update/modify/increment) statement;   //we can have single or multiple initialization, condition and update in for loop.

    •How for loop works:
        Lets use for(int i{0} ; i<4 ; ++i)
        Step1:
            variable is declared for eg. int i{0};

        Step2:
            then the condition is checked for eg. i<4; if it is true then the control of the program wont move to statement and execute the statement.

        Step3:
            after the for-loop scope is fully executed the program controll will move to increment expression which is ++i or i++ or i+2

    •Understanding i++ vs ++i in case of for-loop: (https://www.quora.com/Do-you-use-i++-or-++i-in-a-for-loop-And-why)
        1. i++ means the current value of i will be used in the statement and after the statement is over then the value of i will be increased by 1.
        2. ++i means the current value of i will first be incremented by 1 and then used in the statement.
            for eg.
                ```
                int i = 3;
                int a = i++; // a = 3, i = 4
                int b = ++a; // b = 4, a = 4
                ```
                We can also do various kinds of increment like i=i+1
                                                               i+=1 
                                                               i*=2 or 
                                                               i/=2 or 
                                                               i%=2 or 
                                                               i+= a+b; // will be equal to i = i + (a+b); meaning a+b will be evaluated first then there sum will be added to i.
                                                               refer to operator section for more understanding.

        In for loop either using ++i or i++ wont change the outcome of i based on the example we are considering (for(int i{0} ; i<4 ; ++i)) coz the current value of i is not being used
        by any statement when we just type i++; in the for loop scope but it can be useful if we need to use the value of i inside the for loop.
            for eg.
                ```
                int a{};
                for (int i{}; i<10; ){
                    a = i++;    //here we are using the current value of i so here i++ vs ++i matters
                }
                ```            


    •Here is the Usual format error of for-loop:
        As for-loop have default scope even if you dont use {} using variables outside of for-loop will give a give error coz of scoping issues. But do not if you dont use {} and want
        to have multiple statements inside the for loop it will be a problem after the first ; is used.
            Example:
                ```
                for(int i {1}, j{2} ; i <=5 ; ++i)
                    cout<<i<<endl;

                cout<<i;    //outside of scope so is an error;

                i=100 //ERROR!! i only visible in the loop and not accessable outside for loop
                ```

            Example:
                ```
                for(;;); // never use this as this is a endless loop meaning it will keep on running for ever.
                ```
 
*/


    for(int i{1};i<=10;++i){
        cout<<i<<endl;
    }

    //or

    for(int i{1} ; i<=10 ; i+=2){   //now at each loop i will increment by 2
        cout<<i<<endl;
    }

    //decrement

    for(int i{10};i>0;--i){
        cout<<i<<endl;
        cout<<"Blast OFF"<<endl;    // if this wasent in brackets { } this "blast off" would get printed when the for loop is over
    }

    for (int i{1} ; i<=100 ; ++i){

        cout<<i;
        if( i % 10 == 0){
            cout<<endl;
        }
        else
        cout<<" ";
    }


    vector<int> nums{10,20,30,40,50};
    for(unsigned int i{0} ; i<nums.size() ; ++i){

        cout<<nums.at(i)<<endl;
    }

    //Here are some bit advanced i++ and ++i understand based examples
    
    //You would notice that in both cases the current state output are different & i is being incremented twice
    for(int i{2};i<10;){
     cout<<i<<endl;
     ++i;
     cout<<"current state value of i is: "<<i++<<endl;
    }
    /* 
    Output:
    2
    current state value of i is: 3
    4
    current state value of i is: 5
    6
    current state value of i is: 7
    8
    current state value of i is: 9
    */
    for(int i{2};i<10;){
     cout<<i<<endl;
     ++i;
     cout<<"current state value of i is: "<<++i<<endl;
    }
    /*
    Output:
    2
    current state value of i is: 4
    4
    current state value of i is: 6
    6
    current state value of i is: 8
    8
    current state value of i is: 10
    */

   //Here you will notice that i only increment once and we can see the current state of ++i, same way we can see the output of i++ where current_state_value = 2
   int current_state_value{}; 
   for(int i{2};i<10;){
    cout<<i<<endl;
    current_state_value=++i;
    cout<<"current state value of i is: "<<current_state_value<<endl;
   }
    /*
    Output:
    2
    current state value of i is: 3
    3
    current state value of i is: 4
    4
    current state value of i is: 5
    5
    current state value of i is: 6
    6
    current state value of i is: 7
    7
    current state value of i is: 8
    8
    current state value of i is: 9
    9
    current state value of i is: 10
    */

   //Another small for loop to understand the way things work
   //Here you can see at each loop stage i is decrementing once every loop and once i value is dropped below 5 the program halts right there
   int current_state_value2{}; 
   for(int i{200};i<800;){
    cout<<i<<endl;
    current_state_value2 = i/=2;

    if(current_state_value2 < 5){
        cout<<endl<<"Value of i is below 5 and Program will Halt now"<<endl;
        break;
    }
    cout<<"current state value of i is: "<<current_state_value2<<endl;
  }
  /*
    Output:
    200
    current state value of i is: 100
    100
    current state value of i is: 50
    50
    current state value of i is: 25
    25
    current state value of i is: 12
    12
    current state value of i is: 6
    6
  */

//____________________________________________
//           range-based for Loop
//____________________________________________
/*
    introduced in c++11

    Range Based For Loop is to loop through a collection of elements and be able to easily access each element without having to worry 
    about the length of the collection or incrementing or decrementing looping variables or subscripting indexes.
    Eg:
    for(var_type var_name : sequence) {

        statements;
    }

    Example 1:

    int scores[] {100,90,97};

    for (int score : scores) 
    //or
    for (auto score : scores)   // auto auto figures out the variable type weather is it int,char,long double,etc
    cout<<score<<endl;

    Output : 
    100
    90
    97

    Example 2:

    double average_temp{};
    double running_sum{};
    int size{};

    for(auto temp : {60.2,80.1,90.0,78.2}) {

        running_sum += temp;
        ++size;
    }
    average_temp = running_sum / size;

    
    Example 3:

    for ( auto name : "frank"){

        cout<<name<<endl;
    }

    Output:
    f
    r
    a
    n
    k
*/

    int scores1 [] {10,20,30};

    for(auto score0 : scores1) {

        cout<<score<<endl;
    }

    //Another Example
    vector<double> vector_temperature {87.9,77.9,80.0,72.5};
    double average_temp1{};
    double total{};

    for (auto temp : vector_temperature)
    total += temp;

    if (vector_temperature.size() != 0)
        average_temp1 = total/vector_temperature.size();

    cout<<"Average temperature is "<<average_temp1<<endl;
    

    //Another Example

    for (auto c : "This is a test")
        if ( c != ' ')
        cout<< c <<endl;
    
    //Another Example
    for (auto c : "This is a test")
        if ( c == ' ')
        cout<<"     "; //TAB \t
        else
        cout<< c;

//____________________________________________
//           while Loop
//____________________________________________
/*
    We keep looping till the expression criteria meets

    while (expression)
    statement;

    while (expression){
        statement(s);
    }

    *****Example1:*****

    int i {1};

    while (i <=5){

        cout<<i<<endl;
        ++i //important that we pit it inside a loop as the loop will never terminate and keep printing 1
    }

    *****Example2: Even Number*****

    int i {1};

    while(i<=10){

        if(i%2 == 0){
            cout<<i<<endl;
        }
    ++i;
    Output:
    2
    4
    5
    6
    8
    10


    *****Example3: Array*****

    int score [] {100,90,87};
    int i{0};

    while (i<3){
        cout<<scores[i]<<endl;

        ++i;
    }

    Output:

    100
    90
    87

    *****Example4: Where we want infinite loop*****

    // Where we want student to keep entering marks until it meets the required criteria

    int number{};

    cout<<"Enter an integer less than 100: ";
    cin>>number;

    while (number>=100){

        cout<<"Enter an integer less than 100: ";
        cin>>number;
    }
    cout<<"Thanks!"

    *****Example5: Input Validation-boolean flag*****

    bool done{false};
    int number{};

    while(!done){   //!done means not done = true coz value is false

        cout<<"Enter an integer between 1 and 5: ";
        cin>>number;

        if(number <= 1 || number >= 5){
            cout<<"Out of range, try again"<<endl;
        }
        else{

            cout<<"Thanks!"<<endl;
            done = true;
        }
    }
*/



//____________________________________________
//           do-while Loop
//____________________________________________
/*

    In a do-while loop you execute the body of the loop while the conditional expression is true
    condition will check at the end of the loop
    If you have to do atleast 1 itteration of the loop do use do-while loop

    do{
        statements;
    }while (expression);


    *****Example1: Input validation program*****

    int number{};

    do{

        cout<<"enter an integer between 1 and 5: ";
        cin>>number;
    }while (number <= 1 || number >= 5);

        cout<<"Thanks"<<endl;


    *****Example2: Area calculation with calculate another*****

    do {

        double width{}, height{};
        cout<<"Enter width and height seprate by space: ";
        cin>>width>>height;

        double area {width * height};
        cout<<"The area is: "<<area<<endl;

        cout<<"Calculating another? (Y/N): ";
        cin>>selection;
    }while (selection == 'y' || selection == 'Y');

    cout<<"Thanks!"<<endl;
*/

    char selection{};

    do {

        cout<<endl<<"____________________________________________"<<endl;
        cout<<"1.Do this"<<endl;
        cout<<"2.Do that"<<endl;
        cout<<"3.Do something else"<<endl;
        cout<<"Q.Quit"<<endl;
        cout<<endl<<"Enter your selection: ";
        cin>>selection;

        if(selection == '1')
            cout<<"You chose 1 - doing this"<<endl;
        else if(selection == '2')
            cout<<"You chose 2 - doing that"<<endl;
        else if(selection == '3')
            cout<<"You chose 3 - doing something else"<<endl;
        else if(selection == 'q' || selection == 'Q')
            cout<<"BYEEEEEEEEEEEE!"<<endl;
            
        else
            cout<<"Unknown option"<<endl;
    }while( selection != 'q' && selection != 'Q');
    
    cout<<"thanks";



//____________________________________________
//       continue and break statement
//____________________________________________
/*  A continue statement may only be used within a loop
    dont over use it as it will get confusing 

    Continue
        - no further statements in the body of the loop are executed
        - controll immediately goes directly to the beginning of the loop for the next iteration

    Break
        - no further statements in the body of the loop are executed
        - loop is immediately terminated
        - controll immediately goes to the statement following the loop construct

*/

    vector<int> values {1,2,-1,3,-1,-99,7,8,10};

        for( auto val: values){

            if (val == -99)
                break;

            else if(val == -1)
                continue;

            else
                cout<<val<<endl;
        }

//____________________________________________
//             Infinite Loops 
//____________________________________________
/*  
    -Loops whose condition expression always evaluate to true

    -Usually this is unintended and a programmer error

    -Sometimes programmers use infinite loops and include and break statements in the body to control them.

    -Sometimes infinite loops are exactly what we need
        -Event loop in an event-driven program
        -Operating system

    -Loops are used in OS is always looping for constant input/output or embedded systems such as mouse listening for mouse clicks or screen touch activation

    Example:

    Infinite for Loops:

        for(;;)
            cout<<"This will print forever"<<endl;

    Infinite while Loops:

        while(true)
            cout<<"this will print forever"<<endl;
*/


//____________________________________________
//             Nested Loops 
//____________________________________________
/*      
    -Loops within loops
    -Can be many as many levels deep as the program needs
    -Very useful with multi-dimensional data structures
    -Outer loop vs Inner loop

    Example:

    for(int outer_val {1} ; outer_val <= 2 ; ++outer_val){
        
        for(int inner_val {1} ; inner_val <= 3 ; ++inner_val){
            
            cout <<outer_val<<" , "<<inner_val;
        }
    }

    Output:        // you will notice that the inner loop rotates faster as on each 1 outer loop inner loop runs 3 times
    1 , 1
    1 , 2
    1 , 3
    2 , 1
    2 , 2
    2 , 3
    
    for(int num1 {1} ; num1 <= 10 ; ++num1){
        
        for(int num2 {1} ; num2 <= 10 ; ++num2){
            
            cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
        }
    }


    //2D Arrays - set all elements to 1000

    int grid [5][3] {};

    for (int row{0} ; row <5 ; ++row){

        for ( int col{0} ; col < 3 ; ++col){

            grid[row][col]=1000;
        }
    }


    //2D Vector - display elements

    vector<vector<int>> vector_2d
    {
        {1,2,3},
        {10,20,30,40},
        {100,200,300,400,500}
    };

    for (auto vec : vector_2d){
        for ( auto val : vec){
            cout<<val<<" ";
        }
    }

    Output:
    1 2 3 10 20 30 40 100 200 300 400 500 
*/

    //Entering data inside a vector
    
    int num_items{};

    cout<<"How many data items do you have? ";
    cin>>num_items;

    vector<int> data{};

    for (int i{1};i<=num_items;++i){

        int data_item{};
        cout<<"Enter data item "<<": ";
        cin>>data_item;
        data.push_back(data_item);
    }

//____________________________________________
//                  Goto        
//____________________________________________
/* Yes, goto is a control flow statement in C++. It allows for an unconditional jump to another point in the program. The use of goto can make the program 
   flow difficult to follow, which is why it is generally discouraged in favor of other control structures like loops and functions. Here's an example of how goto might be used:*/
    int x = 0;
    
    loop:
    cout << x << " ";
    x++;
    
    if (x < 5) {
        goto loop;
    }

    return 0;
    //or
    /*
        In C++, labels used with goto can be defined anywhere within the same function, and the compiler handles this correctly by associating the goto statement with the label 
        even if the label appears later in the code.
    */

    int i;
    goto car;
    i = 10;

    car:
    cout<<i;
    
    return 0;
    
}