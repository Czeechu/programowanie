#include <iostream>
#include <stack>

using namespace std;

void toBinary(int liczba) {
    stack<int> stos;

    while (liczba > 0) {
        stos.push(liczba % 2);
        liczba /= 2;
    }

    cout << "Binarny: ";
    while (!stos.empty()) {
        cout << stos.top();
        stos.pop();
    }
    cout << endl;
}

void toHexadecimal(int liczba) {
    stack<char> stos;

    string hex = "0123456789ABCDEF";

    while (liczba > 0) {
        stos.push(hex[liczba % 16 ]);
      liczba /= 16;
   }

  cout << "Szesnastkowy: ";
   while (!stos.empty()) {
       cout << stos.top();
        stos.pop();
   }
    cout << endl;

}

int main() {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;

    toBinary(liczba);
    toHexadecimal(liczba);

    return 0;
}
