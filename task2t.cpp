#include <iostream>
using namespace std;

int main() {
    char op,y,n;
    double num1, num2, res;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

	switch (op) {
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                res = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed.";
                return 1;
            }
            break;
        default:
            cout << "Invalid operator!";
            return 1;
    }

    cout << "Result: " << res << endl;
    return 0;
}

