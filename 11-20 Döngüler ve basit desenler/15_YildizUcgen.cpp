#include <iostream>
using namespace std;

int main() {
    int satir;

    cout << "Kac satirli ucgen istiyorsunuz? ";
    cin >> satir;

    for(int i = 1; i <= satir; i++) {       
        for(int j = 1; j <= i; j++) {       
            cout << "* ";
        }
        cout << endl;                        
    }
}