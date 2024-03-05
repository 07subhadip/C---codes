#include<iostream>

int main(){
    int value {10};

    value+=5;
    std::cout<<"value+=5 : "<<value<<std::endl;

    value-=7;
    std::cout<<"value-=7 : "<<value<<std::endl;

    value*=3;
    std::cout<<"value*=3 : "<<value<<std::endl;

    value/=2;
    std::cout<<"value/=2 : "<<value<<std::endl;

    value%=5;
    std::cout<<"value%=5 : "<<value<<std::endl;

    return 0;
}