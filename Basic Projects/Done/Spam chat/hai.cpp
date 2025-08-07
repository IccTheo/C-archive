#include <iostream>


int main(){


    std::cout<<"set limit\n";
    int setlimit{};
    std::cin>>setlimit;

    std::cout<<"type soinething\n";
    std::string C{};
    std::cin>>C;

    for(int times {0}; times < setlimit;times++){
        std::cout<<C<<std::endl;
    }
    std::cout<<"end of loop";
    return 0;
}