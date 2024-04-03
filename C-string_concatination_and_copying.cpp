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
    std::cout<<"std::strlen(dest1) : "<<std::strlen(dest1)<<std::endl;

    std::cout<<std::endl<<"*****************************************************************"<<std::endl<<std::endl;

    // using strncat

    char dest2[50]{"Hello"};
    char source2[50]{" There is a bird on my window."};

    std::cout<<"std::strncat(dest2,source2,6) : "<<std::strncat(dest2,source2,6)<<std::endl;
    std::cout<<"The concatinating string is : "<<dest2<<std::endl;

    std::cout<<std::endl<<"*****************************************************************"<<std::endl<<std::endl;

    // using strcpy

    const char* source3 = "C++ is a multipurpose programming language.";
    char* dest3 = new char[std::strlen(source3+1)]; // +1 is for the null character that will carry the garbage value

    std::strcpy(dest3,source3);

    std::cout<<"dest3 : "<<dest3<<std::endl;
    std::cout<<"sizeof(dest3) : "<<sizeof(dest3)<<std::endl;
    std::cout<<"std::strlen(dest3) : "<<std::strlen(dest3)<<std::endl;

    std::cout<<std::endl<<"*****************************************************************"<<std::endl<<std::endl;

    // using strncpy

    const char* source4={"Hello"};
    char dest4[]={'a','b','c','d','e','f','\0'};

    std::cout<<"dest4 : "<<dest4<<std::endl;

    std::cout<<"std::strncpy(source4,dest4,5) : "<<std::strncpy(dest4,source4,5)<<std::endl;


    return 0;
}