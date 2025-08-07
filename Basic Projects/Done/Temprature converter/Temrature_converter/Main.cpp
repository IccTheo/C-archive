#include <iostream>
#include <iomanip>

using namespace std;

// Take note that 0 degree Celsius = 32 deg fahrenheight

double deg_to_Fah1(double C){

    return (C*9/5)+32 ;
}

double Fah_to_deg2(double F){

    return (F-32)*5/9;
}

int main(){

    int Type{};
    bool restart{};
    string choice[] ={};
    std::cout<<"[1] Convert Degrees to Fahrenheit"<<endl;
    std::cout<<"[2] Convert Fahrenheit to Degrees"<<endl;
    cin>>Type;


    if (Type == 1||"celcius"||"Celcius"){     

        clog<<"Converting Degrees to Fahrenheit\n";
        double A1{};
        clog<< "Type the number in DEGREE Celcius: ";
        cin>>A1;
        double Fahrenheit_result = deg_to_Fah1(A1);//degree Celcius
        setprecision(4);
        std::cout<<Fahrenheit_result <<" degree Ferenhight"<<endl; 

    }else if(Type == 2||"fahrenheit"||"Fahrenheit"){

        std::cout<<"Converting Fahrenheit to Degrees";
        double A2{};
        clog<< "Type the number in DEGREE Ferenhight ";
        cin>>A2;
        double Celcius_result = Fah_to_deg2(A2);//degree Ferenhight
        setprecision(4);
        std::cout<<Celcius_result <<" degree Celcius\n";

    }
    std::cout<<"done";      
    return 0;
}