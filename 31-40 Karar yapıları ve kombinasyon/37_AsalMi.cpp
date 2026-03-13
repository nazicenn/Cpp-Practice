#include <iostream>
using namespace std;

int main() {

    int sayi;
    bool asal = true;

    cout << "Bir sayi giriniz: ";
    cin >> sayi;

    if (sayi <= 1) {
        asal = false;
    }
    else {
        for (int i = 2; i < sayi; i++) {
            if (sayi % i == 0) {
                asal = false;
                break;
            }
        }
    }

    if (asal)
        cout << "Asal sayidir.";
    else
        cout << "Asal degildir.";

    return 0;
}
