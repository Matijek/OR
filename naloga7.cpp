#include <iostream>
#include <string>

using namespace std;

int main() {

    string niz;

    cout << "Vnesi stavek: ";
    getline(cin, niz);

    cout << "Obrat tega stavka je:" << endl;

    string obrat = niz;

    for (int i = 0; i < niz.length(); i++) {

        obrat[i] = niz[niz.length() - i - 1];
    }

    cout << obrat << endl;

    return 0;
}