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


    // check character is blank or not

    // isblank is not working in this environment but there is a replacement which is isspace

    char message[]{"Hello , My name is Subhadip Hensh. Nice to meet you. How are you ?"};
    std::cout<<"Message : "<<message<<std::endl;

    size_t blank_count{};

    int size = sizeof(message)/sizeof(message[0]);
    std::cout<<size<<std::endl;
    for(size_t i{0}; i<size;i++){
        if(std::isspace(message[i])){
            std::cout<<"blank found at message["<<i<<"] "<<std::endl;
            blank_count++;
        }
    }
    std::cout<<"In total we found "<<blank_count<<" no of blanks in message."<<std::endl;

    std::cout<<std::endl<<"check this is blank or not : "<<static_cast<bool>(std::isspace(' '))<<std::endl;


    std::cout<<std::endl<<"***************************************"<<std::endl<<std::endl;

    // Upeercase and Lowercase

    char thought[]{"This C++ Programming language is one of the most used in the planet."};
    size_t uppercase_count{};
    size_t lowercase_count{};

    std::cout<<"Original String : "<<thought<<std::endl;

    for(auto characater : thought){
        if(std::islower(characater)){
            std::cout<<" "<<characater;
            lowercase_count++;
        }
    }
    std::cout<<std::endl;
    for(auto character : thought){
        if (std::isupper(character))
        {
            std::cout<<" "<<character;
            uppercase_count++;
        }
        
    }
    std::cout<<std::endl<<"Total uppercase found : "<<uppercase_count<<" ,and total lower case found : "<<lowercase_count<<std::endl;

    // check for digit or not

    std::cout<<std::endl<<"***************************************"<<std::endl<<std::endl;
    
    char message_new[]{"Hi my name is Subhadip Hensh. I'm 23 year old and my DOB is 31/10/2000."};
    std::cout<<"Original message : "<<message_new<<std::endl;

    unsigned int digit_count{};

    for(auto character:message_new){
        if(std::isdigit(character)){
            std::cout<<" "<<character;
            digit_count++;
        }
    }
    std::cout<<std::endl<<"Total no of digits count : "<<digit_count<<std::endl;

    std::cout<<std::endl<<"***************************************"<<std::endl<<std::endl;

    // Coverting lower to uppercase and vice-versa

    char original_str[]{"This is the Original Message"};
    char dest_str[sizeof(original_str)/sizeof(original_str[0])];

    size_t length = sizeof(original_str)/sizeof(original_str[0]);

    std::cout<<"Original String : "<<original_str<<std::endl;
    
    // Converting to lower to uppercase
    for(size_t i{0};i<length;i++){
        dest_str[i] = std::toupper(original_str[i]);
    }

    std::cout<<"Dest_str (UpperCase) : "<<dest_str<<std::endl;

    // Converting to uppercase to lowercase
    for(size_t i{0};i<length;i++){
        dest_str[i] = std::tolower(original_str[i]);
    }

    std::cout<<"Dest_str (LowerCase) : "<<dest_str<<std::endl;



    return 0;
}