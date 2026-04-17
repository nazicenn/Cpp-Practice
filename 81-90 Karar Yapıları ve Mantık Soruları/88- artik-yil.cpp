#include <iostream>
using namespace std;

int main() {
    int yil;

    cout << "Bir yil gir: ";
    cin >> yil;

    if ((yil % 4 == 0 && yil % 100 != 0) || (yil % 400 == 0))
        cout << "Artik yil";
    else
        cout << "Artik yil degil";

    return 0;
}
