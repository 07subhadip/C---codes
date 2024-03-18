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
    std::cout<<std::endl;
    std::cout<<"*****************************************************************"<<std::endl<<std::endl;

    // SOLUTION 1 : Initialize pointers immediately upon declaration

    int* p_number5{nullptr}; // initialize using nullptr
    int* p_number6(new int(34));  // or using new

    if(p_number6 != nullptr){
        std::cout<<"p_number6 : "<<p_number6<<std::endl;
    }else{
        std::cout<<"Invalid Address..."<<std::endl;
    }
    std::cout<<"*****************************************************************"<<std::endl<<std::endl;

    // SOLUTION 2 : Reset the pointer

    int* p_number7{new int{23}};

    std::cout<<"*p_number7 : "<<*p_number7<<std::endl;

    delete p_number7;

    p_number7 = nullptr; // reset the pointer

    if (p_number7 != nullptr){
        std::cout<<"p_number7 : "<<p_number7<<std::endl;
    }else{
        std::cout<<"Invalid Address..."<<std::endl;
    }

    return 0;
}