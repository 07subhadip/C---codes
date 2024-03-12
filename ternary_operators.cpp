#include<iostream>

int main(){
    // result = condition ? result1 : result2 ;

    int max{};

    int a{45};
    int b{50};

    max = ( a < b ) ? a : b ;    // ternary operator

    std::cout<<"Result : "<<max<<std::endl;

    auto max1 = (a>b)?a:22.5f;   // using auto with float literal

    std::cout<<"max1 : "<<max1<<std::endl;

    // initialize ternary operators
    bool fast {false};
    auto speed {fast ? 300 : 150};
    std::cout<<"Variable : "<< speed<<std::endl;

    return 0;
}