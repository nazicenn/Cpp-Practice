#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

int main() {
    string metin;

    cout << "Bir metin giriniz: ";
    getline(cin, metin);

    for (int i = 0; i < metin.length(); i++) {
        metin[i] = tolower(metin[i]);
    }

    cout << "Küçük hali: " << metin << endl;

    return 0;
}
