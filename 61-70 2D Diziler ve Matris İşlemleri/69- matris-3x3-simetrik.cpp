#include <iostream>
using namespace std;

int main() {
    int matris[3][3];
    bool simetrik = true;

    cout << "3x3 matris gir:\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin >> matris[i][j];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matris[i][j] != matris[j][i]){
                simetrik = false;
                break;
            }
        }
    }

    if(simetrik)
        cout << "Matris simetrik";
    else
        cout << "Matris simetrik degil";

    return 0;
}
