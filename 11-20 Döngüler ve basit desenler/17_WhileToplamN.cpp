#include <iostream> 
using namespace std; 
int main () {

    int sayi; 
    int kac_tane;
    int toplam=0;
    int i=1;

    cout << "kac sayi toplamak istersin : "; 
    cin >> kac_tane;

    while (i <= kac_tane)

    {
        cout << "Lutfen sayi giriniz : "; 
        cin >> sayi; 

        toplam +=sayi;

        i++;
    }
    
    cout << "sayilarin toplami : " << toplam ; 
}