#include <iostream>
#include <cmath>
#include <iomanip>

class Aathrimithic{
    private:
        // Take note that 0 degree Celsius = 32 deg fahrenheight
    public:
        double Celcius_to_Fahrenheit(double Celcius){
            return (Celcius*9/5)+32 ;
        }
        double Fahrenheit_to_Celcius(double Fahrenheit){
            return (Fahrenheit-32)*5/9 ;
        }
};


int main(){

    int Type;
    bool restrt;
    std::string choice[] = {"Convert Celcius to Fahrenheit","Convert Fahrenheit to Celcius"};
    
    //Choose your choice
    std::clog<<"Choose your choice: \n";
    std::clog<<"[1] Convert Celcius to Fahrenheit\n";
    std::clog<<"[2] Convert Fahrenheit to Celcius\n";
    
        double degree_Fah; 
        double degree_Celcius;   
        std::cin>>Type;
        Aathrimithic DO;    //Class identification

        //Check
        if (Type == 1||"celcius"||"Celcius"&& Type != 1){//Degree to fah
            /* Function insrted here*/
            std::cout<<"Converting Celcius to Fahrenheit\n";
            std::cin>>degree_Celcius;
            double Celcius_to_Fahrenheit_result = DO.Celcius_to_Fahrenheit(degree_Celcius);
            std::clog<<"The result is "<< Celcius_to_Fahrenheit_result<<" Degree Fahrenheit"<<std::endl;

        }else if(Type == 2||"fahrenheit"||"Fahrenheit"&& Type != 2){//Fah to degree
            /* Function insrted here*/
            std::cout<<"Converting Fahrenheit to Celcius\n";
            std::cin>>degree_Fah;
            double Fahrenheit_to_Celcius_result = DO.Fahrenheit_to_Celcius(degree_Fah);
            std::clog<<"The result is "<< Fahrenheit_to_Celcius_result<<" Degree Celcius"<<std::endl;

        }else{
            std::cout<<"Please refer to the following avalable\n";
            std::clog<<"[1] Convert Celcius to Fahrenheit";
            std::clog<<"[2] Convert Fahrenheit to Celcius";
        }
 
    

    return 0;
}