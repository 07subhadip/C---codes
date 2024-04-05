#include<iostream>

#include "person.h"

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

    Person person1("Subhadip Hensh",23);        // I had faced a confilct here between p1 and person1
    person1.print_info();

    Person person2("Anusuya Ghosal",22);
    person2.print_info();




    return 0 ;
}
double add(double a,double b){
    return a+b;
}

int Person::person_count = 8;

Person::Person(const std::string& names_param, int age_param)
    : full_name{names_param},age{age_param}{
        ++person_count;
    }