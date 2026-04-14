#include <iostream>
using namespace std;

int main() {
    int dizi[] = {4, -7, 1, -9, 3, -2};
    int boyut = 6;

    cout << "Negatif sayilar: ";

    for (int i = 0; i < boyut; i++) {
        if (dizi[i] < 0) {
            cout << dizi[i] << " ";
        }
    }

    return 0;
}
