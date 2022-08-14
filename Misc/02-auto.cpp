#include <iostream>     // Auto adalah sebuah tipe data yang akan menyesuaikan nilai variabelnya
#include <string>
#include <typeinfo> // Type info berfungsi untuk mengetahui tipe data sebuah variabel

using std::cout;
using std::cin;
using std::endl;

// Fungsi maksimum dengan template
template<typename T, typename U>
auto max(T a, U b) {    // Tipe data fungsi adalah auto agar nilai kembalian berupa tipe data hasil
    return (a > b) ? a:b;
}

int main() {
    // Contoh pengaplikasian auto (!--cara seperti ini tidak terlalu direkomendasikan)
    auto a = "aku";
    auto b = 'R';
    auto c = 25;
    auto d = 15.68;
    auto e = 67.5f;
    auto f = false;

    cout << a << "\tTipe: " << typeid(a).name() << endl;
    cout << b << "\tTipe: " << typeid(b).name() << endl;
    cout << c << "\tTipe: " << typeid(c).name() << endl;
    cout << d << "\tTipe: " << typeid(d).name() << endl;
    cout << e << "\tTipe: " << typeid(e).name() << endl;
    cout << f << "\tTipe: " << typeid(f).name() << endl;

    cout << "==============================" << endl;

    auto maks = max(15, 16.7);
    cout << maks << "\tTipe: " << typeid(maks).name() << endl;

    return 0;
}