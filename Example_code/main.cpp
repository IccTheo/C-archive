//header files are inserted here 
#include <iostream> //C++ standard library
#include <stdio.h>  //C standard library
 

struct Me{//Data structure via class

    int age = 17;               
    char name[7] = "John";      //every variables in C/C++ must have a data type 
    int grade = 10;
    char section[7] = "Wisdom";
    //these variables are in public scope
};

/*Return type
 |                                                                                                                                                                                          */
int main(){//The main funciton

    Me stats;   //Can accsess the class

    std::string schoolname = "St John Paul Academy";    //declare string variable

    std::cout<<"Hi I'm John I study at "<<schoolname<<std::endl;                //C++ standard output
    printf("My grade and section is now %d %s!\n",stats.grade,stats.section);   //C standard ouput


    return 0;   //Every function must have a return type exept a void
}