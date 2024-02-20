#include<iostream>

int main(){
    // braces initializer

    int age {13};

    // bracket initializers

    int percentage (89);

    // assignment initializer

    int number = 123;

    std::cout<<age<<std::endl<<percentage<<std::endl<<number<<std::endl;

    // can use expression as initializer

    int total {age + percentage};

    std::cout<<"total :"<<total<<std::endl;
    return 0;
}