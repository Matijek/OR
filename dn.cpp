#include <iostream>
#include <string>

using namespace std;

int main() {

    string stavek;

    cout << "Vnesi stavek: ";
    getline(cin, stavek);

    int poz = stavek.find(' ');

    string menjava = " [PRESLEDEK] ";

    while (poz != std::string::npos) {
        stavek.replace(poz, 1, menjava);
        poz = stavek.find(' ', poz + menjava.length());
    }


    cout << stavek << endl;

    return 0;
}