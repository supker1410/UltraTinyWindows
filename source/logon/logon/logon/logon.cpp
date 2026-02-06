#include <iostream>
#include <string>
#include <functional>
#include <fstream>
#include <locale>


using namespace std;


int main()
{


    string parola;
	int secim;

    cout << "Create password: ";
    cin >> parola;

    hash<string> hasher;
    size_t hashedPassword = hasher(parola);
    ofstream dosya("C:\\pass\\hashed_pass.txt");
	cout << "successfully created password and we are ready to restart the system and after the restart you will be able to use your computer.\nType y when you are ready.";
	cin >> secim;
    switch (secim) {
        case 'y':
        system("shutdown /r /t 0");
		break;
    default:
        break;
    }

    if (!dosya) {
        cout << "Cant save your password.\n";
        return 1;
    }

    dosya << hashedPassword;
    dosya.close();
    return 0;
}