#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "1- Write to a specific file path\n";
    cout << "2- Write to Desktop (written.txt)\n";
    cout << "Choose an option: ";

    int secenek;
    cin >> secenek;
    cin.ignore(); //  çok önemli

    string yol;
    string ya;

    // getenv_s ile Desktop yolu alma
    char* buffer = nullptr;
    size_t size = 0;

    getenv_s(&size, nullptr, 0, "USERPROFILE");
    buffer = new char[size];
    getenv_s(&size, buffer, size, "USERPROFILE");

    string desktop = string(buffer) + "\\Desktop\\written.txt";
    delete[] buffer;

    switch (secenek)
    {
    case 1:
        cout << "Enter file path: ";
        getline(cin, yol);

        cout << "You can start writing:\n";
        getline(cin, ya);

        {
            ofstream written(yol);
            written << ya;
        }
        break;

    case 2:
        cout << "You can start writing:\n";
        getline(cin, ya);

        {
            ofstream written(desktop);
            written << ya;
        }
        break;

    default:
        cout << "Invalid option.\n";
        break;
    }

    return 0;
}
