#include<iostream>
#include<ios>
#include<iomanip>

int main(){
    std::cout<<"****************************************"<<std::endl<<std::endl;
    // std::endl
    std::cout<<"std::endl"<<std::endl;
    std::cout<<"Hello"<<std::endl;
    std::cout<<"World"<<std::endl<<std::endl;

    std::cout<<"****************************************"<<std::endl<<std::endl;
    // std::flush

    std::cout<<"This is a nice message..."<<std::endl<<std::flush<<std::endl;

    std::cout<<"****************************************"<<std::endl<<std::endl;
    //std::setw

    std::cout<<"Unformatted Table"<<std::endl;
    std::cout<<"Subhadip"<<" "<<"Hensh"<<"23"<<std::endl;
    std::cout<<"Anusuya"<<" "<<"Ghosal"<<"22"<<std::endl;
    std::cout<<"Mithu"<<" "<<"Hensh"<<"42"<<std::endl;
    std::cout<<"Dipak"<<" "<<"Hensh"<<"44"<<std::endl;
       
    std::cout<<"****************************************"<<std::endl<<std::endl;

    std::cout<<std::endl;
    std::cout<<"Formatted Table"<<std::endl<<std::endl;

    std::cout<<"****************************************"<<std::endl<<std::endl;

    std::cout<<std::setw(10)<<"Firstname"<<std::setw(10)<<"Lastname"<<std::setw(7)<<"Age"<<std::endl<<std::endl;
    std::cout<<std::setw(10)<<"Subhadip"<<std::setw(10)<<"Hensh"<<std::setw(7)<<"23"<<std::endl;
    std::cout<<std::setw(10)<<"Anusuya"<<std::setw(10)<<"Ghosal"<<std::setw(7)<<"22"<<std::endl;
    std::cout<<std::setw(10)<<"Mithu"<<std::setw(10)<<"Hensh"<<std::setw(7)<<"42"<<std::endl;
    std::cout<<std::setw(10)<<"Dipak"<<std::setw(10)<<"Hensh"<<std::setw(7)<<"44"<<std::endl;
    std::cout<<std::endl;

    std::cout<<"****************************************"<<std::endl<<std::endl;

    std::cout<<"Formatted Table with variable"<<std::endl<<std::endl;
    
    int col_width{14};

    std::cout<<std::setw(col_width)<<"Firstname"<<std::setw(col_width)<<"Lastname"<<std::setw(col_width)<<"Age"<<std::endl<<std::endl;
    std::cout<<std::setw(col_width)<<"Subhadip"<<std::setw(col_width)<<"Hensh"<<std::setw(col_width)<<"23"<<std::endl;
    std::cout<<std::setw(col_width)<<"Anusuya"<<std::setw(col_width)<<"Ghosal"<<std::setw(col_width)<<"22"<<std::endl;
    std::cout<<std::setw(col_width)<<"Mithu"<<std::setw(col_width)<<"Hensh"<<std::setw(col_width)<<"42"<<std::endl;
    std::cout<<std::setw(col_width)<<"Dipak"<<std::setw(col_width)<<"Hensh"<<std::setw(col_width)<<"44"<<std::endl;

    std::cout<<"****************************************"<<std::endl<<std::endl;

    //justified to the left
    std::cout<<std::left;
    std::cout<<std::setw(col_width)<<"Firstname"<<std::setw(col_width)<<"Lastname"<<std::setw(col_width)<<"Age"<<std::endl<<std::endl;
    std::cout<<std::setw(col_width)<<"Subhadip"<<std::setw(col_width)<<"Hensh"<<std::setw(col_width)<<"23"<<std::endl;
    std::cout<<std::setw(col_width)<<"Anusuya"<<std::setw(col_width)<<"Ghosal"<<std::setw(col_width)<<"22"<<std::endl;
    std::cout<<std::setw(col_width)<<"Mithu"<<std::setw(col_width)<<"Hensh"<<std::setw(col_width)<<"42"<<std::endl;
    std::cout<<std::setw(col_width)<<"Dipak"<<std::setw(col_width)<<"Hensh"<<std::setw(col_width)<<"44"<<std::endl;
    std::cout<<std::endl;

    std::cout<<"****************************************"<<std::endl<<std::endl;

    std::cout<<std::right;  // the alignment will be at right
    std::cout<<std::setw(10)<<-123.6<<std::endl;
    std::cout<<std::internal;   // the alignment will be internal
    std::cout<<std::setw(10)<<-123.6<<std::endl;

    std::cout<<"Setfill character"<<std::endl<<std::endl;

    std::cout<<std::left;
    std::cout<<std::setw(col_width)<<"Firstname"<<std::setw(col_width)<<"Lastname"<<std::setw(col_width)<<"Age"<<std::endl<<std::endl;

    std::cout<<std::setfill('-');   // fill the spaces with the given symbol or character

    std::cout<<std::setw(col_width)<<"Subhadip"<<std::setw(col_width)<<"Hensh"<<std::setw(col_width)<<"23"<<std::endl;
    std::cout<<std::setw(col_width)<<"Anusuya"<<std::setw(col_width)<<"Ghosal"<<std::setw(col_width)<<"22"<<std::endl;
    std::cout<<std::setw(col_width)<<"Mithu"<<std::setw(col_width)<<"Hensh"<<std::setw(col_width)<<"42"<<std::endl;
    std::cout<<std::setw(col_width)<<"Dipak"<<std::setw(col_width)<<"Hensh"<<std::setw(col_width)<<"44"<<std::endl;

    std::cout<<"****************************************"<<std::endl<<std::endl;

    std::cout<<"showpos"<<std::endl<<std::endl;

    int a{23};
    int b{-45};

    std::cout<<"a : "<<a<<std::endl;
    std::cout<<"b : "<<b<<std::endl;

    std::cout<<std::showpos;

    std::cout<<"pos_show : "<<a<<std::endl;
    std::cout<<"neg_show : "<<b<<std::endl<<std::endl;

    std::cout<<"noshowpos"<<std::endl<<std::endl;
    
    std::cout<<std::noshowpos;

    std::cout<<"pos_show : "<<a<<std::endl;
    std::cout<<"neg_show : "<<b<<std::endl<<std::endl;

    std::cout<<"****************************************"<<std::endl<<std::endl;

    int pos_int {77171};
    int neg_int {-1232};
    double double_num{211.432};

    std::cout<<"pos_int : "<<pos_int<<std::endl;
    std::cout<<"neg_int"<<neg_int<<std::endl;
    std::cout<<"double_num : "<<double_num<<std::endl<<std::endl;

    std::cout<<"pos_int"<<std::endl<<std::endl;

    std::cout<<"hex : "<<std::hex<<pos_int<<std::endl;
    std::cout<<"dec : "<<std::dec<<pos_int<<std::endl;
    std::cout<<"oct : "<<std::oct<<pos_int<<std::endl<<std::endl;

    std::cout<<"neg_int"<<std::endl<<std::endl;

    std::cout<<"hex : "<<std::hex<<neg_int<<std::endl;
    std::cout<<"dec : "<<std::dec<<neg_int<<std::endl;
    std::cout<<"oct : "<<std::oct<<neg_int<<std::endl<<std::endl;


    std::cout<<"double_num"<<std::endl<<std::endl;      // it does not work on floating point numbers

    std::cout<<"hex : "<<std::hex<<double_num<<std::endl;
    std::cout<<"dec : "<<std::dec<<double_num<<std::endl;
    std::cout<<"oct : "<<std::oct<<double_num<<std::endl;

    return 0;
}