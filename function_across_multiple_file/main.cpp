#include<iostream>
#include"compare.h"

int main(){
    int maximum = max(123,34);
    std::cout<<"max : "<<maximum<<std::endl;
    int minimum = min(123,23);
    std::cout<<"min : "<<minimum<<std::endl;
    return 0 ;
}