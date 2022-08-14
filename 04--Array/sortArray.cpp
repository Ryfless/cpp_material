#include <iostream>             // Algoritma sort berfungsi untuk mengurutkan nilai acak
#include <array>
#include <algorithm>

// Untuk menghindari penabrakan nama variabel dengan fungsi
using std :: cout;
using std :: cin;
using std :: endl;
using std :: array;

// Global Scope
const size_t sizeI = 5;

// Fungsi Print array
void printA(array <int, sizeI> &bil) {
    cout << "Bilangan Rill: ";
    for(int &a : bil) {
        cout << a << " ";
    }
    cout << endl;
}

void printA(array <char, sizeI> &alpha) {
    cout << "Huruf: ";
    for(char &a : alpha) {
        cout << a << " ";
    }
    cout << endl;
}

int main() {
    // Variabel
    array <int, sizeI> bilril = {4, 2, 5, 3, 1};
    array <char, sizeI> alphabet = {'b', 'e', 'a', 'c', 'd'};

    //Print
    printA(bilril);
    printA(alphabet);
    cout << endl;

    // Sort array algorthm
    cout << "   <Sesudah di sort>" << endl;
    std :: sort(bilril.begin(), bilril.end());
    printA(bilril);
    std :: sort(alphabet.begin(), alphabet.end());
    printA(alphabet);

    return 0;
}