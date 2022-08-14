#include <iostream>     // goto berfungsi untuk mengulang atau skip sebuah syntax dengan memberi label

using std::cout;
using std::cin;
using std::endl;

int main() {
    // Variabel
    int a, b, hasil;

    // Mengulang syntax dengan goto
    cout << "#==Program penjumlahan==#" << endl;
    begin:  // Kode akan mengulang
    hasil = (cout << "Input angka a: ", cin >> a, cout << "Input angka b: ", cin >> b, a+b);
    cout << "Hasil a + b = " << hasil << endl << endl;
    // Untuk menghentikan looping
    if (hasil != 5) {
        goto begin;  // goto *nama_label
    }
    
    // Skip syntax dengan goto
    cout << "#==Program Melompati==#" << endl;
    int x[3] = {1,2,3};

    for (int i = 0; i < 3; i++) {
        cout << x[i] << endl;
    }

    // setelah dilompati
    cout << "\nSetelah melompat:" << endl;  // !--(fungsi goto akan error jika digunakan dalam looping)
    cout << x[0] << endl;
    goto skip;
    cout << x[1] << endl; // Perintah ini akan diskip
    skip:
    cout << x[2] << endl;

    return 0;
}