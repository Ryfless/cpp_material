#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main() {
    // Variabel
    char nama[5] = {'c', 'l', 'a', 'r', 'a'}; // Untuk membuat kata tanpa string
    std::string namaS = "kipli"; // Memasukan nilai variabel secara umum
    std::string string("curut"); // Penulisan pada standard string
    char status;

    cout << nama << endl;
    cout << namaS << endl;
    cout << string << endl << endl;

    // Memasukan input string
    cout << "#==Mengubah Nama==#\n";
    cout << "Namamu sekarang adalah: " << string << endl;

    // Looping input
    while(true) {
        
        cout << "Masukan input untuk mengubah nama: ";
        cin >> string;
        cout << "Namamu sekarang adalah: " << string << endl;
        cout << "Konfirmasi? [y/n]: ";
        cin >> status;

        // Untuk menghentikan loop
        if (status == 'y' || status == 'Y') {
            break;
        }
    }

    // Hasil akhir
    cout << "\nNama akhirmu adalah: " << string << endl;

    return 0;
}