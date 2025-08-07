#include <iostream>
#include <unistd.h>
#include <windows.h>
#include <time.h>

int main(){

    size_t seconds;
    size_t minutes;
    size_t hours;
    bool check = false;

    std::cout <<"Input how many Seconds?\n";
    std::cin>>seconds;
    if(seconds >= 61){
        
    }
    std::cout <<"Input how many Minutes\n";
    std::cin>>minutes;
    if(minutes > 61){

    }
    std::cout <<"Input how many Hours\n";
    std::cin>>hours;
    if(hours >=25 ){
        return 1;
    }

    if(seconds > 60){///Check
        std::clog<<"You pased the limit of seconds the minimmum is 60";
        int ConvertToMin = seconds/60;
        ConvertToMin + hours;
    }else if(minutes > 60){
        int ConvertToHrs = hours/60;
        ConvertToHrs + hours;
    }else if(hours > 24){
        std::clog<<"You pased the limit of hours the minimmum is 24";
    }

    while(seconds >=0){//seconds
        system("cls");
        std::cout<<"Time remaining\n"<<hours<<" : "<<minutes<<" : "<<seconds<<std::endl;
        Sleep(1000);
        seconds--;
        if (seconds == 0 && minutes > 0){
        minutes--;
        seconds = 60;
        }else if(seconds == 0 && minutes == 0 && hours !=0 ){
        hours--;
        minutes = 59;
        seconds = 60;
        }

        if(seconds<= 0){
                system("cls");
                std::printf("Time limit has been reatched\n");
                break;
            }
        }
    std::cout<<"end";

    return 0;
}

