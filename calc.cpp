#include <iostream>
using namespace std;


float add(float a, float b) {
    return a + b;
}
float sub(float a, float b) {
    return a - b;
}

float multi(float a, float b) {
    return a * b;
}

float dive(float a, float b) {
    if (b == 0) {
    cout << "нельзя делить на 0";
        
    }
    return a / b;
}

int main() {
    float num1, num2, result;
    char operation;
    cout << "первое число: ";
    cin >> num1;
    cout << "второе число: ";
    cin >> num2;
    cout << "+, -, *, /: ";
    cin >> operation;
    switch (operation) {
        case '+':
            result = add(num1, num2);
            cout << "Результат: " << result << endl;
            break;
        case '-':
            result = sub(num1, num2);
            cout << "Результат: " << result << endl;
            break;
        case '*':
            result = multi(num1, num2);
            cout << "Результат: " << result << endl;
            break;
        case '/':
            try {
                result = dive(num1, num2);
                cout << "Результат: " << result << endl;
            } catch (const char* msg) {
                cout << msg << endl;
            }
            break;
    }

    return 0;
}
