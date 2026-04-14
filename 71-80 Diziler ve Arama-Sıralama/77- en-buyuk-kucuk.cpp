#include <iostream>
using namespace std;

int main() {
    int dizi[] = {4, 7, 1, 9, 3};
    int boyut = 5;

    int enKucuk = dizi[0];
    int enBuyuk = dizi[0];

    for (int i = 1; i < boyut; i++) {
        if (dizi[i] < enKucuk) {
            enKucuk = dizi[i];
        }
        if (dizi[i] > enBuyuk) {
            enBuyuk = dizi[i];
        }
    }

    cout << "En kucuk: " << enKucuk << endl;
    cout << "En buyuk: " << enBuyuk << endl;

    return 0;
}
