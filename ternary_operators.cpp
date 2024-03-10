#include<iostream>

int main(){
    // result = condition ? result1 : result2 ;

    int max{};

    int a{45};
    int b{50};

    max = (a<b)?a:b;

    std::cout<<"Result : "<<max<<std::endl;
    return 0;
}