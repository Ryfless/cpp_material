#include <iostream>             // Pengaplikasian array dalam absen siswa
#include <algorithm>
#include <array>

using std::cout;
using std::cin;
using std::endl;

// konstan variabel
const int Asize = 5;

void printA(std::array <std::string, Asize> &bil) {
    cout << "\nDaftar siswa: [ ";
    for(std::string &a : bil) {
        cout << a << " ";
    }
    cout  << "]" << endl;
}

// Main function
int main() {

    // Variabel
    std::array<std::string, Asize>array;
    std::string nama;
    std::string search;
    bool found;
    char status;


    cout << "Masukan nama siswa yang hadir: \n";

    // Input nama manual
    /*
        cin >> nama;
        array[0] = nama;
        cin >> nama;
        array[1] = nama;
        cin >> nama;
        array[2] = nama;
        cin >> nama;
        array[3] = nama;
        cin >> nama;
        array[4] = nama;
    */

    // Input nama dengan loop
    for(int i = 0; i < Asize; i++) {
        cin >> nama;
        array[i] = nama;
    }

    printA(array);

    // Sort
    std::sort(array.begin(), array.end());
    cout << "\n#==Sesudah di sortir==#" << endl;
    printA(array);
    cout << endl;

    // Search
    do {
        cout << "cari nama siswa: ";
        cin >> search;
        found = std::binary_search(array.begin(), array.end(), search);

        if (found) {
            cout << "Hadir" << endl;
        } else {
            cout << "Tidak hadir" << endl;
        }
        // masukan input untuk mengulang pencarian
        cout << "cek lagi? [y/n]: ";
        cin >> status;
    } while(status == 'y' || status == 'Y');

    // Akhir program
    cout << "\n\nProgram berakhir..." << endl;
    
    return 0;
}