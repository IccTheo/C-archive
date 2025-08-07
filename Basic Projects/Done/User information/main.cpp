#include <iostream>
#include <stdio.h>

// typedef is a reserved keyword that gives an existing datatype

typedef struct{

    char name[18]{};//name
    char last_name[18]{};//name
    char password[64]{};//Pass 
    int id{};

}profile;


int main(){

    profile Minamai = {"Minami","Kaido","kjndgfondgrojn",4359873986796043};


    return 0;
}