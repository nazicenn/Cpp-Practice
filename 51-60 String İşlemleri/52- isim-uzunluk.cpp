#include <iostream>
#include <string>
using namespace std;

int main() {
    string isim;

    cout << "Lutfen isminizi giriniz: ";
    getline(cin, isim);

    int karakterSayisi = isim.length();

    cout << "Isminiz: " << isim << endl;
    cout << "Karakter sayisi: " << karakterSayisi << endl;

    return 0;
}
