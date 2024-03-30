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

    // here the comparison is occuring using the ASCII values 

    const char* string_data1 {"Alabama"};
    const char* string_data2 {"Blabama"};

    char string_data3[]{"Alabama"};
    char string_data4[]{"Blabama"};

    const char* string_data5{"Clabama"};
    const char* string_data6{"Blabama"};

    std::cout<<"std::strcmp("<<string_data1<<","<<string_data2<<") : "<<std::strcmp(string_data1,string_data2)<<std::endl;

    std::cout<<"std::strcmp("<<string_data3<<","<<string_data4<<") : "<<std::strcmp(string_data3,string_data4)<<std::endl;

    std::cout<<"std::strcmp("<<string_data5<<","<<string_data6<<") : "<<std::strcmp(string_data5,string_data6)<<std::endl;  // strcmp compairs according to the lexicographical order

    string_data1 = "India";
    string_data2 = "Australia";

    std::cout<<"std::strcmp("<<string_data1<<","<<string_data2<<") : "<<std::strcmp(string_data1,string_data2)<<std::endl;

    std::cout<<std::endl<<"************************************************"<<std::endl<<std::endl;

    const char* message3{"Kolkata"};
    const char* message4{"Kolkate"};

    size_t n{7};

    std::cout<<std::endl<<"std::strncmp("<<message3<<","<<message4<<") : "<<std::strncmp(message3,message4,n)<<std::endl;

    const char* message5{"Kolkata"};
    const char* message6{"Kolkata"};

    size_t m{4};

    std::cout<<std::endl<<"std::strncmp("<<message5<<","<<message6<<") : "<<std::strncmp(message5,message6,n)<<std::endl;

    std::cout<<std::endl;

    size_t a{7};
    string_data1 = "kolkata";
    string_data2 = "kolkate";

    std::cout<<"std::strncmp("<<string_data1<<","<<string_data2<<") : "<<std::strncmp(string_data1,string_data2,a)<<std::endl;

    std::cout<<std::endl<<"************************************************"<<std::endl<<std::endl;

    // Searching character in a string using strchr(result,target)

    const char* const str{"Try not. Do, or do not. There is no try. The sky is blue."};
    char target = 'T';
    const char* result{str};
    size_t iterations{};

    while((result=std::strchr(result,target))!=nullptr){
        std::cout<<"Found '"<<target<<"' starting at : "<<result<<"\n"<<std::endl;
        ++result;
        ++iterations;
    }
    std::cout<<"Iterations : "<<iterations<<std::endl;

    std::cout<<std::endl<<"************************************************"<<std::endl<<std::endl;

    // find last occurence usnig std::strrchr

    char input[]{"/home/user/hello.cpp"};
    char* output = std::strrchr(input,'/');
    if(output){
        std::cout<<output+1<<std::endl;
    }


    return 0;
}