#include <iostream>
#include <string>
using namespace std;

int main() {
    string isim;

    cout << "Lutfen isminizi giriniz: ";
    getline(cin, isim);

    cout << "Girdiginiz isim: " << isim << endl;

    return 0;
}
