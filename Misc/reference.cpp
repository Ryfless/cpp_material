#include <iostream>  // Reference akan menyambungkan nilai beberapa variabel yang berbeda

using std::cout;
using std::cin;
using std::endl;

// Fungsi reference
void kuadrat(int &);

int main() {
    // Variabel
    int a = 5;
    
    cout << "Nilai a: " << a << endl;
    cout << " Address a: " << &a << endl;

    // Reference
    int &b = a;

    cout << "Nilai b: " << b << endl;
    cout << " Address b: " << &b << endl;

    cout << endl;

    // Manipulasi nilai
    a = 10;
    cout << "Nilai a: " << a << endl;
    cout << "Nilai b: " << b << endl;

    b = 25;
    cout << "Nilai a: " << a << endl;
    cout << "Nilai b: " << b << endl;

    cout << endl;

    // Memanipulasi nilai dengan fungsi void
    kuadrat(a);
    cout << "Nilai a: " << a << endl;
    cout << "Nilai b: " << b << endl;

    return 0;
}

void kuadrat(int &b) {
    b = b*b;
}