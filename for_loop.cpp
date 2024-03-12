#include<iostream>

int main(){
    for(unsigned int i{0}; i<10 ;++i){
        std::cout<<i<<" : I Love C++"<<std::endl;
    }
    std::cout<<"Loop Ended"<<std::endl;

    // use size_t : a representation of some unsigned int for positive numbers

    for(size_t j{0} ; j<10 ;j++){
        std::cout<<j<<" : I Love C++"<<std::endl;
    }
    std::cout<<"Loops Done ! "<<std::endl;

    return 0;
}