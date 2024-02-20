// C++ program to print Hello World

//this is a comment line . A comment line is used to display additional information about the program

#include<iostream>  // #include is a preprocessor directive. it tells the compiler to include the content of a file in the source code
                // for example, #include<iostream> tells the compiler to include the standard iostream file which contains declaration
                // of all standard input / output library functions

using namespace std;
// This is used to import the entity of the std namespace into the current namespace of the program. The statement using namespace std is generally considered a bad practice. When we import a namespace we are essentially pulling all type definitions into the current scope.

// The std namespace is huge. The alternative to this statement is to specify the namespace to which the identifier belongs using the scope operator(::) each time we declare a type. For example, std::cout.


// main function: from where the code execution begins
int main(){
    cout<<"Hello World";    // prints hello world

    //This statement is used to return a value from a function and indicates the finishing of a function. This statement is basically used in functions to return the results of the operations performed by a function.
    return 0;
}