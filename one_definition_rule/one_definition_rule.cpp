#include<iostream>

// Variable : Definition and Declaration

double weight{20};

double add(double a,double b);

struct point{
    
}
int main(){
    std::cout<<weight<<std::endl;
    std::cout<<add(10,20)<<std::endl;
    return 0 ;
}
double add(double a,double b){
    return a+b;
}