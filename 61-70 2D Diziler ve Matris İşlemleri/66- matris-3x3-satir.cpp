#include <iostream>
using namespace std;

int main() {
    int matris[3][3];

    cout << "3x3 matris gir:\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin >> matris[i][j];

    for(int i=0;i<3;i++){
        int toplam = 0;
        for(int j=0;j<3;j++)
            toplam += matris[i][j];

        cout << i+1 << ". satir toplami: " << toplam << endl;
    }

    return 0;
}
