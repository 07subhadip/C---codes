#include<iostream>
int main(){
    int number1 {45};
    int number2 {50};

    bool result = (number1<number2);  // Expression yielding the condition
    std::cout<<std::boolalpha;
    std::cout<<result<<std::endl;

    if (result==true)
    {
        std::cout<<number1<<" is lesser than "<<number2<<std::endl;
    }
    else if(!(result==true)){
        std::cout<<number1<<" is not lesser than "<<number2<<std::endl;
    }
    
    return 0;

}