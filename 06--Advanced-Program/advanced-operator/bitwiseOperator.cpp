#include <iostream>         // Bitwise operator berfungsi untuk membuat tabel operasi logika dalam binary
#include <bitset>
#include <string>

/* using namespace std; */  // !--dapat menulis seperti ini tetapi tidak terlalu disarankan

using std::cout;
using std::cin;
using std::endl;
using std::string;

void printB(int val, string nama) {                         // Memunculkan binary dalam sebuah variabel
    cout << nama << ": " << std::bitset<8>(val) << endl;    // bitset<*jumlah binary>(*variabel)
}

int main() {
    // Variabel
    int a, b, h;    // Variabel h untuk hasil

    cout << "#===-Program Bitwise-===#\n" << endl;
    cout << "Masukan nilai a: ";
    cin >> a;
    cout << "Masukan nilai b: ";
    cin >> b;

    cout << "\nBinary awal:" << endl;
    printB(a, "a");
    printB(b, "b");

    // Bitwise AND
    cout << "\n<Bitwise AND>" << endl;
    h = a & b;
    printB(a, "a");
    printB(b, "b");
    printB(h, "h");
    cout << "value: " << h << endl;

    // Bitwise OR
    cout << "\n<Bitwise OR>" << endl;
    h = a | b;
    printB(a, "a");
    printB(b, "b");
    printB(h, "h");
    cout << "value: " << h << endl;

    // Bitwise XOR
    cout << "\n<Bitwise XOR>" << endl; // Ekslusif OR (setiap kedua variabel bernilai sama maka hasilnya akan false)
    h = a ^ b;
    printB(a, "a");
    printB(b, "b");
    printB(h, "h");
    cout << "value: " << h << endl;

    // Bitwise NOT
    cout << "\n<Bitwise NOT>" << endl;
    h = ~a;
    printB(a, "a");
    printB(h, "h");
    cout << "value: " << h << endl;

    // Bitwise SHL
    cout << "\n<Bitwise SHL>" << endl; // Menggeser nilai true dalam binary kearah kiri
    h = a << 2; // Masukan input untuk berapa langkah dalam menggeser nilai
    printB(a, "a");
    printB(h, "h");
    cout << "value: " << h << endl;

    // Bitwise SHR
    cout << "\n<Bitwise SHR>" << endl; // Menggeser nilai true dalam binary kearah kanan
    h = a >> 1;
    printB(a, "a");
    printB(h, "h");
    cout << "value: " << h << endl;

    return 0;
}

/*  Bitwise operator:
    & = AND (Bitwise AND)
    | = OR (Bitwise OR)
    ^ = XOR (Bitwise XOR)
    ~ = NOT
    << = SHL (Shift bits left)
    >> = SHR (Shift bits right)
*/