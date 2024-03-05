#include<iostream>

int main(){
    int a {45};
    int b {70};

    std::cout<<"number1 : "<<a<<std::endl;
    std::cout<<"number2 : "<<b<<std::endl;
    

    std::cout<<std::boolalpha;  // to convert boolean outputs from 0 and 1 to TRUE or FALSE

    std::cout<<"number1 < number2 : "<<(a<b)<<std::endl;
    std::cout<<"number1 > number2 : "<<(a>b)<<std::endl;
    std::cout<<"number1 <= number2 : "<<(a<=b)<<std::endl;
    std::cout<<"number1 >= number2 : "<<(a>=b)<<std::endl;
    std::cout<<"number1 == number2 : "<<(a==b)<<std::endl;
    std::cout<<std::noboolalpha;    // opposite of boolalpha
    std::cout<<"number1 != number2 : "<<(a!=b)<<std::endl;

    return 0;
}