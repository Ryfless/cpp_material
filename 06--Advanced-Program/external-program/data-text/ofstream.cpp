#include <iostream>
#include <string>
#include <fstream>      // ofstream, ifstream, fstream(campuran keduanya)

/* using namespace std; */  // !--dapat menulis seperti ini tetapi tidak terlalu disarankan

using std::cout;
using std::cin;
using std::endl;

int main() {
    // File
    std::ofstream myFile;   // ofstream berfungsi untuk membuat file external baru
    std::string string;
    int x = 2;
    int input;

    /* fungsi dalam ofstream:
        ios::out = default, overwrite output
        ios::trunc = default, membuat file baru jika tidak ada & akan menghapus file yang sudah ada
        ios::app = menambah masukan pada akhir baris (app = append)
    */

    // Debug console
    cout << "Program dimulai..." << endl;

    // menulis file baru
    myFile.open("program-file/data1.txt", std::ios::out);
    myFile << "Menulis data baru, namecode: <Icikiwir>\n";    // sama seperti perintah cout akan tetapi 
    cout << "Tulis text untuk data1: ";                     // tidak akan muncul di console melainkan akan menuliskan di file baru
    getline(cin, string);
    myFile << string;
    // Menutup program external                          
    myFile.close();

    myFile.open("program-file/data2.txt", std::ios::trunc);
    myFile << "Menulis data 2, namecode: <aselole>\n";
    myFile << x; // dapat juga menuliskan data integer
    myFile.close();

    myFile.open("program-file/data3.txt", std::ios::app);
    cout << "Input jumlah penulisan data3: ";
    cin >> input;
    for (int i = 0; i < input; i++) {
        myFile << "Menambahkan ke-" << i << endl;
        int y = 5;
        myFile << "Menulis data 3, namecode: <prikitiew>" << endl;
        myFile << y + 1 << endl; // integer pada external text akan diconvert menjadi string maka nilai tidak akan berubah
    }
    myFile.close();

    cout << "Program selesai..." << endl;

    return 0;
}