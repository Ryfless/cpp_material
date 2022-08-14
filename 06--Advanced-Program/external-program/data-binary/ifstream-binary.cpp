#include <iostream>        // Membaca data binary external
#include <string>
#include <fstream>

/* using namespace std; */  // !--dapat menulis seperti ini tetapi tidak terlalu disarankan

using std::cout;
using std::cin;
using std::endl;

int main() {
    // File
    std::fstream myFile;
    int a, intVal;
    float fVal;
    char charVal;

    cout << "<Data Integer>" << endl;
    
    myFile.open("program-file/data1.bin", std::ios::in | std::ios::binary);
    // Tanpa menconvert nilai binary
    myFile >> a;
    cout << "Nilai fek: " << a << endl;  // Akan memasukan nilai dari decoded text pada file bin
    myFile.close();

    myFile.open("program-file/data1.bin", std::ios::in | std::ios::binary);
    // Membaca bin file
    myFile.read(reinterpret_cast<char*>(&intVal), sizeof(intVal));
    cout << "Nilai ril: " << intVal << endl;
    myFile.close();
    
    myFile.open("program-file/data2.bin", std::ios::in | std::ios::binary);
    cout << "\n<Data Float>" << endl;
    myFile.read(reinterpret_cast<char*>(&fVal), sizeof(fVal));
    cout << "Nilai: " << fVal << endl;
    myFile.close();

    myFile.open("program-file/data3.bin", std::ios::in | std::ios::binary);
    cout << "\n<Data Char>" << endl;
    myFile.read(reinterpret_cast<char*>(&charVal), sizeof(charVal));
    cout << "Nilai: " << charVal << endl;
    myFile.close();

    return  0;
}