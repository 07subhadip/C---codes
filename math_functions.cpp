#include<iostream>
#include<cmath>

int main(){
    double weight {7.7};

    //floor
    std::cout<<"weight rounded to floor is : "<<std::floor(weight)<<std::endl;

    //ceil
    std::cout<<"weight rounded to ceil is : "<<std::ceil(weight)<<std::endl;

    double savings{-5000};

    //abs
    std::cout<<"abs of weight : "<<std::abs(weight)<<std::endl;
    std::cout<<"abs of savings : "<<std::abs(savings)<<std::endl;

    //exponential
    double exponential = std::exp(4);
    std::cout<<"Exponential : "<<exponential<<std::endl;

    //pow
    std::cout<<"3^4 is : "<<std::pow(3,4)<<std::endl;
    std::cout<<"9^5 is : "<<std::pow(9,5)<<std::endl;

    //log
    std::cout<<"To get 54.5982 you need to elevate e to the power of : "<<std::log(54.5982)<<std::endl;
    std::cout<<"To get 1000 you need to elevate 10 to the power of : "<<std::log10(1000)<<std::endl;

    //sqrt
    std::cout<<"sqrt of 81 is : "<<std::sqrt(81)<<std::endl;
    std::cout<<"sqrt of 81 is : "<<std::sqrt(-81)<<std::endl;   // it will print nan
    
    //round
    std::cout<<"3.84 is rounded to : "<<std::round(3.84)<<std::endl;
    std::cout<<"2.5 is rounded to : "<<std::round(2.5)<<std::endl;
    std::cout<<"2.4 is rounded to : "<<std::round(2.4)<<std::endl;
    

    return 0;
}