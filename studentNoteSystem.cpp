#include <iostream>
using namespace std;

int main() {
    int ogrenciSayisi;
    double vizeToplam = 0;
    double finalToplam = 0;

    cout << "ogrenci sayisini giriniz : ";
    cin >> ogrenciSayisi;

    if (ogrenciSayisi > 30 || ogrenciSayisi < 0) {
        cout << "sınıf 0-30 araliginda olmalidir! ";
        cin >> ogrenciSayisi;
    } else {
        cout << "program baslatildi" << endl;
    }

    int vize[30];
    int final[30];

    for (int i = 0; i < ogrenciSayisi; i++) {
        cout << i + 1 << ". ogrencinin vize notunu gir : ";
        cin >> vize[i];
        vizeToplam += vize[i];
    }

    for (int j = 0; j < ogrenciSayisi; j++) {
        cout << j + 1 << ". ogrencinin final notunu gir : ";
        cin >> final[j];
        finalToplam += final[j];
    }

    double vizeOrtalama = vizeToplam / ogrenciSayisi;
    double finalOrtalama = finalToplam / ogrenciSayisi;

    double genelOrtalama = (vizeOrtalama + finalOrtalama) / 2;

    double notlarToplami[30];

    for (int k = 0; k < ogrenciSayisi; k++) {
        notlarToplami[k] = (vize[k] + final[k]) / 2.0; // önemli düzeltme
    }

    for (int b = 0; b < ogrenciSayisi; b++) {
        cout << b + 1 << ". ogrenci ortalamasi : " << notlarToplami[b] << endl;

        if (notlarToplami[b] <= 50) {
            cout << b + 1 << ". ogrenci kaldi" << endl;
        } else {
            cout << b + 1 << ". ogrenci gecti" << endl;
        }
    }

    cout << "sinifin vize ortalamasi : " << vizeOrtalama << endl;
    cout << "sinifin final ortalamasi : " << finalOrtalama << endl;
    cout << "sinifin genel ortalamasi : " << genelOrtalama << endl;

    return 0;
}
