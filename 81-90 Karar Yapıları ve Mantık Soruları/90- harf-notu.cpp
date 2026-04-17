#include <iostream>
using namespace std;

int main() {
    int notu;

    cout << "Not gir: ";
    cin >> notu;

    if (notu >= 90)
        cout << "A";
    else if (notu >= 80)
        cout << "B";
    else if (notu >= 70)
        cout << "C";
    else if (notu >= 60)
        cout << "D";
    else
        cout << "F";

    return 0;
}
