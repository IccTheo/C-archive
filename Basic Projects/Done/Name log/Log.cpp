#include <iostream>
#include <string>
int main(){

    std::string First_Name, Last_name;

    std::cout<<"what is your Name?\n";                       //output

    std::cin>> First_Name >> Last_name;                      //input

    std::clog<<"Welcome "<< First_Name <<" "<< Last_name;    //log

    /*
    std::getline(std::cin,First_Name,Last_name);

    std::clog<< "Welcome" << First_Name << Last_name <<std::endl;
    */
    return 0;
}