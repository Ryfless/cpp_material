#include <iostream>         // Multidimensi standard array
#include <array>
using namespace std;

// Global scope
const int baris = 3; // const bersifat konstan dan tidak bisa dirubah
const int kolom = 2;

// Fungsi arrayloop
void printmatx(array <array <int, kolom>, baris> value) {
    for (array <int, kolom> vbaris : value) {
        for (int valkolom : vbaris) {
            cout << valkolom << " ";
        }
        cout << endl;
    }
}

int main() {
    // Variabel
    array <array <int, kolom>, baris> matrix = {1, 2, 3, 4, 5, 6};

    // Manual Printing
    cout << matrix[0][0] << " " << matrix[1][1] << endl;
    cout << matrix[0][1] << " " << matrix[2][0] << endl;
    cout << matrix[1][0] << " " << matrix[2][1] << endl << endl;

    // Print dengan array looping
    printmatx(matrix);

    return 0;
}