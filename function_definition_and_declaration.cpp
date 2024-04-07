#include<iostream>

int max(int a,int b);   // Function Declaration         need a ; after that
                        // function prototype
                        // signature function does not need return type


int min(int , int);
int main(){
    int a{4};
    int b{34};

    int result = max(a,b);

    std::cout<<"max : "<<result<<std::endl;

    result = min(a,b);

    std::cout<<"min : "<<result<<std::endl;

    return 0;
}

int max(int a , int b){ // function definition
    if(a>b)
        return a;
    else
        return b;
}

int min(int a,int b){
    if(a<b)
        return a;
    else
        return b;
}