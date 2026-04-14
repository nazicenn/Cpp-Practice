#include <iostream>
using namespace std;

int main() {
    int dizi[5];
    int toplam = 0;

    cout << "5 eleman gir:\n";

    for (int i = 0; i < 5; i++) {
        cin >> dizi[i];
    }

    for (int i = 0; i < 5; i++) {
        if (dizi[i] > 0) {
            toplam += dizi[i];
        }
    }

    cout << "Pozitif sayilarin toplami: " << toplam;

    return 0;
}
