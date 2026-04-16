#include <iostream>
using namespace std;

int main() {
    int sayi;

    cout << "Bir sayi girin: ";
    cin >> sayi;

    if (sayi % 2 == 0) {
        cout << "Sayi cifttir.";
    } else {
        cout << "Sayi tektir.";
    }

    return 0;
}
