#include <iostream>
using namespace std;

int main()
{
    char choice;

    do {
        double fn, sn, re;
        char op;

        cout << "\nUse + to add, - to subtract, * to multiply, / to divide\n";

        cout << "Enter your first number: ";
        cin >> fn;

        cout << "Enter the operator: ";
        cin >> op;

        cout << "Enter the second number: ";
        cin >> sn;

        if (op == '+')
            re = fn + sn;
        else if (op == '-')
            re = fn - sn;
        else if (op == '*')
            re = fn * sn;
        else if (op == '/') {
            if (sn == 0) {
                cout << "Error: Division by zero!\n";
            }
            else {
                re = fn / sn;
            }
        }
        else {
            cout << "Invalid operator!\n";
        }
        cout << "Result: " << re << endl;

        cout << "\nDo you want to calculate again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye!";
    return 0;
}