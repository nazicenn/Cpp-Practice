#include <iostream>
using namespace std;

int main() {
    int matris[3][3], toplam = 0;

    cout << "3x3 matris gir:\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin >> matris[i][j];

    for(int i=0;i<3;i++)
        toplam += matris[i][i];

    cout << "Diagonal toplami: " << toplam;

    return 0;
}
