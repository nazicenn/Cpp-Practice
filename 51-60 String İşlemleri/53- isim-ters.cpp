#include <iostream>
#include <string>
using namespace std;

int main() {
    string isim;

    cout << "Lutfen isminizi giriniz: ";
    getline(cin, isim);

    cout << "Tersi: ";

    for (int i = isim.length() - 1; i >= 0; i--) {
        cout << isim[i];
    }

    cout << endl;

    return 0;
}
