#include <iostream>     // Scope adalah metode untuk mendeklarasikan berbagai nilai dengan variabel yang sama

using std::cout;
using std::cin;
using std::endl;

// Global scope
int x = 5;

// Fungsi ambil global
int global() {
    return x;
}

// Fungsi alternatif variabel
int x_local() {
    int x = 78;
    return x;
}

int main() {
    // Local main scope
    int x = 36;

    // Print
    cout << "Local main: " << x
         << "\nGlobal: " << global()
         << "\nx Local: " << x_local() <<
    endl;
    {  // Menggunakan bracket kosong untuk membuat block variabel
        // Block scope
        int x = 69;
        cout << "Block scope: " << x << endl;
    }
    // cek ulang local main scope
    cout << "Local main: " << x << endl;

    return 0;
}