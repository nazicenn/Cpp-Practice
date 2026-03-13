#include <iostream>
using namespace std; 
int main () {
    int dizi[5];
    int toplam=0;
    float ortalama;
    for (int i=0; i<5; i++)
    {
        cout << i+1 << ". degeri giriniz : ";
        cin >> dizi[i]; 
    }

    for (int j=0; j<5; j++)
    {
        toplam += dizi[j];
    }
    ortalama = toplam/5;
    
    cout << "sayilarin toplami :" << toplam << endl; 
    cout << "sayilarin ortalamasi : "  << ortalama << endl;
    
}
