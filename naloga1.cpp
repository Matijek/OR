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
        cout << "Besedi nista enaki." << endl;
    }

    else {

        bool enaki = true;

        for (int i = 0; i < niz1.length(); i++) {

            if(niz1[i] != niz2[i]) {
                enaki = false;
                break;
            }
        }

        if (enaki) {
            cout << "Besedi sta enaki." << endl;
        }

        else {
            cout << "Besedi nista enaki." << endl;
        }
    }

    return 0;
}