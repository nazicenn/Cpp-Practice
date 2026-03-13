#include <iostream>
using namespace std; 
int main ()  { 

    int dizi[5];
    int ters;
    for (int i=0; i<5; i++)
    {
        cout << i+1 << ". degeri giriniz : "; 
        cin >> dizi[i]; 
    }
    
    for (int j=4; j>=0; j++)
    {
       cout << dizi[j];
    }
    
}