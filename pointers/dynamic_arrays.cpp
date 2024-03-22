#include<iostream>

int main(){
    const size_t size{10};

    double* p_salaries{new double[size]};   // all values will be grabage
    double* p_students{new(std::nothrow) double[size]};  // this will contain all value to 0
    double* p_score{new(std::nothrow) double[size]{12.2,23.3,25,98}}; // rest of the items will be 0


    if(p_score){
        std::cout<<"Successfully allocated memory for the array.."<<std::endl;
        for(size_t i{0};i<size;i++){
            std::cout<<"p_score : "<<p_score[i]<<" : "<<*(p_score+i)<<std::endl;
        }
    }


    delete [] p_salaries;
    p_salaries = nullptr;

    delete [] p_score;
    p_score = nullptr;

    delete [] p_students;
    p_students = nullptr;

    std::cout<<"***********************************************"<<std::endl;

    int array[10]{1,2,3,4,5,6,7,8,9,10};    // lives on the stack

    std::cout<<"sizeof array : "<<sizeof(array)/sizeof(array[0])<<std::endl;

    for(auto s : array){
        std::cout<<"value : "<<s<<std::endl;

    }

    std::cout<<"***********************************************"<<std::endl;

    int* p_number = new int[10]{1,2,3,4,5,6,7,8,9,10};
    std::cout<<"size of p_number : "<<sizeof(p_number)/sizeof(p_number[0])<<std::endl;  // this will not give the actual size of the array
    // for(auto p : p_number){
    //     std::cout<<"value : "<<p<<std::endl;
    // }
    std::cout<<"the program is running well..."<<std::endl;
    return 0;
}