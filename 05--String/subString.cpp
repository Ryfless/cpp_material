#include <iostream>
#include <string>

/* using namespace std; */  // !--dapat menulis seperti ini tetapi tidak terlalu disarankan

using std::cout;
using std::cin;
using std::endl;

int main() {
    // Variabel
    int i, p;
    std::string string_1("Jarut suka bermain bola");
    std::string string_2("Hertod adalah orang yang ramah");
    std::string string_3("Raphael wajahnya sangat cantik");
    std::string sub_1, sub_2, sub_3, kata;

    cout << "Kalimat ke-1: " << string_1 << endl;
    cout << "Kalimat ke-2: " << string_2 << endl;
    cout << "Kalimat ke-3: " << string_3 << endl;

    // Mengambil kata dalam kalimat
    cout << "\n#==Mengambil kata==#" << endl;
    cout << "Masukan index dan panjang untuk kalimat ke-1: ";       // *Template: 1 = 0 6
    cin >> i >> p;                                                  //           2 = 7 18
    sub_1 = string_1.substr(i, p);                                  //           3 = 17 13
    cout << "Masukan index dan panjang untuk kalimat ke-2: ";
    cin >> i >> p;
    sub_2 = string_2.substr(i, p);
    cout << "Masukan index dan panjang untuk kalimat ke-3: ";
    cin >> i >> p;
    sub_3 = string_3.substr(i, p);

    // Hasil kalimat
    cout << "\nKalimat akhir: " << sub_1 << sub_2 << sub_3 << endl;

    // Mencari posisi dari substring
    string_1 += " " + string_2 + " " + string_3; // Untuk menyatukan seluruh kalimat
    cout << "Kata yang ingin dicari: ";
    cin >> kata;
    cout << "\n" << kata << " berada di: " << string_1.find(kata) << endl;
    
    // Untuk mencari posisi jika kata lebih dari 1
    int s = string_1.find(kata);
    cout << kata << " berada di: " << string_1.find(kata, s + 1) << endl << endl;

    // Untuk mencari posisi dari belakang
    int rs = string_1.rfind(kata);
    cout << kata << " berada di: " << rs << endl;
    cout << kata << " berada di: " << string_1.rfind(kata, rs - 1) << endl;

    return 0;
}