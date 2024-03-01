#include<iostream>

int main(){
    auto var1 {12};
    auto var2 {13.24}; // double
    auto var3 {12.32f}; // float
    auto var4 {43.4232l}; // long double
    auto var5 {323243ul};//unsigned long
    auto var6 {423423423ull}; //unsigned long long
    auto var7 {23.433354e6};
    auto var8 {'e'}; // character

    // long long int g {32423432423};
    // std::cout<<sizeof(g)<<std::endl;
    
    std::cout<<sizeof(var1)<<std::endl;
    std::cout<<sizeof(var2)<<std::endl;
    std::cout<<sizeof(var3)<<std::endl;
    std::cout<<sizeof(var4)<<std::endl;
    std::cout<<sizeof(var5)<<std::endl;
    std::cout<<sizeof(var6)<<std::endl;
    std::cout<<sizeof(var7)<<std::endl;
    std::cout<<sizeof(var8)<<std::endl;

    return 0;
}