#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cout << "Uc sayi gir: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
        cout << "Uc sayi esit";
    else
        cout << "Uc sayi esit degil";

    return 0;
}
