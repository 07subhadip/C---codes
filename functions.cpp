#include<iostream>

void enter_bar(unsigned int age){
    if(age>18){
        std::cout<<"You're "<<age<<" years old , please continue"<<std::endl;
    }else{
        std::cout<<"Sorry you are not allowed. No offence"<<std::endl;
    }
    return;
}

// max function

signed int max(signed int a,signed int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

// Function for Greeting

void say_hello(){
    std::cout<<"Hello World"<<std::endl;
    return;
}

// return value 

int lucky_number(){
    return 99;
}

// increment and multiply

int increment_multiply(int a,int b){
    std::cout<<"before increment"<<std::endl;
    std::cout<<"a : "<<a<<std::endl;
    std::cout<<"b : "<<b<<std::endl;

    int multiply = ((++a) * (++b));
    std::cout<<"multiply : "<<multiply<<std::endl;
    std::cout<<"After increment"<<std::endl;
    std::cout<<"a : "<<a<<std::endl;
    std::cout<<"b : "<<b<<std::endl;

    return multiply;
}

int main(){
    enter_bar(15);

    for(size_t i{15};i<22;i++){
        enter_bar(i);
    }

    signed int maximum_number = max(+100,-234);

    std::cout<<"max : "<<maximum_number<<std::endl;

    say_hello();

    int number{};
    number = lucky_number();
    std::cout<<"number : "<<number<<std::endl;

    int result = increment_multiply(7,10);
    std::cout<<"increment_multiply : "<<result<<std::endl;
    return 0;
}