#include <iostream>
using namespace std;

int toplam(int dizi[], int boyut) {
    int sonuc = 0;
    for (int i = 0; i < boyut; i++) {
        sonuc += dizi[i];
    }
    return sonuc;
}

int main() {
    int n;

    cout << "Dizinin boyutunu girin: ";
    cin >> n;

    int dizi[n];

    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". sayiyi girin: ";
        cin >> dizi[i];
    }

    int sonuc = toplam(dizi, n);

    cout << "Dizideki sayıların toplamı: " << sonuc << endl;

    return 0;
}
