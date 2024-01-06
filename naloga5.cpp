#include <iostream>
#include <string>

using namespace std;

int main() {

    string stavek;

    int soglasnik = 0;

    cout << "Napisi stavek: ";
    getline(cin, stavek);

    for (int i = 0; i < stavek.length(); i++) {
        if (!(stavek[i] == 'a' || stavek[i] == 'e' || stavek[i] == 'i' || stavek[i] == 'o' || stavek[i] == 'u' || stavek[i] == 'A' || stavek[i] == 'E' ||
        stavek[i] == 'I' || stavek[i] == 'O' || stavek[i] == 'U') && isalpha(stavek[i])) {
            soglasnik++;
        }
    }

    cout << "Stevilo soglasnikov je: " << soglasnik << endl;

    return 0;
}