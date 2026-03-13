#include <iostream>
using namespace std; 
int main () {

    int dizi[5];
    int toplam=0; 
    int enbuyuk;
    

    for (int i=0; i<5; i++)
    {
        cout << i+1 << ". sayiyi giriniz" << endl;
        cin >> dizi[i];   
    }
     
    enbuyuk=dizi[0];
    
    for (int j=0; j < 5; j++)
    {
        if (dizi[j] >= enbuyuk )
        {
            enbuyuk=dizi[j];
        }
        
    }
        cout << "en buyuk sayi : " << enbuyuk; 
}
