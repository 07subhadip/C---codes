#include<iostream>

int main(){
    short int var1 {10};
    short int var2 {20};

    char var3 {30};
    char var4 {40};

    std::cout<<"sizeof var1 : "<<sizeof(var1)<< " and var2 : "<<sizeof(var2)<<std::endl;
    std::cout<<"sizeof var3 : "<<sizeof(var3)<< " and var4 : "<<sizeof(var4)<<std::endl;

    auto result1 = var1+var2;
    auto result2 = var3+var4;

    std::cout<<"result 1 : "<<result1<<std::endl;
    std::cout<<"result 2 : "<<result2<<std::endl;

    std::cout<<"sizeof result1 : "<<sizeof(result1)<<std::endl;
    std::cout<<"sizeof result2 : "<<sizeof(result2)<<std::endl;

    return 0;
}