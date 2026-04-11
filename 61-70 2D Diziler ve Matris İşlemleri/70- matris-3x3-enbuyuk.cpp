#include <iostream>
using namespace std;

int main() {
    int matris[3][3];
    int max;

    cout << "3x3 matris gir:\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin >> matris[i][j];

    max = matris[0][0];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matris[i][j] > max)
                max = matris[i][j];
        }
    }

    cout << "En buyuk eleman: " << max;

    return 0;
}
