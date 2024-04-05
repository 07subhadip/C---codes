#include<iostream>
#include<string>

int main(){
    std::string full_name;  // empty string
    std::string planet{"Earth, is a planet where sky is blue"};
    std::string prefered_planet{planet};
    std::string message{"Hello World",5};
    std::string weird_message(4,'e');
    std::string greeting{"Hello there"};
    std::string saying_hello{greeting,6,5};

    std::cout<<"full_name : "<<full_name<<std::endl;
    std::cout<<"planet : "<<planet<<std::endl;
    std::cout<<"prefered_planet : "<<prefered_planet<<std::endl;
    std::cout<<"message : "<<message<<std::endl;
    std::cout<<"weird_message : "<<weird_message<<std::endl;
    std::cout<<"greeting : "<<greeting<<std::endl;
    std::cout<<"saying_hello : "<<saying_hello<<std::endl;

    // changing std::string at runtime

    planet = "Earth, is a planet where sky is blueEarth, is a planet where sky is blueEarth, is a planet where sky is blue";
    std::cout<<"planet : "<<planet<<std::endl;

    // using raw array

    const char* planet1 = "Earth, is a planet where sky is blue";
    std::cout<<"planet1 : "<<planet1<<std::endl;
    planet1 = "Earth, is a planet where sky is blueEarth, is a planet where sky is blueEarth, is a planet where sky is blue";
    std::cout<<"planet1 : "<<planet1<<std::endl;


    return 0;
}