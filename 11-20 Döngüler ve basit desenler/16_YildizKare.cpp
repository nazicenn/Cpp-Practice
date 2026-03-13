#include <iostream>
using namespace std;

int main() {
    int satir;

    cout << "Kac satirli kare istiyorsunuz? ";
    cin >> satir;

    for(int i = 1; i <= satir; i++) {       
        for(int j = 1; j <= satir; j++) {       
            cout << "* ";
        }
        cout << endl;                        
    }
}