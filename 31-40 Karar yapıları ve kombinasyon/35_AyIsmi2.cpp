#include <iostream>
using namespace std;

int main() {

    string aylar[12] = {
        "Ocak", "Subat", "Mart", "Nisan", "Mayis", "Haziran",
        "Temmuz", "Agustos", "Eylul", "Ekim", "Kasim", "Aralik"
    };

    int ay;
    cout << "Ay numarasi giriniz (1-12): ";
    cin >> ay;

    if(ay >= 1 && ay <= 12)
        cout << aylar[ay-1];
    else
        cout << "Gecersiz ay!";

    return 0;
}