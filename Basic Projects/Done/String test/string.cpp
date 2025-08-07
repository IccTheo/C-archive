#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char inputed_text[] {"_"};
    std::clog << "input a text on the console\n";

    scanf("%s",inputed_text ); //Input

    printf("%s Originat text",inputed_text);

    const char *receved_string = inputed_text;

    char target_word[] = "stupid";

    int iterations{};
    
    while(receved_string = std::strncmp(receved_string,target_word) != nullptr ){

        receved_string++;
        iterations++;
        for (size_t asterisk = receved_string; ){
            
        }   
    }


    return 0;
}