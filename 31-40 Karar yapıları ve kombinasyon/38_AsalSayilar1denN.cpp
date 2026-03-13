#include <iostream>
using namespace std;

int main() {
    int sayi;

    cout << "Bir sayi giriniz: ";
    cin >> sayi;

    cout << "1'den " << sayi << " sayisina kadar olan asal sayilar: ";

    for(int i = 2; i <= sayi; i++) {   
        bool asal = true;             

        for(int j = 2; j < i; j++) {  
            if(i % j == 0) {           
                asal = false;
                break;                 
            }
        }

        if(asal) {
            cout << i << " ";           
        }
    }

    return 0;
}