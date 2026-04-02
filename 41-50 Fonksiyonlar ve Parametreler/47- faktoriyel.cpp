#include <iostream> 
using namespace std; 
   int faktoriyel (int a) {
       int sonuc=1; 
    for (int i = 1; i <= a; i++) {
        sonuc = sonuc * i;
    }
        return sonuc;
 
        
   }
int main () {
    int sayi1;

    cout << "sayi giriniz : " ; 
    cin >> sayi1;
    
    int sonuc = faktoriyel (sayi1);

    cout << "Sayinin faktoriyeli : " << sonuc << endl;

    
    return 0;
}
