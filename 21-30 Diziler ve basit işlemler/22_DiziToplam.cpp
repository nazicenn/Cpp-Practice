#include <iostream>
using namespace std; 
int main () {

    int dizi[5];
    int toplam=0; 

    for (int i=0; i<5; i++)
    {
        cout << i+1 << ". sayiyi giriniz" << endl;
        cin >> dizi[i];   

        toplam += dizi[i];
    }
    cout << "sayilarin toplami : " << toplam;
}