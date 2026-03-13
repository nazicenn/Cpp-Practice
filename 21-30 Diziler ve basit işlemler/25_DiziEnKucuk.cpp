#include <iostream> 
using namespace std; 
int main () { 
    int dizi[5]; 
    int enkucuk;

    for (int i = 0; i < 5; i++) 
    {
        cout << i+1 << ". sayiyi giriniz :" ; 
        cin >> dizi[i];  
    }
        enkucuk=dizi[0];

    for (int j = 0; j < 5; j++)
    {
        if (enkucuk > dizi[j])
        {
            enkucuk= dizi[j];
        }
        
    }
    
    cout << "dizideki en kucuk sayi : " << enkucuk;
}