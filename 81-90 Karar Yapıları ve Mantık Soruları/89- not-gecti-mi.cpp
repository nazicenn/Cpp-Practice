#include <iostream>
using namespace std;

int main() {
    int vize, final;
    double ortalama;

    cout << "Vize ve final notunu gir: ";
    cin >> vize >> final;

    ortalama = vize * 0.4 + final * 0.6;

    if (ortalama >= 50)
        cout << "Gecti";
    else
        cout << "Kaldi";

    return 0;
}
