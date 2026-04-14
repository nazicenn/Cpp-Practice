#include <iostream>
using namespace std;

int main() {
    int dizi[] = {4, 7, 1, 9, 3};
    int boyut = 5;

    int toplam = 0;

    for (int i = 0; i < boyut; i++) {
        toplam += dizi[i];
    }

    double ortalama = (double)toplam / boyut;

    cout << "Ortalama: " << ortalama;

    return 0;
}
