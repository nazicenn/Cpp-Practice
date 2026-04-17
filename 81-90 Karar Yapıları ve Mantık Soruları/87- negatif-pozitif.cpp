#include <iostream>
using namespace std;

int main() {
    int sayi;

    cout << "Bir sayi gir: ";
    cin >> sayi;

    if (sayi > 0)
        cout << "Pozitif";
    else if (sayi < 0)
        cout << "Negatif";
    else
        cout << "Sifir";

    return 0;
}
