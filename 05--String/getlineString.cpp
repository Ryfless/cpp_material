#include <iostream>
#include <string>

/* using namespace std; */  // !--dapat menulis seperti ini tetapi tidak terlalu disarankan

using std::cout;
using std::cin;
using std::endl;

int main() {
    // Variabel
    std::string string, str;

    // Perbedaan penginputan antara getline dan cin
    cout << "#==Diff Input Method==#" << endl;
    cout << "Input kalimat getline: ";
    std::getline(cin, string); // Pemasukan input dengan getline
    cout << "Kata yang dihasilkan: " << string << endl;

    cout << "\nInput kalimat cin: ";
    cin >> string; // Pemasukan input dengan cin
    cout << "Kata yang dihasilkan: " << string << endl;

    return 0;
}