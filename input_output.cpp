#include<iostream>
#include<string>
int main(){
    int age;
    std:: cout << "Enter your age : ";
    std::cin >> age ;
    std::cout<<"Your age is :"<<age<<std::endl;
    std::cerr<<"This is an error message..."<<std::endl;
    std::clog<<"This is for printing message in console..."<<std::endl;

    std::string name;
    std::cout<<"Enter Your Name : ";
    std::cin >> name ;
    std::cout<<"Your name is : "<<name<<std::endl;


    std::string full_name;
    std::cout<<"Enter yor full name : ";
    std::cin.ignore();  // this line is to ignore the enter pressed after cin
    std::getline(std::cin,full_name);
    std::cout<<"Your full name is : "<<full_name<<std::endl;
    return 0;
}