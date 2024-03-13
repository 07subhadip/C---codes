#include<iostream>

int main(){
    int score[10];

    for(size_t i{0};i<10;i++){
        score[i] = i*10;
    }

    for(size_t i{0};i<10;i++){
        std::cout<<"Score["<<i<<"] : "<<score[i]<<std::endl;
    }
    std::cout<<std::endl;

    double salary[5]{23.3,54.7,43.4,12.8,32.2};
    for (size_t i{0}; i<5; i++)    {
        std::cout<<"salary["<<i<<"] : "<<salary[i]<<std::endl;
    }
    std::cout<<std::endl;

    size_t number[10]{12,34,43,23,4,55};
    for (size_t i{0}; i<10; i++)    {
        std::cout<<"number["<<i<<"] : "<<number[i]<<std::endl;
    }
    
    return 0;
}