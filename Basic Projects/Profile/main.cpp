#include <iostream>
#include<string>
#include<memory>

struct Profile{
    std::string name;
    int age;
};

int main(){

    auto person1 = std::unique_ptr<Profile>(new Profile{"Bob",41});
    return 0;
}