#include <iostream>
using namespace std;

bool asal(int a) {
    if (a <= 1)
        return false;

    for (int i = 2; i < a; i++) {
        if (a % i == 0)
            return false;
    }

    return true;
}

int main() {
    int sayi;

    cout << "Sayi giriniz: ";
    cin >> sayi;

    if (asal(sayi))
        cout << "Sayi asaldir" << endl;
    else
        cout << "Sayi asal degildir" << endl;

    return 0;
}
