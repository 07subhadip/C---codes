#include<iostream>

int main(){

    const size_t COUNT{10};
    size_t i{0};

    do{
        std::cout<<i<<" : I Love C++"<<std::endl;       // this line iterates minimum one time even if the condition is false
        i++;
    }while(i<COUNT);
    return 0;
}