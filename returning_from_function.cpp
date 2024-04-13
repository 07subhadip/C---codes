#include<iostream>
#include<string>

// This is a type of fucntions without returning value but directly changing the value in the desired address

// void sum(const int a, const int b, int& c){
//     c = a+b;
// }

int sum(const int a,const int b){
    int c = a+b;
    std::cout<<"&c : "<<&c<<std::endl;
    return c;       // return by value so the address of result is different
}

std::string add_str(std::string input1, std::string input2){
    std::string result = input1+input2;
    std::cout<<"&result : "<<&result<<std::endl;
    return result;  // compiler convert the return by value to return by reference so the address if result is same
}

int main(){
    const int a{34};
    const int b{23};
    // int c;       it will use at the case of no return
    // sum(a,b,c);
    int c = sum(a,b);
    std::cout<<"sum : "<<c<<std::endl;
    std::cout<<"&c : "<<&c<<std::endl;

    //**************************************

    std::string result = add_str(std::string("Hello "),std::string("World"));
    std::cout<<"Result : "<<result<<std::endl;
    std::cout<<"&result : "<<&result<<std::endl;

    return 0;
}