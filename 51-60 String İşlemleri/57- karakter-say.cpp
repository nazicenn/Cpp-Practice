#include <iostream>
#include <string>
using namespace std;

int main() {
    string metin;
    char harf;
    int sayac = 0;

    cout << "Metni gir: ";
    getline(cin, metin);

    cout << "Aranacak karakteri gir: ";
    cin >> harf;

    for (int i = 0; i < metin.length(); i++) {
        if (metin[i] == harf) {
            sayac++;
        }
    }

    cout << "Bu karakter " << sayac << " kez geciyor." << endl;

    return 0;
}
