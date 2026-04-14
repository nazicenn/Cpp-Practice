#include <iostream>
using namespace std;

int linearSearch(int dizi[], int boyut, int aranan) {
    for (int i = 0; i < boyut; i++) {
        if (dizi[i] == aranan) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int dizi[] = {3, 7, 1, 9, 5};
    int boyut = 5;
    int aranan;

    cout << "Aranacak sayiyi gir: ";
    cin >> aranan;

    int sonuc = linearSearch(dizi, boyut, aranan);

    if (sonuc != -1)
        cout << "Sayi bulundu! Index: " << sonuc;
    else
        cout << "Sayi bulunamadi.";

    return 0;
}
