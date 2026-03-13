#include <iostream> 
using namespace std; 
int main () {

    int i;
    int sayi;
    int carpim=1;
    

    for (i=1; i<=50; i++) {

        cout << i << ". sayiyi giriniz lutfen: " << endl;
        cin >> sayi;
        carpim*= sayi; 
    } 
    
    cout << "sayilarin carpimi :" << carpim << endl; 
}