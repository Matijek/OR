#include <iostream>
#include <string>

using namespace std;

int main() {

    string niz1, niz2;

    cout << "Vnesi prvi niz: ";
    getline(cin, niz1);

    cout << "Vnesi drugi niz: ";
    getline(cin, niz2);

    cout << "Dolzina prvega niza je: " << niz1.length() << ", kapaciteta pa: " << niz1.capacity() << endl;
    cout << "Dolzina drugega niza je: " << niz2.length() << ", kapaciteta pa: " << niz2.capacity() << endl;

    string niz3 = niz1 + niz2;

    cout << "Skupni niz je: " << niz3 << endl;

    cout << "Dolzina skupnega niza je: " << niz3.length() << ", kapaciteta pa: " << niz3.capacity() << endl;

    niz3.erase();


    cout << "Dolzina skupnega niza po erase() je: " << niz3.length() << ", kapaciteta pa: " << niz3.capacity() << endl;


    return 0;
}