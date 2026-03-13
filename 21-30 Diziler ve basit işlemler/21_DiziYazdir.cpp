#include <iostream>
using namespace std; 
int main () { 
    int dizi[5] ; 
       
    for (int i=0; i<5; i++)
    {
        cout << i+1 << ". sayiyi giriniz ";
        cin >> dizi[i];    
    }

    for(int i = 0; i < 5; i++) {
    cout << dizi[i] << endl;
}
     }
