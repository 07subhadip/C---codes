#include<iostream>
#include<string>
// #include<string_view>        not necessary to use string_view
// function overloading using different parameters

// function overloading can be created using three forms
// 1. Number of parameters
// 2. Datatype Sequence
// 3. Different Datatype of same name function

int max(int a ,int b){
    std::cout<<"Int overload is called"<<std::endl;
    return(a>b)?a:b;
}

double max(double a,double b){
    std::cout<<"Double overload is called"<<std::endl;
    return(a>b)?a:b;
}

double max(int a,double b){
    std::cout<<"Int Double overload is called"<<std::endl;
    return(a>b)?a:b;
}

double max(double a,int b){
    std::cout<<"Double Int overload is called"<<std::endl;
    return(a>b)?a:b;
}

double max(double a,int b,int c){
    std::cout<<"Double Int Int overload is called"<<std::endl;
    return a;
}

std::string_view max(std::string_view a,std::string_view b){
    std::cout<<"String_view overload is called"<<std::endl;
    return(a>b)?a:b;
}

int main(){
    int a{23};
    int b{34};
    double a1{23.43};
    double b1{54.76};
    std::string_view a2("Hello C++ World");
    std::string_view b2("Mississippi");

    std::cout<<max(a,b)<<std::endl;
    std::cout<<max(a1,b1)<<std::endl;
    std::cout<<max(a2,b2)<<std::endl;
    std::cout<<max(a,a1)<<std::endl;
    std::cout<<max(b1,b)<<std::endl;
    std::cout<<max(b1,a,23)<<std::endl;

    // even we can do this too
    std::cout<<max("Hello","Kolkata")<<std::endl;
    
    return 0;
}