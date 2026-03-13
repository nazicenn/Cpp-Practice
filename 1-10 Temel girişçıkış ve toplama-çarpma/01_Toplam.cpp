#include <iostream>
using namespace std; 
int main () {

    int toplam=0;
    int sayi; 
    int i;
    
    for (i=1; i<=5; i++) { 
        
       cout << i << ". sayiyi giriniz: " << endl; 
            cin >> sayi;   
                toplam+= sayi ;  
        } 

    cout << "sayilarin toplami : " << toplam;
}