#include <iostream>
#include <string_view>
#include <ostream>
#include <cctype>
//typedef //name

namespace standard = std;

class Console{

    Console() = default;
    Console(standard::string_view textin);
    ~Console();

    int log();
};


