#include<iostream>

void say_age(int* age);

int main(){
    int age{23};
    std::cout<<"Age before : "<<age<<"    address : "<<&age<<std::endl;
    say_age(&age);
    std::cout<<"Sge after : "<<age<<"    address : "<<&age<<std::endl;
    return 0;
}

void say_age(int* age){
    ++(*age);
    std::cout<<"Age at fucntion is : "<<*age<<"    address : "<<age<<std::endl;
}