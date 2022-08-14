#include <iostream>         // Contoh pengaplikasian I/O binary
#include <string>
#include <fstream>

/* using namespace std; */  // !--dapat menulis seperti ini tetapi tidak terlalu disarankan

using std::cout;
using std::cin;
using std::endl;
using std::ios;

struct Data {
    std::string nama;
    int usia;
    std::string hobi;
};

Data getData(int pos, std::fstream &myFile) {
    Data buffer;

    myFile.seekp((pos-1)*sizeof(Data));
    myFile.read(reinterpret_cast<char*>(&buffer), sizeof(Data));

    return buffer;
}

void writeData(Data siswa, std::fstream &myFile) {
    myFile.write(reinterpret_cast<char*>(&siswa), sizeof(Data));
}

void change(int pos, Data &buffer, std::fstream &myFile) {
    myFile.seekg((pos-1)*sizeof(Data));
    myFile.write(reinterpret_cast<char*>(&buffer), sizeof(Data));
}

int main() {
    // File
    std::fstream myFile;
    std::string input;

    myFile.open("program-file/dataSiswa.bin", ios::trunc | ios::out | ios::in | ios::binary);
    // Data
    Data siswa1, siswa2, siswa3, output;

    siswa1.nama = "Udin_Sudirman";
    siswa1.usia = 17;
    siswa1.hobi = "Memancing_perkara";

    siswa2.nama = "Kipli_Firmansyah";
    siswa2.usia = 15;
    siswa2.hobi = "Berhalu";

    siswa3.nama = "Icikiwir_Aselole";
    siswa3.usia = 19;
    siswa3.hobi = "Menyatir";

    // Keluaran data bin
    writeData(siswa1, myFile);
    writeData(siswa2, myFile);
    writeData(siswa3, myFile);

    // Mengubah data bin
    cout << "Masukan nama baru: ";
    getline(cin, input);
    siswa1.nama = input;  // Mengubah data struktur dengan input
    change(1, siswa1, myFile);

    output = getData(1, myFile);
    cout << "Nama: " << output.nama << endl;
    cout << "Usia: " << output.usia << " tahun" << endl;
    cout << "Hobi: " << output.hobi << endl;

    myFile.close();

    return 0;
}