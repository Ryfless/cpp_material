#include <iostream>         // Comma operator berfungsi untuk menyingkat beberapa syntax dalam 1 baris kode
#include <string>

/* using namespace std; */  // !--dapat menulis seperti ini tetapi tidak terlalu disarankan

using std::cout;
using std::cin;
using std::endl;
using std::string;

// Global scope
int a, b, res;

int com(int res) {
    res = (a = 5, cout << "Nilai a: " << a << endl, b = 3, cout << "Nilai b: " << b << endl, (a*b));
    return res;
}

int main() {
    // Variabel
    int a, b, hasil;

    // Normal code
    cout << "#==Default==#" << endl;
    a = 5;
    b = 3;
    hasil = a*b;
    cout << "Nilai a: " <<a << endl;
    cout << "Nilai b: " << b << endl;
    cout << hasil << endl;

    // Dengan comma operator
    cout << "\n#==Comma Operator==#" << endl;
    hasil = (a = 5, cout << "Nilai a: " << a << endl, b = 3, cout << "Nilai b: " << b << endl, (a*b));
    cout << hasil << endl;

    // Pengaplikasian dengan fungsi kembalian
    hasil = 0; // Mereset nilai
    cout << "\n#==Return Function==#" << endl;
    cout << com(hasil) << endl;

    return 0;
}