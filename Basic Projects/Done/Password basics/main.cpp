#include <iostream>
#include <string>

int main(){

    std::string *Pass {new std::string {"_"}};
    //Top

    std::clog<<"Enter pass\n";
    std::cin>>*Pass;

    std::cout<<"The pass is "<<*Pass<<std::endl;

    if(Pass != nullptr && Pass != NULL){//Check if memory is true in the program
        delete Pass;
        Pass = nullptr;
        printf("No memory leaks have been ocureed");
    }else{
        printf("A memory leak have ocureed");
    }


    return 0;
}