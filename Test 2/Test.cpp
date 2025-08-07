#include <iostream>
#include <stdio.h>
#include <fcntl.h>
#include <io.h>

int main(){

    _setmode(_fileno(stdout),_O_U16TEXT);


    int N = 32 ;

    wprintf(L"\x2211 = %d",N);
    

    return 0;
}



