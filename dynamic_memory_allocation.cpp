#include<iostream>

int main(){

    // this code will crash due to not initialize pointer correctly
    // int* var_ptr;        initializing without nullptr cause crash the program even if {} is used
    // *var_ptr = 55;       here the program is crashing

    // std::cout<<"var_ptr : "<<var_ptr<<std::endl;
    // std::cout<<"*var_ptr : "<<*var_ptr<<std::endl;

    int* p_number {nullptr};
    p_number = new int;

    *p_number = 77;

    std::cout<<"p_number : "<<p_number<<std::endl;      // this will print the address
    std::cout<<"p_number : "<<*p_number<<std::endl;     // this will print the value in the address

    delete p_number;    // memory returned to the OS

    std::cout<<"delete is done..."<<std::endl;

    // *p_number = 45;     // cause a program crash

    // std::cout<<"p_number : "<<*p_number<<std::endl; // this will not print at all

    // but we can use this instead

    p_number = nullptr;

    p_number = new int(82);

    std::cout<<"p_number : "<<*p_number<<std::endl;

    int* p_number2 {new int(32)};

    std::cout<<"p_number2 : "<<*p_number2<<std::endl;




    return 0;
}