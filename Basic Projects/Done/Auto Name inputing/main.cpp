#include <iostream>
#include <cstring>
#include <cctype>
#include <bits/stdc++.h>

std::string AutoNameing(char* Given1, char* Given2){

    std::string Firstname_Name = "";                                //Empty Variables waiting to be returned
    std::string Lastname_Name = "";

    for (size_t index = 0; index < strlen(Given1); index++){
        //Finds the first haracter of the index then make it capital
        if(Given1[0] != std::islower(Given1[0])){
            *Given1 = std::toupper(Given1[0]);

        }else{
            
            *Given1 = std::tolower(Given1[index]);
            Firstname_Name = std::tolower(Given1[index]);  
        }
        Firstname_Name = Firstname_Name + Given1[index];             
    }

    for(size_t index = 0; index < std::strlen(Given2); index++){
        //Finds the first haracter of the index then make it capital    
        if(Given1[0] != std::islower(Given2[0])){
            *Given2 = std::toupper(Given2[0]);

        }else{

            *Given2 = std::tolower(Given2[index]);
            Lastname_Name = std::tolower(Given2[index]);
        }
        Lastname_Name = Lastname_Name + Given2[index];
    }
    std::string Fullname = Firstname_Name +" "+ Lastname_Name;        //Merges the First Name and the last name
    return Fullname;
}


int main(){

    //A variable that has a limit of 15 characters
    char First_Name[15]={};
    char Last_Name[15]={};

    std::cout<<"What is your First name\n";
    std::cin>>First_Name;
    std::cout<<"What is your Last name\n";
    std::cin>>Last_Name;


    std::string Printname = AutoNameing(First_Name,Last_Name);
    std::cout<<Printname<<std::endl;

    return 0;
}