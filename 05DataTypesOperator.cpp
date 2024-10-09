#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "***********************************************\n";
    cout << "CALCULATOR\n";
    cout << "***********************************************\n";

    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter Second Number: ";
    cin >> num2;

    double result;
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}
