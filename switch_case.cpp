#include<iostream>

const int pen{10};
const int eraser{20};
const int circle{30};
const int rectangle{40};
const int ellipse{50};


int main(){
    int tool{circle};

    switch (tool)
    {
        case pen:{
            std::cout<<"Tool is set to Pen"<<std::endl;
        }
            break;
        case eraser:{
            std::cout<<"Tool is set to Eraser"<<std::endl;
        }    
            break;
        case circle:{
            std::cout<<"Tool is set to Circle"<<std::endl;
        }    
            break;
        case rectangle:{
        std::cout<<"Tool is set to Rectangle"<<std::endl;
        }
            break;
        case ellipse:{
            std::cout<<"Tool is set to Ellipse"<<std::endl;
        }
            break;
        default:{
            std::cout<<"Not an available Tool..."<<std::endl;
        }
            break;
    }
    return 0;
}