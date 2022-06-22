#include <iostream>
using namespace std;

int main() {
    // Variabel
    int a;

    cout << "Masukan Kode Nuklir: ";
    cin >> a;

    // Statement
    switch(a) {
        case 117013: // Jika kamu menginput Nilai ini maka syntax dibawahnya akan berjalan
            cout << "GG Lu bang" << endl;
            break; // Untuk menghentikan Eksekusi
        case 214045:
            cout << "Asw luwhh" << endl;
            break;
        case 351090:
            cout << "My man" << endl;
            break;
        default:
            cout << "Error" << endl;
    }

    return 0;
}