// Preprocessing directive begin
#include <iostream>

// Macro define
#define DEC 12345.6789  // Sebagai kata pengganti untuk nilai selanjutnya

// Define fungsi
#define KUADRAT(X) (X*X)
#define print(i) (i);
#define MAX(A, B) ((A > B) ? A:B)  // Dapat pula menjalankan ternary operator

// Macro undefine
#define NAMA "Herdi"

// Akhir preprocessing
using std::cout;
using std::cin;
using std::endl;

int main() {
    // Contoh pengaplikasian define
    cout << DEC << endl; // ini tidak memakan memori dan tidak berjalan di compiler
    // Ekuivalen dengan
    cout << 12345.6789 << endl; // tidak memakan memori karena bersifat literal

    // Berbeda dengan
    double dec = 12345.6789;  // Hal ini berbeda dikarenakan membuat variabel dan mengeksekusi membutuhkan memori
    cout << dec << endl;      // dan ini berjalan di compiler
    cout << endl;

    // Fungsi define printing
    cout << KUADRAT(12) << endl;
    cout << MAX(6, 14) << endl;
    cout << print("Hello world!")
    cout << endl;

    /*=============================================================================================================*/
    // Nilai asli
    cout << NAMA << endl;
    #undef NAMA
    // Ubah nilai baru
    #define NAMA "Herman"
    cout << NAMA << endl;

    return 0;
}