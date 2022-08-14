#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Fungsi pointer
void kubik(int *valPtr) {
    *valPtr = (*valPtr) * (*valPtr);
}

int main() {
    // Variabel
    int a = 5;

    // Pointer
    int *Ptr = &a; // & adalah address suatu variabel

    cout << "Nilai a: " << a << endl;
    cout << "Address: " << Ptr << endl; // address ptr sama dengan a
    cout << "Nilai ptr: " << *Ptr << endl; // begitupun dengan nilainya

    // Dereferencing
    a = a+1; // variabel a dimanipulasi
    cout << "a manipulasi: " << *Ptr << endl << endl; // maka nilai dari pointer juga akan berubah

    // Fungsi tanpa kembalian yang merubah nilai variabel
    cout << "Default: " << a << endl;
    kubik(&a);

    cout << "Fungsi pointer: " << a << endl;

    return 0;
}