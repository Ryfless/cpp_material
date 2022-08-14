#include <iostream>
#include <algorithm>
#include <array>

// Agar tidak perlu mengulang pada nama yang sama
using std::cout;
using std::cin;
using std::endl;

// Global Scope
const int aSize = 10;

// Fungsi array print
void printA(std::array <int, aSize> &number) {
    cout << "Index: ";
    for(int &i : number) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    // Variabel
    std::array<int, aSize>array = {9,7,5,3,1,0,2,4,6,8}; // tidak ada error dikarenakan fungsi array dibedakan dengan std::
    int search;
    bool found;

    printA(array);
    cout << endl;

    // Masukan input apakah nilai ada pada index
    cout << "Cari angka diatas: ";
    cin >> search;

    // Mulai dengan sort index
    std::sort(array.begin(), array.end());
    // Lanjutkan dengan fungsi search
    found = std::binary_search(array.begin(), array.end(), search);

    if (found) {
        cout << "Nilai tersedia" << endl;
    } else {
        cout << "Nilai tak tersedia" << endl;
    }

    return 0;
}