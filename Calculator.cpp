#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char choice;

    cout << "---SIMPLE CALCULATOR---" << endl;
    cout << "Created by Patrick F. Mendoza" << endl;

    while (choice != '0')
    {
        cout << "Enter your preferred operator: (+, -, *, /, %, 0 if exit)" << endl;
        cin >> choice;
        
        if (choice == '0')
        {
            cout << "Thank you for using my program. Terminating..." << endl;
            break;
        }

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

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
            default:
                cout << "Syntax Error" << endl;
                break;
        }
    }

    return 0;
}