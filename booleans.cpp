#include<iostream>

int main(){
    bool red_light{true};       // can be use 0 or 1 instead of using true or false
    bool green_light{false};    // where  0 = false and 1 = true
    if (red_light==true)
    {
        std::cout<<"STOP"<<std::endl;
    }
    else{
        std::cout<<"Go carefully..."<<std::endl;
    }
    std::cout<<"red_light : "<<red_light<<std::endl;
    std::cout<<"green_light : "<<green_light<<std::endl;
    std::cout<<"size of booleans are : "<<red_light<<" and "<<green_light<<std::endl;

    std::cout<<std::boolalpha;    // this time the output will be in form of true and false   
    std::cout<<"red_light : "<<red_light<<std::endl;
    std::cout<<"green_light : "<<green_light<<std::endl;
    std::cout<<"size of booleans are : "<<red_light<<" and "<<green_light<<std::endl;
    return 0;
}