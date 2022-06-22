#include <iostream>
using namespace std;

int main() {
    // Variabel
    int a, b, hasil;
    
    // Kasus
    cout << "Carilah 2 Bilangan yang jika ditambahkan menjadi 5" << endl;
    cout << "Masukan Nilai a: "; cin >> a;
    cout << "Masukan Nilai b: "; cin >> b;
    hasil = a + b;

    // Kemungkinan Output
    if (hasil == 5) {
        cout << "Bingo!" << endl;
    } else if (hasil == 4 ) {
        cout << "Sedikit lagi!" << endl;
    } else if (hasil == 6) {
        cout << "Nyaris cuy" << endl;
    } else {
        cout << "salah coy!" << endl;
    }

    return 0;
}

/*  Note:
    Jika nilai pada if benar maka syntax pada bracket if akan dijalankan
    Else if adalah kemungkinan sekunder jika pernyataan pada fungsi if salah
    Else adalah fungsi ketika nilai pada semua fungsi sebelumnya salah
*/