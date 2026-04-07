#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Bir cumle giriniz: ";
    getline(cin, str);

    int boslukSayisi = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            boslukSayisi++;
        }
    }

    cout << "Bosluk sayisi: " << boslukSayisi;

    return 0;
}
