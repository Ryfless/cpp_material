#include <iostream>        // Menulis data binary external
#include <string>
#include <fstream>

/* using namespace std; */  // !--dapat menulis seperti ini tetapi tidak terlalu disarankan

using std::cout;
using std::cin;
using std::endl;

int main() {
    // File
    std::fstream myFile;

    // Nilai asli dari data binary
    int num = 12345;
    float dec = 2.5f;
    char alpha = 'R';

    // Debug console
    cout << "Program dimulai..." << endl;

    // Mengeluarkan data integer
    myFile.open("program-file/data1.bin", std::ios::out | std::ios::binary);
    myFile.write(reinterpret_cast<char*>(&num), sizeof(num));  // file.write(reinterpret_cast<char*>(&variabel), sizeof(variabel));
    myFile.close();

    // Mengeluarkan data float
    myFile.open("program-file/data2.bin", std::ios::out | std::ios::binary);
    myFile.write(reinterpret_cast<char*>(&dec), sizeof(dec));
    myFile.close();

    // Mengeluarkan data char
    myFile.open("program-file/data3.bin", std::ios::out | std::ios::binary);
    myFile.write(reinterpret_cast<char*>(&alpha), sizeof(alpha));
    myFile.close();

    cout << "Program selesai..." << endl;

    return 0;
}