#include <iostream>
#include "Calculator.h"

using namespace std;

int main(){

    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Calculator App" << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;

    Calculator c;
    bool active = true; // create a bool to enable quitting to console
    while(active){
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0){
            // handle division by 0 error
            cout << "Division by 0 exception" << endl;
            continue;
        } else {
            result = c.Calculate(x, oper, y);
        }
        cout << "Result is: " << result << endl;
    }

    return 0;
}