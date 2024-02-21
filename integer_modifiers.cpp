#include<iostream>

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

    return 0;
}