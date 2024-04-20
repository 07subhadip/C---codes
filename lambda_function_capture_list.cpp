#include<iostream>

int main(){
    // Capture Lists

    int a{23};
    int b{45};

    auto func = [a,b](){
        std::cout<<"a + b : "<<a+b<<std::endl;
    };
    func();
    return 0;
}