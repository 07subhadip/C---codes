#include<iostream>

void say_age(int age){
    // copy age
    ++age;
    std::cout<<"Hello, Your are "<<age<<" years old  & age"<<&age<<std::endl;
    // terminate the copy age
}

int main(){

    int age{34};
    std::cout<<"age before : "<<age<<"&age : "<<&age<<std::endl;
    say_age(age);
    std::cout<<"age after : "<<age<<"&age : "<<&age<<std::endl;
    return 0;
}