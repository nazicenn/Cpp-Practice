#include <iostream>
using namespace std;

int tekrarSayisi(int dizi[], int boyut, int aranan) {
    int sayac = 0;

    for (int i = 0; i < boyut; i++) {
        if (dizi[i] == aranan) {
            sayac++;
        }
    }

    return sayac;
}

int main() {
    int dizi[] = {2, 5, 3, 5, 7, 5, 1};
    int boyut = 7;
    int aranan;

    cout << "Hangi sayiyi ariyorsun: ";
    cin >> aranan;

    int sonuc = tekrarSayisi(dizi, boyut, aranan);

    cout << "Bu sayi dizide " << sonuc << " kere geciyor.";

    return 0;
}
