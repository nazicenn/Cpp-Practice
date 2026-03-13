#include <iostream>
using namespace std; 
int main () {

    double dizi[5];
    double toplam=0; 

    for (int i=0; i<5; i++)
    {
        cout << i+1 << ". sayiyi giriniz" << endl;
        cin >> dizi[i];   

        toplam += dizi[i];
    }

    double ortalama = toplam/5;
    cout << "sayilarin ortalamasi : " << ortalama;
}