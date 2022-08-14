#include <iostream>     // typedef digunakan untuk merubah nama tipe data

using std::cout;
using std::cin;
using std::endl;

int main() {
    // typde def
    typedef int wilangan;      // typedef *tipe_data *nama_baru
    typedef std::string word;
    typedef char karakter[4];

    wilangan a = 5;
    word x = "Rill_cuy";
    karakter loli = {'n', 'y', 'c', 'u'};

    cout << a << endl;
    cout << x << endl;
    cout << loli[2] << loli[3] << loli[0] << loli[0] << loli[1] << endl;
    return 0;
}