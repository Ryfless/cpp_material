#include <iostream>     // Constructor digunakan untuk mempersingkat pemasukan data
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// Class constructor
class Siswa {
    public:
        // Data
        string nama;
        string hobi;
        int usia;

        // Constructor
        Siswa(auto inputN, auto inputU, auto inputH) {
            Siswa::nama = inputN;
            Siswa::usia = inputU;
            Siswa::hobi = inputH;

            // Print
            cout << Siswa::nama << endl;
            cout << Siswa::usia << endl;
            cout << Siswa::hobi << endl;
        }
};

int main() {
    cout << "Data siswa 1:" << endl;
    Siswa siswa1 = Siswa("Jaki hermawan", 16, "Menyatir");

    cout << "\nData siswa 2:" << endl;
    Siswa siswa2 = Siswa("Kipli firmanyah", 15, "Turu");

    return 0;
}