#include <iostream>
using namespace std;

int main() {
    int ay;

    cout << "Ay numarasini girin (1-12): ";
    cin >> ay;

    if (ay == 12 || ay == 1 || ay == 2) {
        cout << "Kis";
    } 
    else if (ay >= 3 && ay <= 5) {
        cout << "Ilkbahar";
    } 
    else if (ay >= 6 && ay <= 8) {
        cout << "Yaz";
    } 
    else if (ay >= 9 && ay <= 11) {
        cout << "Sonbahar";
    } 
    else {
        cout << "Gecersiz ay!";
    }

    return 0;
}
