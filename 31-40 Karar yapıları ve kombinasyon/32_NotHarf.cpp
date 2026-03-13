#include <iostream>
using namespace std; 
int main () { 
    int grade; 
    cout << "Lutfen notunuzu giriniz : ";
    cin >> grade;

    if (grade <= 0 || grade >= 100) 
    {
        cout  << "Lutfen gecerli bir deger giriniz.";
    }
    else if (grade <= 50) {
        cout << "Harf Notunuz F"; 
    }
    
    else if (grade <= 70) {
        cout << "Harf Notunuz C"; 
    }
    
    else if (grade <= 85) {
        cout << "Harf Notunuz B"; 
    }
    
    else
    {
        cout << "Harf Notunuz A"; 
    }
    
}