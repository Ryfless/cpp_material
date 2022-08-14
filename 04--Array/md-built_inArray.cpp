#include <iostream>         // Multidimensi built-in Array
using namespace std;

// Prototype fungsi
void printmatx(int *ptr, int baris, int kolom);

int main() {
    // Variabel
    int matrix[3][2] = {1, 3, 2, 4, 6, 5}; // Array[baris][kolom]    

    // Printing
    cout << matrix[0][0] << " " << matrix[0][1] << endl;
    cout << matrix[1][0] << " " << matrix[1][1] << endl;
    cout << matrix[2][0] << " " << matrix[2][1] << endl << endl;;

    // Print dengan looping
    printmatx(*matrix, 2, 3);
    cout << endl;
    printmatx(*matrix, 3, 2);
    
    return 0;
}

// Fungsi looping matrix
void printmatx(int *ptr, int baris, int kolom) {
    int index = 0;
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            cout << *(ptr + index) << " ";
            index++;
        }
        cout << endl;
    }
}