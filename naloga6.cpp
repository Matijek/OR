#include <iostream>
#include <string>

using namespace std;

int main() {

    string stavek;

    cout << "Vnesi stavek: ";
    getline(cin, stavek);

    int poz = stavek.find(' ');

    while (poz != std::string::npos) {
        stavek.replace(poz, 1, "[PRESLEDEK]");
        poz = stavek.find(' ');
    }


    cout << stavek << endl;

    return 0;
}