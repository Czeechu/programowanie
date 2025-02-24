#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void ex1(vector<int>& vec, int size) {

    srand(time(0));
    vec.resize(size);

    for (int i = 0; i < size; i++) {
        vec[i] = rand() % 100 + 1; 
        cout << vec[i] << " "; 
    }
    cout << endl;
}

void ex2(const vector<int>& vec) {

    int min = vec[0];
    int max = vec[0];

    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] < min)
        {
            min = vec[i];
        }
        if (vec[i] > max)
        {
            max = vec[i];
        }
    }

    cout << "Minimalna wartosc: " << min << endl;
    cout << "Maksymalna wartosc: " << max << endl;
}

void ex3(const vector<int>& vec, int N) {

    cout << "Elementy podzielne przez " << N << ": ";
    bool found = false;

    for (int num : vec) {
        if (num % N == 0) {
            cout << num << " ";
            found = true;
        }
    }

    cout << endl;
}

void ex4(const vector<int>& vec) {

    int suma = 0;
    for (int i = 0; i < vec.size(); i++) {
        suma += vec[i];
    }

    cout << "Suma wszystkich elementow: " << suma << endl;
}

void ex5(const vector<int>& vec, int size) {
    int suma = 0;

    for (int i = 0; i < size; i++) {
        suma += vec[i];
    }

    cout << "Srednia wartosc elementow tablicy: " << suma / size << endl;
}

void ex6(vector<int>& vec) {
    for (int i = 0; i < vec.size() - 1; i++) {
        for (int j = 0; j < vec.size() - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }

    cout << "Posortowana tablica: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    const int size = 10;
    vector<int> vec;
    int N;
    
    
    ex1(vec, size);
    ex2(vec);
    
    cout << "Podaj liczbe N: ";
    cin >> N;

    ex3(vec, N);
    ex4(vec);

    ex5(vec, size);

    ex6(vec);

    return 0;
}