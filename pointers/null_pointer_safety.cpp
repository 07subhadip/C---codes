#include<iostream>

int main(){
    // verbose nullptr check

    int* p_number{};    // initialized to nullptr
    p_number = new int{43};

    if(!(p_number==nullptr)){
        std::cout<<"p_number pointer to a valid address : "<<p_number<<std::endl;
        std::cout<<"p_number : "<<*p_number<<std::endl;
    }else{
        std::cout<<"p_number pointer to a INVALID Address."<<std::endl;
    }
    delete p_number;
    nullptr;

    // another type of nullptr check

    int* p_number2{};
    p_number2 = new int{23};

    if(p_number2){
        std::cout<<"p_number2 pointer to a valid address : "<<p_number2<<std::endl;
        std::cout<<"p_number2 : "<<*p_number2<<std::endl;
    }else{
        std::cout<<"p_number2 pointer to a INVALID Address"<<std::endl;
    }
    delete p_number2;
    nullptr;

    // calling delete on a nullptr is OK

    int* p_number3{};

    delete p_number3;   // it is a valid C++ code
    std::cout<<"Program executed well..."<<std::endl;
    return 0;
}