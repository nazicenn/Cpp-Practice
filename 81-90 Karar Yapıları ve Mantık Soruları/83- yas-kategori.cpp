#include <iostream>
using namespace std;

int main() {
    int yas;

    cout << "Yasinizi girin: ";
    cin >> yas;

    if (yas <= 25) {
        cout << "Genc";
    } else if (yas <= 50) {
        cout << "Orta";
    } else {
        cout << "Yasli";
    }

    return 0;
}
