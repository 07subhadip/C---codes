#include<iostream>

int addNumber( int first_param , int second_param){
    int result = first_param + second_param;
    return result;
}

int main(){
    int firstNumber {7};
    int secondNumber {13};

    int sum = firstNumber + secondNumber;

    std::cout<<"sum is : "<<sum<<std::endl;

    std::cout<<"addition is : "<< addNumber(firstNumber,secondNumber) << std::endl;
    return 0 ;
}