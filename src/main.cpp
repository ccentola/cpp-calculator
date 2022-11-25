#include <iostream>

using namespace std;

int calculate(int firstNum, char op, int secondNum){

    int result;

    if(op == '+'){
        result = firstNum + secondNum;
    } else if (op == '-'){
        result = firstNum - secondNum;
    } else if (op == '*'){
        result = firstNum * secondNum;
    } else if (op == '/'){
        result = firstNum / secondNum;
    } else {
        cout << "Invalid operator" << endl;
    }

    return result;
    
}

int main(){

    int firstNum;
    int secondNum;
    char op;


    cout << "Enter a number: ";
    cin >> firstNum;
    
    cout << "Enter an operator: ";
    cin >> op;

    cout << "Enter a number: ";
    cin >> secondNum;

    int result = calculate(firstNum, op, secondNum);
    cout << result << endl;
    return 0;
}