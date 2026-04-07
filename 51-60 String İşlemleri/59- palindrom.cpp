#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Bir kelime giriniz: ";
    cin >> str;

    bool palindrom = true;

    int i = 0;
    int j = str.length() - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            palindrom = false;
            break;
        }
        i++;
        j--;
    }

    if (palindrom)
        cout << "Palindromdur.";
    else
        cout << "Palindrom degildir.";

    return 0;
}
