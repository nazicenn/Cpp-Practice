#include <iostream>
using namespace std; 
int main () {
    int girilendeger; 
    cout << "Lutfen yasinizi giriniz : ";
    cin >> girilendeger;
    
    if (girilendeger>=18) 
    {
        cout << "Yasiniz onaylandi sayfamiza hosgeldiniz!";
    }
    else 
    {
        cout << "Uzgunuz resit olunca tekrar bekleriz! <3";
    }
}