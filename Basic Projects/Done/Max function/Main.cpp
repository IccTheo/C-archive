#include <iostream>

int max(int First_max, int Second_max){

    if(First_max > Second_max){
        return First_max;
    }else if (Second_max > First_max){
        return Second_max;
    }
}


int Main(){

    int first{};
    int second{};
    std::cout<<"Input a first number";
    std::cin>>first;
    std::cout<<"Input a first number";
    std::cin>>second;

    max(first, second);
    return 0;
}