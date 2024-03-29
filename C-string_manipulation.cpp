#include<iostream>
#include<cstring>

int main(){
    const char message1[]{"The sky is blue."};
    const char* message2{"The sky is blue."};

    std::cout<<"message1 : "<<message1<<std::endl;

    std::cout<<"strlen(message1) : "<<std::strlen(message1)<<std::endl;
    std::cout<<"sizeof(message1) : "<<sizeof(message1)<<std::endl;      // contains null pointer

    std::cout<<"strlen(message2) : "<<std::strlen(message2)<<std::endl;
    std::cout<<"sizeof(message2) : "<<sizeof(message2)<<std::endl;      // prints size of the pointer


    std::cout<<std::endl<<"************************************************"<<std::endl<<std::endl;

    // using strcmp

    const char* string_data1 {"Alabama"};
    const char* string_data2 {"Blabama"};

    char string_data3[]{"Alabama"};
    char string_data4[]{"Blabama"};

    const char* string_data5{"Clabama"};
    const char* string_data6{"Blabama"};

    std::cout<<"std::strcmp("<<string_data1<<","<<string_data2<<") : "<<std::strcmp(string_data1,string_data2)<<std::endl;

    std::cout<<"std::strcmp("<<string_data3<<","<<string_data4<<") : "<<std::strcmp(string_data3,string_data4)<<std::endl;

    std::cout<<"std::strcmp("<<string_data5<<","<<string_data6<<") : "<<std::strcmp(string_data5,string_data6)<<std::endl;  // strcmp compairs according to the lexicographical order

    return 0;
}