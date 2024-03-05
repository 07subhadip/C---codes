#include<iostream>

int main(){
    int number {10};

    int result = number+1;

    std::cout<<"Normal Addition : "<<result<<std::endl;

    std::cout<<"************postfix************"<<std::endl;

    std::cout<<"increment operator : "<<result++<<std::endl;

    std::cout<<"Decrement operator : "<<result--<<std::endl;

    std::cout<<"************prefix************"<<std::endl;

    std::cout<<"increment operator : "<<++result<<std::endl;

    std::cout<<"Decrement operator : "<<--result<<std::endl;

    return 0;
}