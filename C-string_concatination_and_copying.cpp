#include<iostream>
#include<cstring>

int main(){
    // std::strcat  joining string
    char src[50]{"Hello"};
    char dest[50]{" World"};

    std::cout<<std::strcat(src,dest)<<std::endl;    // src is concanated to Hello World
    std::cout<<std::strcat(src," Goodbye, World")<<std::endl;

    std::cout<<std::endl<<"*****************************************************************"<<std::endl<<std::endl;
    // using strlen

    char* dest1=new char[30]{'F','i','r','e','l','o','r','d','\0'};
    char* source1= new char[30]{',','T','h','e',' ','P','h','o','e','n','i','x',' ','K','i','n','g','\0'};

    std::cout<<"std::strlen(dest1) : "<<std::strlen(dest1)<<std::endl;
    std::cout<<"std::strlen(source1) : "<<std::strlen(source1)<<std::endl;

    std::cout<<"Concatinating..."<<std::endl;
    std::cout<<"std::stdcat(dest,source1) : "<<std::strcat(dest1,source1)<<std::endl;

    return 0;
}