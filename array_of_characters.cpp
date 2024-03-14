#include<iostream>

int main(){
    char message[]{'H','e','l','l','o','\0'};   // \0 is used to indicate that the array has been ended aka null termination character
    for(auto i:message){
        std::cout<<i;
    }
    std::cout<<std::endl;
    std::cout<<message<<std::endl;

    char name[]{'s','u','b','h','a','\0'};
    std::cout<<name<<std::endl;
    std::cout<<"sizeof(name) : "<<sizeof(name)<<std::endl;
    char name1[6]{'s','u','b','h','a'};     // instead of adding the null terminator character we can do this
    std::cout<<name1<<std::endl;
    std::cout<<"sizeof(name1) : "<<sizeof(name1)<<std::endl;
    return 0;
}