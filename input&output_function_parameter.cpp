#include<iostream>
#include<string>

void max_str(const std::string& input1 , const std::string& input2, std::string& output){
    if(input1>input2)
    output = input1;
    else
    output = input2;
}

// this will work according to the size of the string
void max_str_size(const std::string& input1, const std::string& input2, std::string& output){
    if(input1.size()>input2.size()){
        output = input1;
    }else{
        output = input2;
    }
}
void out_int(const int a , const int b , int& output){
    if (a>b)
    {
        output = a;
    }else{
        output = b;
    }
    
}

void max_double(const double a, const double b, double* output){
    if(a>b)
    *output = a;
    else
    *output = b;
}

int main(){
    std::string out_str;
    
        // here is a thing to be clear that is
        // the comparison is happening according to the lexicographical order which means the dictionary order
        // that's why the string size comparison is not working here

    const std::string input1("Mississippi");
    const std::string input2("Ambrella");
    max_str(input1,input2,out_str);

    std::cout<<input1.size()<<std::endl;

    std::cout<<"max_str : "<<out_str<<std::endl;

    //**********************************************************

    std::string output2;

    max_str_size(input1,input2,output2);

    std::cout<<"max_str_size : "<<output2<<std::endl;

    // *********************************************************

    const int a{14};
    const int b{23};
    int output{};

    out_int(a,b,output);
    std::cout<<"out_int : "<<output<<std::endl;

    // *********************************************************

    const double in_double1{34.54};
    const double in_double2{32.45};
    double out_double{};

    max_double(in_double1,in_double2,&out_double);

    std::cout<<"max_double : "<<out_double<<std::endl;


    return 0;
}