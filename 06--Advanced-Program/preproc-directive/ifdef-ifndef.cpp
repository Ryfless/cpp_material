#include <iostream>     // ifdef dan ifndef berfungsi untuk mengecek keberadaan suatu definisi

// Contoh untuk memulai definisi
#ifndef PKM  // (Jika tidak terdapat define)
    #define PKM  // (Maka akan membuat define)
#endif

#ifdef PKM // Mengecek keberadaan
    #define PKM "Pokemon tersedia"
#else
    #define PKM "Pokemon tidak tersedia"
#endif

using std::cout;
using std::cin;
using std::endl;

int main() {
    // Print
    cout << PKM << endl;

    return 0;
}