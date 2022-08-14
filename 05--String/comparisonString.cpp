#include <iostream>
#include <string>

/* using namespace std; */  // !--dapat menulis seperti ini tetapi tidak terlalu disarankan

using std::cout;
using std::cin;
using std::endl;

int main() {
    // Variabel
    std::string input;
    std::string string("kipli");

    // Perbandingan string
    cout << "#==Tebak nama saya==#" << endl;

    while(true) {
        cout << "Masukan nama: ";
        cin >> input;

        if (input == string) {
            cout << "Tebakan anda benar!" << endl;
            break;
        }
        cout << "Salah!!!!!!!!!!\nSilahkan coba lagi" << endl;
    }

    return 0;
}