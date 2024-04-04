#include<iostream>
// #include<compare>

int main(){
    auto result = (10 <=> 20);
    std::cout<<(result>0)<<std::endl;
    return 0;
}