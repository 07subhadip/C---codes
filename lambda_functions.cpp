#include<iostream>

// A mechanism to set up anonymous functions (without name)
// Lambda function signature:
//                              [capture list](parameters)->return type{
//                                  function body
//                              };
int main(){

    auto func = [](){
        std::cout<<"Hello World"<<std::endl;
    };
    func();

    // Declare a lambda function and call it directly

    [](){
        std::cout<<"Hello world direct"<<std::endl;
    }();

    // Lambda function that takes parametes

    [](double a, double b){
        std::cout<<"a + b : "<<(a+b)<<std::endl;
    }(12.32,54.54);


    // we can do this too
    auto func1 = [](double a, double b){
        std::cout<<"a + b : "<<(a+b)<<std::endl;
    };

    func1(23.43,54.65);
    
    std::cout<<"Done!"<<std::endl;

    return 0;
}