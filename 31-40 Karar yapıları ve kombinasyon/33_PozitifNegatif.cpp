#include <iostream>
using namespace std; 
int main () {
    int deger; 
    cout << "Lutfen Bir deger Giriniz : " ; 
    cin >> deger; 
    if (deger < 0) { cout << "Degeriniz Negatif"; } 
    else if (deger == 0) { cout << "Degeriniz Notr"; } 
    else { cout << "Degeriniz Pozitif"; } 
}