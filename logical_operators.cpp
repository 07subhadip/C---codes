#include<iostream>

int main(){
    bool a{true};
    bool b{false};
    bool c{true};
    std::cout<<std::boolalpha;
    std::cout<<"a : "<<a<<std::endl;
    std::cout<<"b : "<<b<<std::endl;
    std::cout<<"c : "<<c<<std::endl;

    std::cout<<std::endl;
    std::cout<<"***************Basic AND operators***************"<<std::endl;

    std::cout<<"a && b : "<<(a&&b)<<std::endl;
    std::cout<<"a && c : "<<(a&&c)<<std::endl;
    std::cout<<"a && b && c : "<<(a&&b&&c)<<std::endl;


    std::cout<<std::endl;
    std::cout<<"**************Basic OR operators**************"<<std::endl;
    std::cout<<"a || b : "<<(a||b)<<std::endl;
    std::cout<<"a || c : "<<(a||c)<<std::endl;
    std::cout<<"a || b || c : "<<(a||b||c)<<std::endl;

    std::cout<<std::endl;
    std::cout<<"**************Basic NOT operators**************"<<std::endl;
    std::cout<<"!a : "<<(!a)<<std::endl;
    std::cout<<"!b : "<<(!b)<<std::endl;
    std::cout<<"!c : "<<(!c)<<std::endl;


    std::cout<<std::endl;
    std::cout<<"Combining all operators"<<std::endl;

    return 0;
}