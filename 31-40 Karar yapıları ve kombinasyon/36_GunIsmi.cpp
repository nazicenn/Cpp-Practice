#include <iostream>
using namespace std; 
int main () {
    int gunler;
    cout << "Lutfen ay numarasini giriniz (1-12) :";
    cin >> gunler;

    switch (gunler)
    {
    case 1: cout << "pazartesi"; break;
    case 2: cout << "sali"; break;
    case 3: cout << "carsamba"; break;
    case 4: cout << "persembe"; break;
    case 5: cout << "cuma"; break;
    case 6: cout << "cumartesi"; break;
    case 7: cout << "pazar"; break;

    default:
        break;
    }
}