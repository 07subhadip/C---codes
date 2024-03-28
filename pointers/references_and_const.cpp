#include<iostream>

int main(){

    int age{30};
    int& ref_age{age};  // making it const cause error at the time of changing

    std::cout<<"age : "<<age<<std::endl;
    std::cout<<"ref_age : "<<ref_age<<std::endl;

    ref_age++;  // modify through reference

    std::cout<<"age : "<<age<<std::endl;
    std::cout<<"ref_age : "<<ref_age<<std::endl;

    return 0;
}