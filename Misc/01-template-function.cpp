#include <iostream>         // Template berfungsi untuk membuat sebuah fungsi yang dapat berlaku untuk semua tipe data
#include <string>

using std::cout;
using std::cin;
using std::endl;

// Fungsi print dengan semua tipe data
template<typename T>
void print(T data) {
    cout << data << endl;
}

// Fungsi maksimum antara int dan double
template<typename T, typename U>
T max(T a, U b) {   // Tipe data hasil akan mengikuti variabel a
    return (a > b) ? a:b;
}

template<typename T>  // !--Tiap template hanya dapat dipakai untuk 1 fungsi saja
char toChar(T data) {
    return char(data); // casting function
}

int main() {
    // Printing
    print("Hello world!");
    print(1);
    print(5.6);
    print('R');
    print("======================");

    // Print fungsi maksimum
    print(max(12.7, 11));
    // Casting tipe data
    print(max<int>(15.67, 13.72)); // Hasil akan dirubah ke int
    print("======================");

    print(toChar(3));

    return 0;
}