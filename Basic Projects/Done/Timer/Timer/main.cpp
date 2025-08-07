#include <iostream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main(){
/*
hrs = 3600 seconds
min = 60 seconds

*/

    int hr=0,min=0,sec=0;

    cout<<"enter a time";
    cin>>sec;


    while(sec >= 0){
        system("cls");
         cout<<"\t---------------\n";
         cout<<"\t   "<<hr<<" : " <<min<<" : "<<sec<<endl;
         cout<<"\t---------------\n";
         sec--;
         if(sec == 60){
             min++;
             sec=0;
             if(min == 60){
                 hr++;
                 min=0;
                 if(hr ==60){
                    hr=0;
                }
            }
        }
        sleep(1);
     if(sec <= 0 && !sec > 0 ){

        cout<<"TIME'S UP!";
        break;
        }
    }


    return 0;
}
