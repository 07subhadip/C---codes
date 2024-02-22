#include<iostream>
#include<iomanip> // this is to add std::precision in the floating point variables

int main(){
    std::cout<<"*******************************************************************************"<<std::endl;

    short short_var {234};
    signed short signed_short {23};
    signed short int signed_short_int{245};
    unsigned short int unsigned_short_int{2324};

    std::cout<<"short_var : "<<short_var<<std::endl<<"signed_short : "<<signed_short<<std::endl<<"signed_short_int : "<<signed_short_int<<std::endl<<"unsigned_short_int : "<<unsigned_short_int<<std::endl;
    std::cout<<"sizeof(short_var) : "<<sizeof(short)<<std::endl;

    std::cout<<"*******************************************************************************"<<std::endl;

    int integer {13};
    signed int signed_int {342};
    signed int signed_int2 {-432};
    unsigned int unsigned_int {23423};
    // unsigned int unsigned_int2 {-133}   // compiler error

    std:: cout<<"int : "<<integer<<std::endl<<"signed_int : "<<signed_int<<std::endl<<"signed_int2 : "<<signed_int2<<std::endl<<"unsigned_int : "<<unsigned_int<<std::endl;
    std::cout<<"sizeof(int) : "<<sizeof(int)<<std::endl;

    std::cout<<"*******************************************************************************"<<std::endl;

    long long_var {42342432};
    long int long_int (465161);
    signed long int signed_long_int {-46516415};
    unsigned long int unsigned_long_int {434234234};

    std::cout<<"long_var : "<<long_var<<std::endl<<"long_int : "<<long_int<<std::endl<<"signed_long_int : "<<signed_long_int<<std::endl<<"unsigned_long_int : "<<unsigned_long_int<<std::endl;
    std::cout<<"sizeof(long) : "<<sizeof(long)<<std::endl;
    std::cout<<"sizeof(long int) : "<<sizeof(long int)<<std::endl;

    std::cout<<"*******************************************************************************"<<std::endl;

    long long long_long {432423423423};
    long long int long_long_int {4325234234523525};
    signed long long signed_long_long {4234234234234234};
    signed long long int signed_long_long_int {-4342342342342342342}; // we can use + also
    unsigned long long int unsigned_long_long_int {4342343242342342342};

    std::cout<<"long_long : "<<long_long<<std::endl<<"long_long_int : "<<long_long_int<<std::endl<<"signed_long_long : "<<signed_long_long<<std::endl<<"signed_long_long_int : "<<signed_long_long_int<<std::endl<<"unsigned_long_long_int : "<<unsigned_long_long_int<<std::endl;

    std::cout<<"sizeof(long long) : "<<sizeof(long long)<<std::endl;

    std::cout<<"******************************************************************************"<<std::endl;


    // floating point numbers initialization

    float value1 {1.3423423523524f};   // precision = 7 
    double value2 {3.4234234224545345}; // precision = 15
    long double value3 {343.4235245454543534l}; //precision > 15

    std::cout<<std::setprecision(20);
    std :: cout << "float : "<<value1<<std::endl;
    std:: cout<<"double : "<<value2<<std::endl;
    std::cout<<"long double : "<<value3<<std::endl;

    std::cout<<"size of float : "<<sizeof(float)<<std::endl;
    std::cout<<"size of double : "<<sizeof(double)<<std::endl;
    std::cout<<"size of long double : "<<sizeof(long double)<<std::endl;

    std::cout<<"******************************************************************************"<<std::endl;

    // we can take input using e (exponential operators)

    double expo = {1.432423e6};

    long double expo2  {1.342342e-11};

    std::cout<<"expo : "<<expo<<std::endl<<"expo2 : "<<expo2<<std::endl;
    
    std::cout<<"******************************************************************************"<<std::endl;

    double numberX {5.6};
    double numberY {-5.6};
    double number1{};
    double number2 {};

    //infinity

    double result {numberX/number1};

    std::cout<<numberX<<" / "<<number1<<" = "<<result<<std::endl;    // infinity will output as inf

    result = {numberY/number1};

    std::cout<<numberY<<" / "<<number1<<" = "<<result<<std::endl;   // print -inf
    //NaN
    
    result = number1/number2;

    std::cout<<number1<<" / "<<number2<<" = "<<result<<std::endl;  // it will print as nan
    

    return 0;
}