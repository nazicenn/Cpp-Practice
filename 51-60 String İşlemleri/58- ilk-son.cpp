#include <iostream>
#include <string>
using namespace std;

int main() {
    string metin;

    cout << "Metni gir: ";
    getline(cin, metin);

    if (metin.length() > 0) {
        cout << "Ilk karakter: " << metin[0] << endl;
        cout << "Son karakter: " << metin[metin.length() - 1] << endl;
    } else {
        cout << "Bos metin girdin!" << endl;
    }

    return 0;
}
