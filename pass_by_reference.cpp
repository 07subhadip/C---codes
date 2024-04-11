#include<iostream>

void say_age(int& age);

int main(){
    int age{23};
    std::cout<<"age before : "<<age<<"    address : "<<&age<<std::endl;
    say_age(age);
    std::cout<<"age : "<<age<<"    address : "<<&age<<std::endl;
    return 0;
}

void say_age(int& age){
    ++age;
    std::cout<<"age : "<<age<< "    address : "<<&age<<std::endl;
}