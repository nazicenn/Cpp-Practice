#include <iostream> 
using namespace std; 
int main () { 
    int sayi; 
    cout << "kac satirli ucgen lazim? "; 
    cin >> sayi;

    for (int i=1; i<=sayi; i++) {
        for (int j=sayi; j>=i; j--) {
            cout << "*";
         }    cout << endl;    
    }
    return 0;
}