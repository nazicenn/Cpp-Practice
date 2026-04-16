#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "3 sayi girin: ";
    cin >> a >> b >> c;

    if (a < b) swap(a, b);
    if (a < c) swap(a, c);
    if (b < c) swap(b, c);

    cout << "Buyukten kucuge siralama: ";
    cout << a << " " << b << " " << c;

    return 0;
}
