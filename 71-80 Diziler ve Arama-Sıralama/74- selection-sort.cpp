#include <iostream>
using namespace std;

void selectionSort(int dizi[], int boyut) {
    for (int i = 0; i < boyut - 1; i++) {
        int maxIndex = i;

        for (int j = i + 1; j < boyut; j++) {
            if (dizi[j] > dizi[maxIndex]) {
                maxIndex = j;
            }
        }

        int temp = dizi[i];
        dizi[i] = dizi[maxIndex];
        dizi[maxIndex] = temp;
    }
}

int main() {
    int dizi[] = {4, 7, 1, 9, 3};
    int boyut = 5;

    selectionSort(dizi, boyut);

    cout << "Siralanmis dizi: ";
    for (int i = 0; i < boyut; i++) {
        cout << dizi[i] << " ";
    }

    return 0;
}
