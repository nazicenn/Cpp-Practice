#include <iostream>
using namespace std;

double ortalama(int dizi[], int boyut) {
    int toplam = 0;
    for (int i = 0; i < boyut; i++) {
        toplam += dizi[i];
    }
    return (double)toplam / boyut;
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

    double sonuc = ortalama(dizi, n);

    cout << "Dizideki sayıların ortalaması: " << sonuc << endl;

    return 0;
}
