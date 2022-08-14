#include <iostream>
#include <string>

/* using namespace std; */  // !--dapat menulis seperti ini tetapi tidak terlalu disarankan

using std::cout;
using std::cin;
using std::endl;

int main() {
    // Variabel
    std::string string("NUGYS");
    int i;
    char change;
    std::string kata;

    cout << "Kata awal: " << string << endl << endl;

    // Mengambil karakter berdasarkan index
    cout << "Index ke-0: " << string[0] << endl;
    cout << "Index ke-1: " << string[1] << endl;
    cout << "Index ke-2: " << string[2] << endl;
    cout << "Index ke-3: " << string[3] << endl;
    cout << "Index ke-4: " << string[4] << endl;
    cout << "Index ke-5: " << string[5] << endl; // String tidak akan dieksekusi karena melebihi batas index

    // Merubah karakter pada index
    cout << "Index berapa yang ingin kamu ubah? : ";
    cin >> i;
    cout << "Input karakter pengubah: ";
    cin >> change;
    string[i] = change;
    cout << "\nKata berhasil diubah!\nKata menjadi: " << string << endl;

    // menyambung string (concatenation)
    std::string string_1(string + " " + "Membuat"); // cara 1
    cout << "Kalimat awal: " << string_1 << endl << endl;

    cout << "Kata yang ingin ditambahkan: "; // cara 2
    cin >> kata;
    std::string string_2(" " + kata);
    string_1.append(string_2);
    cout << string_1 << endl << endl;

    cout << "Kata yang ingin ditambahkan: "; // cara 3
    cin >> kata;
    std::string string_3(kata);
    string_1 += " " + string_3;
    cout << "\nKalimat Akhir: " << string_1 << endl;

    return 0;
}