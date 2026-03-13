#include <iostream>
using namespace std; 
int main () {
    int sayi;
    int carpim = 1; 
    cout << "Lutfen deger giriniz : "; 
    cin >> sayi;

    for (int i=1; i <= sayi; i++) {
        carpim *= i;
    }
}
