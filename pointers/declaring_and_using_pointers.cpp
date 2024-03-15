#include<iostream>

int main(){
    // declare and initialize pointers
    int* p_number{};
    double* fractional_number{};
    //nullptr in pointers
    int* int_number{nullptr};
    int* fractional_number2{nullptr};

    std::cout<<"size of int : "<<sizeof(int)<<std::endl;
    std::cout<<"size of int* : "<<sizeof(int*)<<std::endl;
    std::cout<<"size of double : "<<sizeof(double)<<std::endl;
    std::cout<<"size of double* : "<<sizeof(double*)<<std::endl;
    std::cout<<"size of int_number : "<<sizeof(int_number)<<std::endl;
    std::cout<<"size of fractional_number2 : "<<sizeof(fractional_number2)<<std::endl;

    int* pointer{},other_variable{};    // other_variable{} is not a pointer it's normal int
    int* pointer2{},other_variable2{};

    std::cout<<"sizeof(pointer) : "<<sizeof(pointer)<<std::endl;
    std::cout<<"sizeof(other_variable) : "<<sizeof(other_variable)<<std::endl;

    std::cout<<"sizeof(pointer2) : "<<sizeof(pointer2)<<std::endl;
    std::cout<<"sizeof(other_variable2) : "<<sizeof(other_variable2)<<std::endl;

    int int_var{45};
    int* ptr{&int_var};     // referencing a pointer

    std::cout<<"int_var : "<<int_var<<std::endl;
    std::cout<<"ptr(address of int_var) : "<<ptr<<std::endl;
    std::cout<<"ptr(address of int_var) : "<<*ptr<<std::endl;   //dereferencing a pointer
    
    return 0;
}