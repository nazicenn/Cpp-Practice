#include <iostream>
#include <algorithm>   
using namespace std;

int main() {

    int dizi[3];

    for (int i = 0; i < 3; i++) {
        cout << i+1 << ". degeri giriniz: ";
        cin >> dizi[i];
    }

    sort(dizi, dizi+3);  

    cout << "Kucukten buyuge sirali hali: ";
    for(int i = 0; i < 3; i++) {
        cout << dizi[i] << " ";
    }

    return 0;
}