#include <iostream>
using namespace std; 
int main () {

    int carpim =1;
    int taban;
    int us; 
    int i;

    cout << "taban degerini giriniz :";
    cin >> taban;
    cout << "us degerini giriniz :";
    cin >> us;

       for (i=1; i<=us; i++) {

        carpim *= taban;
       }    

    cout << taban << " uzeri " << us <<": "<< carpim;  
}