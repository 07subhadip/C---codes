#include<iostream>

// Variable : Definition and Declaration

double weight{};
// double weight{};

double add(double a,double b);

struct point{
    double m_x{10};
    double m_y{20};
};

int main(){
    point p1;
    std::cout<<weight<<std::endl;
    std::cout<<add(10,20)<<std::endl;
    std::cout<<"m_x : "<<p1.m_x<<"\nm_y : "<<p1.m_y<<std::endl;
    return 0 ;
}
double add(double a,double b){
    return a+b;
}