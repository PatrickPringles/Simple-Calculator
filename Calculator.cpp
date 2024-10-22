#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char choice;

    while(choice != '0')
    {
        cout << "---SIMPLE CALCULATOR---" << endl;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "Enter your preferred operator: (+, -, *, /, %, 0 if exit)" << endl;
        cin >> choice;

        switch (choice)
        {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 <<" = " << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '/':
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                break;
            case '%':
                cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
                break;
            case '0':
                cout << "Terminating program..." << endl;
                break;
            default:
                cout << "Syntax Error" << endl;
                break;
        }

        system("pause");
    }

    return 0;
}