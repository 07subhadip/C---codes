#include<iostream>

int main(){
    int number1 {13};
    int number2 {7};

    //addition
    int result = number1+number2;
    std::cout<<result<<std::endl;

    //subtraction
    result=number1-number2;
    std::cout<<result<<std::endl;

    //multiplication
    result = number1*number2;
    std::cout<<result<<std::endl;

    // division
    result = number1/number2;
    std::cout<<result<<std::endl;

    //modulus
    result = number1%number2;
    std::cout<<result<<std::endl;


    return 0;
}