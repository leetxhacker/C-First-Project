#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char optr;
    double num1, num2, result;
    
    cout << "Chooose optrerator Type:: + | - | * | / | ^ | Sq.Root: =>";
    cin >> optr;
    
    if (optr == '+' || optr == '-' || optr == '*' || optr == '/') {
        cout << "Enter two numbers by using spaces: ";
        cin >> num1 >> num2;
        if (optr == '+') {
            result = num1 + num2;
        } else if (optr == '-') {
            result = num1 - num2;
        } else if (optr == '*') {
            result = num1 * num2;
        } else if (optr == '/') {
            if (num2 == 0) {
                cout << "Dumb, Can't Divide By 0 :(" << endl;
                return 1;
            }
            result = num1 / num2;
        }
        cout << num1 << " " << optr << " " << num2 << " = " << result << endl;
    } else if (optr == '^') {
        cout << "Enter a number and its exponent: ";
        cin >> num1 >> num2;
        result = pow(num1, num2);
        cout << num1 << " ^ " << num2 << " = " << result << endl;
    } else if (optr == 'sqrt') {
        cout << "Enter a number: ";
        cin >> num1;
        if (num1 < 0) {
            cout << "Error: cannot take square root of negative number" << endl;
            return 1;
        }
        result = sqrt(num1);
        cout << "sqrt(" << num1 << ") = " << result << endl;
    } else {
        cout << "Error: invalid optrerator" << endl;
        return 1;
    }
    
    return 0;
}
