#include <iostream>
#include <string>

using namespace std;

int main() {

    string stavek, niz_samo, niz_so;

    cout << "Vnesi niz: ";
    getline(cin, stavek);

    
    int isamo = 0;
    int iso = 0;

    for (int i = 0; i < stavek.length(); i++) {
        if ((stavek[i] == 'a' || stavek[i] == 'e' || stavek[i] == 'i' || stavek[i] == 'o' || stavek[i] == 'u' || stavek[i] == 'A' || stavek[i] == 'E' ||
        stavek[i] == 'I' || stavek[i] == 'O' || stavek[i] == 'U') && isalpha(stavek[i]) ) {
            niz_samo[isamo] = stavek[i];
            isamo++;
        }

        if(!(stavek[i] == 'a' || stavek[i] == 'e' || stavek[i] == 'i' || stavek[i] == 'o' || stavek[i] == 'u' || stavek[i] == 'A' || stavek[i] == 'E' ||
        stavek[i] == 'I' || stavek[i] == 'O' || stavek[i] == 'U') && isalpha(stavek[i]) ) {
            niz_so[iso] = stavek[i];
            iso++;
        }

        
    }

    cout << "Samoglasniki: ";

    for (int i = 0; i < isamo - 1; i++) {
        cout << niz_samo[i] << ',';
    }
    cout << niz_samo[isamo - 1];

    cout << endl;

    cout << "Soglasniki: ";

    for (int i = 0; i < iso - 1; i++) {
        cout << niz_so[i] << ',';
    }
    cout << niz_so[iso - 1] << endl;

    return 0;
}