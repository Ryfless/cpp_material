#include <iostream>
using namespace std;

int kuadrat(int a) { // membuat fungsi baru
    int val = a * a;
    return val; // kembalian nilai fungsi
}

// atau
int kubik(int a) {
    return a*a*a;
}

// Operasi logika
bool konjungsi(bool a, bool b) {
    return a && b;
}

bool disjungsi(bool a, bool b) {
    return a || b;
}

bool negasi(bool a) {
    return !a;
}

// Prototype fungsi
double Lling(double a);
double Kling(double a);

int main() {
    // Variabel
    int a;
    bool x, y;
    double z;

    // Fungsi kuadrat
    cout << "Kuadrat: ";
    cin >> a;
    cout << a << "^" << 2 << " = " << kuadrat(a) << endl << endl;

    // Fungsi kubik
    cout << "Panjang rusuk kubus: ";
    cin >> a;
    cout << "Volumenya: " << kubik(a) << endl << endl;

    // Fungsi logika
    cout << "x bernilai: ";
    cin >> x;
    cout << "y bernilai: ";
    cin >> y;
    cout << "x" << " AND " << "y" << " = " << konjungsi(x, y) << endl;
    cout << "x" << " OR " << "y" << " = " << disjungsi(x, y) << endl;
    cout << "~" << "x" << " = " << negasi(x) << endl;
    cout << "~" << "y" << " = " << negasi(y) << endl << endl;

    // Fungsi lingkaran
    cout << "Jari-jari: ";
    cin >> z;
    cout << "Luas lingkaran: " << Lling(z) << endl;
    cout << "Keliling lingkaran: " << Kling(z) << endl;

    return 0;
}

// Lanjutan Prototype fungsi
double Lling(double a) {
    return (3.14*a)*a;
}

double Kling(double a) {
    return 3.14*(2*a);
}