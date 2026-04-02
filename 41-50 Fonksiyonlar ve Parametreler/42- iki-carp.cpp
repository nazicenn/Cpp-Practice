#include <iostream> 
using namespace std; 
   int carpim (int a, int b) {
       return a * b; 
   }
int main () {
    int sayi1;
    int sayi2; 
    
    cout << "sayi giriniz : " ; 
    cin >> sayi1;
    cout << "sayi giriniz : " ; 
    cin >> sayi2;
    
    int sonuc = carpim (sayi1 , sayi2);
    cout << "sayilarin carpimi : " << sonuc;
    
    return 0;
}
