#include<iostream>

const int pen{10};
const int eraser{20};
const int circle{30};
const int rectangle{40};
const int ellipse{50};

int main(){
    int number1 {45};
    int number2 {50};

    bool result = (number1<number2);  // Expression yielding the condition
    std::cout<<std::boolalpha;
    std::cout<<result<<std::endl;

    if (result==true)
    {
        std::cout<<number1<<" is lesser than "<<number2<<std::endl;
    }
    else if(!(result==true)){
        std::cout<<number1<<" is not lesser than "<<number2<<std::endl;
    }

    std::cout<<std::endl<<"***********Traffic Signal***********"<<std::endl<<std::endl;
    // traffic signal

    bool red {false};
    bool green {true};
    bool yellow {false};
    bool police_indication {true};

    if (red)
    {
        std::cout<<"Wait..."<<std::endl;
    }
    else if(yellow){
        std::cout<<"Slow Down"<<std::endl;
    }
    else if(green){
        if (!police_indication)     // police indication true means STOP
        {
            std::cout<<"GO"<<std::endl;
        }
        else{
            std::cout<<"STOP"<<std::endl;
        }
        
    }

    // Another
    std::cout<<std::endl<<"******************************************************"<<std::endl<<std::endl;
    int tool{circle};

    if (tool==pen){
        std::cout<<"Tools is set to pen"<<std::endl;
    }
    else if (tool==eraser){
        std::cout<<"Tools is set to eraser"<<std::endl;
    }
    else if (tool==circle)
    {
        std::cout<<"Tool is set ot Circle"<<std::endl;
    }
    else if(tool==rectangle){
        std::cout<<"Tool is set to Rectangle"<<std::endl;
    }
    else if(tool==ellipse){
        std::cout<<"Tool is set to Ellipse"<<std::endl;
    }
    
    return 0;

}