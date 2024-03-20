#include<iostream>

int main(){
    int* p_number{new int{12}};

    std::cout<<"p_number : "<<p_number<<std::endl;
    std::cout<<"*p_number : "<<*p_number<<std::endl;

    int number{34};     // stack variable
    p_number = &number;     // memory has been leaked
    std::cout<<"p_number : "<<p_number<<std::endl;
    std::cout<<"*p_number : "<<*p_number<<std::endl;

    delete p_number;
    p_number = nullptr;


    // another

    int* p_number2{new int{234}};
    std::cout<<"p_number2 : "<<p_number2<<std::endl;
    std::cout<<"*p_number2 : "<<*p_number2<<std::endl;

    p_number2 = new int{43};    // memory with int{234} leaked

    std::cout<<"p_number2 : "<<p_number2<<std::endl;
    std::cout<<"*p_number2 : "<<*p_number2<<std::endl;

    delete p_number2;
    p_number2 = nullptr;


    // Nested scopes with dynamically allocated memory

    {
        int* p_number3{new int{55}};
        // p_number3 is only accessable here
    }

    // memory with int{55} leaked
    // and no longer accessable here
    /* this piece of code is no longer accessing p_number3
    std::cout<<"p_number3 : "<<p_number3<<std::endl;
    std::cout<<"*p_number3 : "<<*p_number3<<std::endl;
    */
    std::cout<<"Program Ending Well..."<<std::endl;

    return 0;
}