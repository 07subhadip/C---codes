#include<iostream>

int main(){

    int age{30};
    int& ref_age{age};  // making it const cause error at the time of changing

    std::cout<<"age : "<<age<<std::endl;
    std::cout<<"ref_age : "<<ref_age<<std::endl;

    ref_age++;  // modify through reference

    std::cout<<"age : "<<age<<std::endl;
    std::cout<<"ref_age : "<<ref_age<<std::endl;

    std::cout<<std::endl<<"*****************************************************"<<std::endl<<std::endl;

    // simulating reference behaviour with pointers
    const int* const p_age{&age};

    // *p_age = 45;         this will give a compiler error
    std::cout<<"*p_age : "<<*p_age<<std::endl;
    return 0;
}