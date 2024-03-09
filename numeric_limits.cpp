#include<iostream>
#include<limits>

int main(){
    std::cout<<"The range for short in from : "<<std::numeric_limits<short>::min()<<" to "<<std::numeric_limits<short>::max()<<std::endl;
    std::cout<<"The range for unsigned short in from : "<<std::numeric_limits<unsigned short>::min()<<" to  "<<std::numeric_limits<unsigned short>::max()<<std::endl;
    std::cout<<"The range for int in from : "<<std::numeric_limits<int>::min()<<" to "<<std::numeric_limits<int>::max()<<std::endl;
    std::cout<<"The range for unsigned int in from : "<<std::numeric_limits<unsigned int>::min()<<" to  "<<std::numeric_limits<unsigned int>::max()<<std::endl;
    std::cout<<"The range for unsigned double in from : "<<std::numeric_limits<double>::min()<<" to  "<<std::numeric_limits<double>::max()<<std::endl;
    std::cout<<"The range for long in from : "<<std::numeric_limits<long>::min()<<" to "<<std::numeric_limits<long>::max()<<std::endl;
    std::cout<<"The range for float in from : "<<std::numeric_limits<float>::min()<<" to "<<std::numeric_limits<float>::max()<<std::endl;
    std::cout<<"The range (from lowest) is for float from : "<<std::numeric_limits<float>::lowest()<<" to "<<std::numeric_limits<float>::max()<<std::endl;
    std::cout<<"The range (from lowest) is for double from : "<<std::numeric_limits<double>::lowest()<<" to "<<std::numeric_limits<double>::max()<<std::endl;
    std::cout<<"The range (from lowest) is for long from : "<<std::numeric_limits<long>::lowest()<<" to "<<std::numeric_limits<long>::max()<<std::endl;

    // other facilities
    std::cout<<std::boolalpha;
    std::cout<<"int is signed : "<<std::numeric_limits<int>::is_signed<<std::endl;
    std::cout<<"int digits : "<<std::numeric_limits<int>::digits<<std::endl;

    return 0;
}