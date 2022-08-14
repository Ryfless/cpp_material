#include <iostream>
#include <string>
#include <fstream>

/* using namespace std; */  // !--dapat menulis seperti ini tetapi tidak terlalu disarankan

using std::cout;
using std::cin;
using std::endl;

int main() {
    // File
    std::ofstream myFile;
    std::string string1, string2;
    int a;

    // Debug console
    cout << "Program dimulai..." << endl;

    myFile.open("program-file/Data.txt", std::ios::trunc);
    myFile << "Hello World!\nIni adalah baris ke-dua\n" << endl;
    string1 = "data:";
    myFile << string1 << endl;
    string1 = "No";
    string2 = "Nama";
    myFile << string1 << "\t" << string2 << endl;

    cout << "Jumlah nomor pada list: ";
    cin >> a;
    getline(cin, string1);
    for (int i = 1; i <= a; i++) {
        cout << "Masukan nama ke-" << i << ": ";
        getline(cin, string1);
        myFile << i << "\t" << string1 << endl;
    }

    myFile.close();
    cout << "Program selesai..." << endl;

    return 0;
}