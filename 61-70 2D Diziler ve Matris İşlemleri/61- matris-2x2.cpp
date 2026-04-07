#include <iostream>
using namespace std;

int main() {
    int matris[2][2];

    cout << "2x2 matris elemanlarini giriniz:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "matris[" << i << "][" << j << "] = ";
            cin >> matris[i][j];
        }
    }

    cout << "\nMatris:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matris[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
