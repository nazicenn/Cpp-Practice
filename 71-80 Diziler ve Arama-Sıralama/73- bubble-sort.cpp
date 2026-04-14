#include <iostream>
using namespace std;

void bubbleSort(int dizi[], int boyut) {
    for (int i = 0; i < boyut - 1; i++) {
        for (int j = 0; j < boyut - i - 1; j++) {
            if (dizi[j] > dizi[j + 1]) {
                int temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }
}

int main() {
    int dizi[] = {8, 3, 5, 2, 9};
    int boyut = 5;

    bubbleSort(dizi, boyut);

    cout << "Siralanmis dizi: ";
    for (int i = 0; i < boyut; i++) {
        cout << dizi[i] << " ";
    }

    return 0;
}
