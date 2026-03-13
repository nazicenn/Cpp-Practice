#include <iostream> 
using namespace std; 
int main () {

    int i;
    double sayi;
    double toplam=0;
    double ortalama;

    for (i=1; i<=5; i++) {

        cout << i << ". sayiyi giriniz lutfen: " << endl;
        cin >> sayi;
        toplam+= sayi; 
    } 
    
        ortalama = toplam/5 ; 
    
    cout << "sayilarin ortalamasi :" << ortalama << endl; 
}