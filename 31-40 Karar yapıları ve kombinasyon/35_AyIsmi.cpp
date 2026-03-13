#include <iostream>
using namespace std; 
int main () {
    int ay; 

    cout << "Lutfen ay numarasini giriniz (1-12) :";
    cin >> ay; 

    switch (ay)
    {
    case 1: cout << "ocak"; break;
    case 2: cout << "subat"; break;
    case 3: cout << "mart"; break;
    case 4: cout << "nisan"; break;
    case 5: cout << "mayis"; break;
    case 6: cout << "haziran"; break;
    case 7: cout << "temmuz"; break;
    case 8: cout << "agustos"; break;
    case 9: cout << "eylul"; break;
    case 10: cout << "ekim"; break;
    case 11: cout << "kasim"; break;
    case 12: cout << "aralik"; break; 
     
    default:
       cout << "gecersiz sayi degeri girdiniz";
        break;
    } 
}