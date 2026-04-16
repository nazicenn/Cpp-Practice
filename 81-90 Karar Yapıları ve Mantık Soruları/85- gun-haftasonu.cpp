#include <iostream>
using namespace std;

int main() {
    int gun;

    cout << "Gun numarasini girin (1-7): ";
    cin >> gun;

    if (gun == 6 || gun == 7) {
        cout << "Hafta sonu";
    } 
    else if (gun >= 1 && gun <= 5) {
        cout << "Hafta ici";
    } 
    else {
        cout << "Gecersiz gun!";
    }

    return 0;
}
