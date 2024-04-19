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

    // Lambda function that return something

    auto result = [](double a,double b){
        return a+b;
    }(12,12);
    std::cout<<"result : "<<result<<std::endl;
    
    std::cout<<"result : "<<[](int a,int b){
        return a+b;
    }(23,23)<<std::endl;

    // Explicitly specify the return type

    auto answer = [](double a ,double b)->int{
        return static_cast<int>(a+b);
    };

    std::cout<<"answer : "<<answer(20.21,20.23)<<std::endl;
    std::cout<<"sizeof(answer) : "<<sizeof(answer)<<std::endl;

    auto function = [](double a,double b)->int{
        if(a>b)
        return static_cast<int>(a);
        else
        return static_cast<int>(b);
    };

    std::cout<<"max : "<<function(23,32)<<std::endl;


    std::cout<<"Done!"<<std::endl;


    return 0;

    
}