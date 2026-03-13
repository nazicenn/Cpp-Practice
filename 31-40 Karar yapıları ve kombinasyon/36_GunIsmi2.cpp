#include <iostream>
using namespace std;

int main() {

    string gunler[7] = {
        "pazartesi", "sali", "carsamba", "persembe", "cuma", "cumartesi",
        "pazar"};

    int gun;
    cout << "gun numarasi giriniz (1-7): ";
    cin >> gun;

    if(gun >= 1 && gun <= 12)
        cout << gunler[gun-1];
    else
        cout << "Gecersiz ay!";

    return 0;
}