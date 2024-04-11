int max(int a , int b){
    if(a>b)
    return a;
    else
    return b;
}
int min(int a , int b){
    if(a<b)
    return a;
    else
    return b;
}


// to compiler multiple cpp files in a same binary executable file (.exe) you need to run the following code

// g++.exe -fdiagnostics-color=always -g -std=c++20 "E:\C++ course codes\function_across_multiple_file\main.cpp" "E:\C++ course codes\function_across_multiple_file\compare.cpp" -o "E:\C++ course codes\function_across_multiple_file\rooster.exe"



