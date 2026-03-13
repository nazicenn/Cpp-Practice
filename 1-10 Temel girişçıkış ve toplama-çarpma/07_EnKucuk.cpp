#include <iostream> 
using namespace std; 
int main () {
int a; 
int b; 
int c; 

cout << "Lutfen Bir Deger Giriniz : "; 
cin >> a; 

cout << "Lutfen Bir Deger Giriniz : "; 
cin >> b; 

cout << "Lutfen Bir Deger Giriniz : "; 
cin >> c; 

    if (a <= b && a <= c ) {cout << "en kucuk deger : " << a ; }    
    else if (b <= a && b <= c ) {cout << "en kucuk deger : " << b ; }   
    else {cout << "en kucuk deger : " << c ; }
}