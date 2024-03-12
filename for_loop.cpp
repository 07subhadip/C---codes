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

    std::cout<<std::endl<<"Size of (size_t) : "<<sizeof(size_t)<<std::endl<<std::endl;

    // declare values in variables
    size_t i {0};
    const size_t COUNT {10};

    for(;i<COUNT ; ++i ){
        std::cout<<i<<" : I Love C++"<<std::endl;
    }
    std::cout<<"Loop Done ! "<<std::endl;



    return 0;
}