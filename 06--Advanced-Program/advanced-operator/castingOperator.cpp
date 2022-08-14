#include <iostream>             // Casting operator adalah merubah tipe data suatu variabel

/* using namespace std; */  // !--dapat menulis seperti ini tetapi tidak terlalu disarankan

using std::cout;
using std::cin;
using std::endl;

int main() {
    // Variabel
    int a = 5;
    float b = 17.89f;
    char c = 'c';

    // Default
    cout << "Operator int dengan float:" << endl;
    cout << a + b << endl; // int pada variabel a akan otomatis menjadi float
    // Ekuivalen dengan
    cout << (float)a + b << endl;
    // Menetapkan data int pada variabel a
    cout << a + (int)b << endl; // dengan merubah variabel b menjadi integer
    
    // Operator char dengan int
    cout << "Operator int dengan char" << endl;
    cout << c + a << endl; // Data pada char c akan dirubah menjadi integer
    cout << (int)c << endl;
    // Membuat kedua variabel menjadi char
    cout << (char)(c + a) << endl; // cdefgH
    return 0;
}