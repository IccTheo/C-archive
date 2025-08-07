#include <iostream>
#include <cstring>

//version 1 alpha

void Censor_cursewords(char *wordcheck){
    char target[] {"Dragon"};
    char ResultText[25];

    int count{};
    while (wordcheck[count] != '\0'){
        if (std::strcmp(wordcheck,target) != 0){
            printf("%c",wordcheck[count]);
            count++;
        }else{
            for(size_t innercount = count; innercount < std::strlen(wordcheck); innercount++){

                wordcheck[count] = 'x';
                printf("%c",wordcheck[count]);
                count++;
            }
        }
    }
    printf("\n");
}

int main(){

    char Input[]{"Dragon"};
    std::cout<<"Input a word"<<std::endl;
    // std::cin>>Input;
    
    Censor_cursewords(Input);
    
    return 0;
}