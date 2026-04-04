#include <iostream>
#include <string>
using namespace std;

int main() {
    string isim1, isim2;

    cout << "1. ismi giriniz: ";
    getline(cin, isim1);

    cout << "2. ismi giriniz: ";
    getline(cin, isim2);

    string birlesik = isim1 + " " + isim2;

    cout << "Birlesik hali: " << birlesik << endl;

    return 0;
}
