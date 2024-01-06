#include <iostream>
#include <string>

using namespace std;

int main() {

    string niz1, niz2;

    cout << "Vnesi prvo besedo: ";
    getline(cin, niz1);

    cout << "Vnesi drugo besedo: ";
    getline(cin, niz2);

    if (niz1.length() != niz2.length()) {
        cout << "Besedi nista enake dolzine." << endl;
    }

    else {

        cout << "Besedi sta enake dolzine." << endl;

        if (niz1 == niz2) {
            cout << "Besedi sta enaki." << endl;
        }

        else {
            cout << "Besedi nista enaki." << endl;
        } 

    }

    return 0;
}