#include<iostream>
int main(){
    int score[10];

    for(size_t i{0};i<10;i++){
        score[i] = i*10;
    }

    for(size_t i{0};i<10;i++){
        std::cout<<"Score["<<i<<"] : "<<score[i]<<std::endl;
    }
    std::cout<<std::endl;

    double salary[5]{23.3,54.7,43.4,12.8,32.2};
    for (size_t i{0}; i<5; i++)    {
        std::cout<<"salary["<<i<<"] : "<<salary[i]<<std::endl;
    }
    std::cout<<std::endl;

    size_t number[10]{12,34,43,23,4,55};
    for (size_t i{0}; i<10; i++)    {
        std::cout<<"number["<<i<<"] : "<<number[i]<<std::endl;
    }
    

    std::cout<<std::endl<<std::endl;

    //omit the size of array at the declaration

    int class_size[]{12,34,23,354,234,43,5,3};

    // will print this with a range based for loop
    for(auto value : class_size){
        std::cout<<"class_size [ ] : "<<value<<std::endl;
    }

    //sum up array
    std::cout<<std::endl<<std::endl;

    const int birds[]{27, 51, 14, 89, 33, 72, 45, 60, 98, 22};
    int sum=0;
    for(int element:birds){
        sum+=element;
    }

    std::cout<<"Sum of the array is : "<<sum<<std::endl;

    std::cout<<std::endl<<std::endl;
    

    int array[]{27, 51, 14, 89, 33, 72, 45, 60, 98, 22};

    // int Count{std::size(array)};    this line is only for C++17 before that to get the size of the array sizeof function is used
    
    std::cout<<"Size of array : "<<sizeof(array)<<std::endl;
    std::cout<<"Size of element in array : "<<sizeof(array[0])<<std::endl;
    
    int count{sizeof(array)/sizeof(array[0])};
    for(size_t i{0} ; i<count;i++){
        std::cout<<"Array ["<<i<<"] : "<<array[i]<<std::endl;
    }


    return 0;
}