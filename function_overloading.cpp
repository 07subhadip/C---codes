#include<iostream>
#include<string>
// function overloading using different parameters

int max(int a ,int b){
    if(a>b)
    return a;
    else
    return b;
}

double max(double a,double b){
    if(a>b)
    return a;
    else
    return b;
}

std::string max(std::string& a,std::string& b){
    if(a.size()>b.size())
    return a;
    else
    return b;
}

int main(){
    int a{23};
    int b{34};
    double a1{23.43};
    double b1{54.76};
    std::string a2("Hello World");
    std::string b2("Mississippi");

    std::cout<<max(a,b)<<std::endl;
    std::cout<<max(a1,b1)<<std::endl;
    std::cout<<max(a2,b2)<<std::endl;
    
    return 0;
}