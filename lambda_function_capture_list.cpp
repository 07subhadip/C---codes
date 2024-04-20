#include<iostream>

int main(){
    // Capture Lists

    int a{23};
    int b{45};

    auto func = [a,b](){
        std::cout<<"a + b : "<<a+b<<std::endl;
    };
    func();

    // capturing by value

    int c{10};

    auto func2 = [c](){
        std::cout<<"C : "<<c<<" Address inner : "<<&c<<std::endl;
    };

    for(size_t i{};i<=5;i++){
        std::cout<<"Outer value : "<<c<<" Address out : "<<&c<<std::endl;
        func2();
        c++;
    }

    // capture by reference

    int d{45};

    auto func3 = [&d](){
        std::cout<<"d : "<<d<<std::endl;
    };

    for(size_t i{};i<=5;i++){
        std::cout<<"outer d : "<<d<<std::endl;
        func3();
        d++;
    }
    return 0;
}