#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Kac sayi girmek istiyorsunuz? ";
    cin >> N;

    double sayilar[N];
    double toplam = 0;

    for(int i = 0; i < N; i++) {
        cout << i+1 << ". sayiyi giriniz: ";
        cin >> sayilar[i];
        toplam += sayilar[i];
    }

    double ortalama = toplam / N;
    cout << "Ortalama: " << ortalama << endl;

    cout << "Ortalamanin ustundeki sayilar: ";
    for(int i = 0; i < N; i++) {
        if(sayilar[i] > ortalama) {
            cout << sayilar[i] << " ";
        }
    }

    return 0;
} 