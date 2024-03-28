#include<iostream>
// #include<string>
#include<cctype>

int main(){
    // check the character is alphanumeric
    std::cout<<std::boolalpha;

    // static casting to get true or false result
    std::cout<<"C is alphanumeric : "<<static_cast<bool>(std::isalnum('C'))<<std::endl;
    std::cout<<"^ is alphanumeric : "<<static_cast<bool>(std::isalnum('^'))<<std::endl;

    char input_char{'*'};

    if(std::isalnum(input_char)){
        std::cout<<input_char<<" is alphanumeric."<<std::endl;
    }else{
        std::cout<<input_char<<" is not alphanumeric."<<std::endl;
    }

    // check character is alphabetic

    std::cout<<std::endl<<"***************************************"<<std::endl<<std::endl;

    std::cout<<"C is alphabet : "<<static_cast<bool>(std::isalpha('C'))<<std::endl;
    std::cout<<"C is alphabet : "<<std::isalpha('C')<<std::endl;

    std::cout<<"7 is alphabet : "<<static_cast<bool>(std::isalpha('7'))<<std::endl;
    std::cout<<"7 is alphabet : "<<std::isalpha('7')<<std::endl;

    std::cout<<"* is alphabet : "<<static_cast<bool>(std::isalpha('*'))<<std::endl;
    std::cout<<"* is alphabet : "<<std::isalpha('*')<<std::endl;

    std::cout<<"a is alphabet : "<<static_cast<bool>(std::isalpha('a'))<<std::endl;
    std::cout<<"a is alphabet : "<<std::isalpha('a')<<std::endl;        // this will give the output not 1 but more that one and it means true

    char input_char2{'e'};
    if(std::isalpha(input_char2)){
        std::cout<<input_char2<<" is alphabet."<<std::endl;
    }else{
        std::cout<<input_char2<<" is not alphabet."<<std::endl;
    }
    std::cout<<std::endl<<"***************************************"<<std::endl<<std::endl;




    return 0;
}