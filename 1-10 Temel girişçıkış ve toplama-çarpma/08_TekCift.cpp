#include <iostream> 
using namespace std; 
int main () { 

    int sayi; 

    cout << "lutfen bir deger giriniz : "; 
    cin >> sayi; 

    if (sayi % 2 == 0) { cout << "degeriniz çift "; }
    else {cout << "degeriniz tek"; } 

    return 0;
}