#include <iostream> 
using namespace std; 
   int carpim (int a) {
       return a * a * a; 
   }
int main () {
    int sayi1;

    cout << "sayi giriniz : " ; 
    cin >> sayi1;

    
    int sonuc = carpim (sayi1);
    cout << "sayinin küpü : " << sonuc;
    
    return 0;
}
