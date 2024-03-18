#include<iostream>

int main(){
    // Case1 : Uninitializd Pointers
    
    int* p_number; // uninitialized pointer         BAD 
    std::cout<<"p_number : "<<p_number<<std::endl;
    std::cout<<"*p_number : "<<*p_number<<std::endl; // crash or unexpected value
    
    std::cout<<"*****************************************************************"<<std::endl<<std::endl;

    // Deleted Pointers
    int* p_number2 {new int(69)};

    std::cout<<"p_number2 : "<<p_number2<<std::endl;
    std::cout<<"*p_number2 : "<<*p_number2<<std::endl;

    delete p_number2;

    std::cout<<"p_number2 after deleted : "<<p_number2<<std::endl;
    std::cout<<"*p_number2 after deleted : "<<*p_number2<<std::endl;    // may get crashed here and sometimes run properly   BAD

    std::cout<<"*****************************************************************"<<std::endl<<std::endl;

    // Multiple pointers to same address

    int* p_number3{new int(43)};
    int* p_number4{p_number3};

    std::cout<<"p_number3 : "<<*p_number3<<std::endl;
    std::cout<<"p_number4 : "<<*p_number4<<std::endl;

    delete p_number3;

    std::cout<<"After deleting p_number3..."<<std::endl;
    std::cout<<"p_number3 : "<<*p_number3<<std::endl;       // crash or gerbage or whatever
    std::cout<<"p_number4 : "<<*p_number4<<std::endl;    

    return 0;
}