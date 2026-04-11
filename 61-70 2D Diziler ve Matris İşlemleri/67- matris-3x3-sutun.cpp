#include <iostream>
using namespace std;

int main() {
    int matris[3][3];

    cout << "3x3 matris gir:\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin >> matris[i][j];

    for(int j=0;j<3;j++){
        int toplam = 0;
        for(int i=0;i<3;i++)
            toplam += matris[i][j];

        cout << j+1 << ". sutun toplami: " << toplam << endl;
    }

    return 0;
}
