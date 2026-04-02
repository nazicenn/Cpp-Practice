#include <iostream> 
using namespace std; 
   int enbuyuk (int a, int b) {
    if (a > b) 
        return a;
    else 
        return b;
        
   }
int main () {
    int sayi1;
    int sayi2;

    cout << "sayi giriniz : " ; 
    cin >> sayi1;
    
    cout << "sayi giriniz : " ; 
    cin >> sayi2;
    
    int sonuc = enbuyuk (sayi1, sayi2);

    cout << "En buyuk sayi: " << sonuc << endl;

    
    return 0;
}
