/* 
    Sequence
    - Ordering statements sequentially

    Selection
    - It allows you to make decisions and execute parts of your program only when certain conditions are true or false.
    - Making decisions
    - if statement
    - if-else statement
    - Nested if statement if { if {if {}}}
    - Switch statement
    - Conditional operator ?:
    - Try Catch (exception handling)

    Iteration
    - These constructs that let us loop and repeat parts of our program.
    - Looping or repeating 
    - for loop
    - Range-based for loop
    - while loop
    - do-while loop
    - continue and break
    - Infinite loops
    - Nested loops (loops withing loops)

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

//____________________________________________
//            IF Statement
//____________________________________________
/* The difference between if if and if else statement is that in the if else, only one of the two statements can be executed 
   while in the if if case it is possible for both of them to be executed. In below example, it does not matter since the two 
   conditions are mutually exclusive, but it may become important if it is possible for both conditions to be true. In that case, 
   “if else if” would only execute the first “if” statement and “if if” would execute them both in sequence.*/

    int num {};
    const int min {10};
    const int max {100};
 
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

        cout<<"Sorry "<<score<<" is not in range"<<endl;
    }

//____________________________________________
//            Switch Statement
//____________________________________________
/* The difference between ifelse vs switch is that if we dont use break; after a case it will continue to execute all cases until there is a break statement
    int a = 10;

    switch(10){
        case 20: cout<<"10"<<endl;
        case 10: cout<<"10"<<endl;
        case 30: cout<<"30"<<endl;
        case 40: cout<<"40"<<endl;
        case 50: cout<<"50"<<endl;
        break;
    }
    
    take the above for an example case 10 and case 30,40,50 will get printed coz there was no break after case 10. If you noticed that case 20 didnt get printed coz
    it checks for the condition and reached the condition which is true and after that keeps executing until it finds a break statement. Also in the end right before }
    you dont need to put the break statement coz the switch statements ends at } so there is no need to put a break; there but seems clean if you put it.
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
        defautl:
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

        defaut:             // if you dont use this the other up & down constants wont be handled
        cout<<"OK"<<endl;
    }
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

    int num2{};

    cout<<"Enter an integer: ";
    cin>>num;

    cout<<num<<" is "<< ((num % 2 == 0) ? "even" : "odd") <<endl;   //easier to use this instead of other ways if you just 1 pair of if-else 

    //another example would be

    int num3{},num4{};

    cout<<endl<<"Enter two integers seprated by space: ";
    cin>>num3>>num4;

    if(num1 != num2){

        cout<<"Largest: "<<((num1 > num2) ? num3 : num4)<<endl;
        cout<<"Smallest: "<<((num1 < num2) ? num3 : num4)<<endl;
    }

    else 
    cout<<"The numbers are the same"<<endl;


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

//____________________________________________
//               Looping
//____________________________________________
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

    Lets understand:

    Parts of the for loop->
    for(expression 1 ; expresssion 2 ; expression 3)    // where expression 1 , 2 , 3 are initialization condition and increment respectively,

    How for loop works->
    Step1:
        variable is declared for eg. int i{0};

    Step2:
        then the condition is checked for eg. i<4; if it is true then the control of the program wont move to statement and execute the statement.

    Step3:
        after the statement is fully executed the program controll will move to increment expression which is ++i or i++ or i+2

    Understanding i++ and ++i in for loop: (https://www.quora.com/Do-you-use-i++-or-++i-in-a-for-loop-And-why)
    
    In C, I generally use i++ in a for loop, because it feels more natural. It’s a natural shortening of i = i + 1 or i += 1, as far as I’m concerned.
    If you don’t use the value if the expression, both i++ and ++i are otherwise equivalent in C. The compiler can easily optimize away the unused value of the expression as well, 
    since you can only apply ++ to simple values such as integers, pointers, and so forth.

    In C++, I prefer the form ++i, because i may be an iterator or other object with overloaded operator++.
    In those cases, the form i++ generates a temporary object to hold the previous value of i, while the form ++i does not.
    The compiler may optimize away that temporary object, but it’s not required to, and in some cases may not be allowed to.

    In other languages with C-like syntax, there may be language-specific reasons to prefer one over the other.


        Look at this example explaining difference between i++ and ++i
        ++i example:
                     for(int i{2};i<40;){    
                     cout<<i<<endl;
                     ++i;                   //as you can see at the end of statement i is being incremented by 1 and then is being placed at i
                    }

        i++ example:
                     for(int i{2};i<40;){
                     cout<<i<<endl;
                     i++;                  //over here when we use i++ the current state of i is stored and then its incremented for further use but the compiler sees that the current state of i is not being used so it optimises it and then removes the current state and just increments and store that to i for further looping
                    }

        i++ and ++i are very similar but not exactly the same. Both increment the number, 
        but ++i increments the number before the current expression is evaluted, 
        whereas i++ increments the number after the expression is evaluated.
        
        int i = 3;
        int a = i++; // a = 3, i = 4
        int b = ++a; // b = 4, a = 4
        We can also do various kinds of increment like i=i+1 or i+=1 or i*=2 or i/=2 or i%=2 or i+= a+b;


    for (initialization ; condition ; update/modify/increment)   
    statement;

    for (initialization ; condition ; update/modify/increment) {

        statement(s);
    }
    statement;

   
    Example:

    for(int i {1} ; i <=5 ; ++i)
        cout<<i<<endl;

    i=100 //ERROR!! i only visible in the loop and not accessable outside for loop

    Example2:
    //Array
    
    int score [] {100,90,87};

    for (int i {0} ; i < 3 ; ++i ){
        cout<<score[i]<<endl;
    }
    
    Example3:
    for(int i{1},j{5} ; i <= 5 ; ++i, ++j){

        cout<<i<<" * "<<j<<" : "<<(i * j)<<endl;
    }


    for(;;) // never use this as this is a endless loop

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
    }
        while( selection != 'q' && selection != 'Q');
    
    cout<<"thanks";



//____________________________________________
//       continue and break statement
//____________________________________________
/*
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
}