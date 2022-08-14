#include <iostream>
using namespace std;

int main() {
    // Variabel
    int cacah[] = {0, 1, 2, 3, 4};

    // Looping normal
    for(int i; i < 5; i++) { // !--cara ini tidak di rekomendasikan karena harus mengetahui batas index arraynya
        cout << cacah[i] << endl;
        cout << "  Addressnya: " << &cacah[i] << endl;
    }
    cout << endl;

    // Looping array
    for(int cacahArray : cacah) {
        cout << cacahArray << endl;
        cout << "  Addressnya: " << &cacahArray << endl; // addressnya akan sama
        cacahArray = 9; // Tak berfungsi
    }

    cout << endl << "          <Array Reference>" << endl;
    
    // Untuk memanipulasi nilai array
    for(int &cacahRef : cacah) { // Gunakan Referensi
        cout << cacahRef << endl;
        cout << " Addressnya: " << &cacahRef << endl; // Addressnya akan berbeda
    }
    cout << endl;

    // Input manipulasi
    int a;
    cout << "Masukan nilai manipulasi (ditambah): ";
    cin >> a;
    cout << endl << "          <Nilai array yang sudah di manipulasi>" << endl ;

    for(int &cacahRef : cacah) {
        cacahRef += a;
        cout << cacahRef << endl;
        cout << " Addressnya: " << &cacahRef << endl;
    }

    return 0;
}