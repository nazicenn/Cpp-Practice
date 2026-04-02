#include <iostream> 
using namespace std; 
   int topla (int a, int b) {
       return a + b; 
   }
int main () {
    int sayi1;
    int sayi2; 
    
    cout << "sayi giriniz : " ; 
    cin >> sayi1;
    cout << "sayi giriniz : " ; 
    cin >> sayi2;
    
    int sonuc = topla (sayi1 , sayi2);
    cout << "sayilarin toplami : " << sonuc;
    
    return 0;
}
