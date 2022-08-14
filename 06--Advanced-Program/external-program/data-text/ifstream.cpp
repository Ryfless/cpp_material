#include <iostream>        // Ifstream berfungsi untuk membaca file external
#include <string>
#include <fstream>

/* using namespace std; */  // !--dapat menulis seperti ini tetapi tidak terlalu disarankan

using std::cout;
using std::cin;
using std::endl;

int main() {
    // File
    std::ifstream myFile;
    std::string read, output, buffer;
    std::string nama;
    int a, no;
    bool isData = false;

    /* fungsi dalam ifstream:
        ios::in = default
        ios::ate = memulai dari akhir file
        ios::binary = membaca data binary
    */

    myFile.open("program-file/Data.txt");
    myFile >> read; // Memanggil kata dalam data text
    
    // Print di console
    cout << read << endl; // Akan memunculkan kata pertama dalam data text
    myFile >> read; // Gunakan perintah yang sama untuk membaca kata selanjutnya
    cout << read << endl;
    myFile.close();

    // Dengan membuka file baru maka pemasukan data akan direset
    cout << "\n<Reset>" << endl;
    myFile.open("program-file/Data.txt");
    myFile >> read; // Pemanggilan direset
    cout << read << endl;
    myFile.close();

    // Memanggil data spesifik
    cout << "\n<Memanggil kata>" << endl;
    myFile.open("program-file/Data.txt");
    cout << "Panggil kata ke: ";
    cin >> a;
    for (int i = 0; i < a; i++) {
        myFile >> read;
    }
    cout << "Kata yang didapat: " << read << endl;
    myFile.close();

    // Memanggil seluruh data
    cout << "\n<All>";
    myFile.open("program-file/Data.txt", std::ios::in);
    while(!isData) {  // Ketika data boolean bernilai false maka syntax akan berjalan
        getline(myFile, buffer); // Untuk memunculkan seluruh kalimat dalam baris
        output.append("\n" + buffer);
        if (buffer == "data:") { // Batasan pemunculan
            isData = true;
        }
    }
    cout << output << endl;

    // Memanggil list
    getline(myFile, buffer);
    cout << buffer << endl;
    int jmlh_data = 0; // Untuk mengetahui jumlah data dalam list

    while(!myFile.eof()) { // Ketika data pada myFile berakhir maka syntax juga berakhir (eof = end of file)
        myFile >> no;
        myFile >> nama;

        cout << no << "\t" << nama << endl;
        jmlh_data++;
    }
    cout << "\nJumlah data: " << jmlh_data << endl;
    myFile.close();

    return 0;
}