#include<iostream>

int main(){
    // to not modify the string use this
    const char* message{"Hello world!"};  // the Hello World is ocnverted to const char array that's why we need to set a const char pointer for this
    std::cout<<"message : "<<message<<std::endl;
    std::cout<<"*message : "<<*message<<std::endl;  // this will print the first character in the const char array in this case which is H

    char message2[]{"Hello World!"};    // to modify the string use this
    message2[0]='B';
    std::cout<<"message2 : "<<message2<<std::endl;
    return 0;
}