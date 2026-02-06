#include <iostream>
#include <fstream>
#include <string>
#include <functional>

using namespace std;

int main() {
    
   
    string inputPass;
    size_t savedHash;

    ifstream file("C:/pass/hashed_pass.txt");
    if (!file) {
        cout << "An error occured please look at our github page.\n";
        return 1;
    }

    file >> savedHash;
    file.close();

    cout << "Enter password: ";
    cin >> inputPass;

    hash<string> hasher;
    size_t inputHash = hasher(inputPass);

    if (inputHash == savedHash)
        cout << "Logon successful\n";
    else
        cout << "Wrong password\n";
}
