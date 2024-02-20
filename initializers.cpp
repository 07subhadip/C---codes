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
    // it can be possible in first bracket also
    int total {age + percentage};

    int anotherTotal (age+number);


    std::cout<<"total :"<<total<<std::endl;
    std::cout<<"total :"<<anotherTotal<<std::endl;

    int narrowing_conversation_functional (2.9);

    std::cout<<narrowing_conversation_functional<<std::endl;

    std::cout<<"size of int is :"<<sizeof(int)<<std::endl;

    return 0;
}