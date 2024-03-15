#include<iostream>

int main(){
    int arr[]{1,2,3,4,5};
    // Read beyond bound : will print garbage value or crash the program
    std::cout<<"arr[10] : "<<arr[10]<<std::endl;
    //program will crash here line(8-10)
    arr[104324234] = 1000;
    std::cout<<"arr[1104324234] : "<<arr[104324234];
    std::cout<<"program ended..."<<std::endl;
    return 0;
}