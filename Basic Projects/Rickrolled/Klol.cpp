#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    bool trap=PlaySound("Klol.wav",nullptr,SND_SYNC);


    system("pause");
    return 0;
}