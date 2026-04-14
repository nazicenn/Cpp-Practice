#include <iostream>
using namespace std;

int main() {
    int dizi[] = {4, 7, 10, 3, 8, 5};
    int boyut = 6;

    cout << "Cift sayilar: ";

    for (int i = 0; i < boyut; i++) {
        if (dizi[i] % 2 == 0) { 
            cout << dizi[i] << " ";
        }
    }

    return 0;
}
