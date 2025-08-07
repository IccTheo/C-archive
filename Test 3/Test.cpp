#include <string>
#include <string_view>
#include <iostream>

struct Date{
    int month;
    int day;
    int year;
};


int main(){

    Date *current = new Date{1,27,2023};
    std::printf("%i",*current);




    delete current;
    printf("end");
    return 0;
}
