#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num1, num2;
    char op;


    cout << "enter 1nd number: ";
    cin  >> num1;
    cout << "enter operator: ";
    cin  >> op;
    cout << "enter 2nd number: ";
    cin  >> num2;
    int result;
    if(op == '+'){
        result = num1 + num2;
    }
    else if(op == '-'){
        result = num1 - num2;
    }
    else if(op == '*'){
        result = num1 * num2;
    }
    else if(op == '/'){
        result = num1 / num2;
    }
    else {
        cout << "invavild opperator";
    }

    cout << result;
    return 0;
}
