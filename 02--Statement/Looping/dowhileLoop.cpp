#include <iostream>
using namespace std;

int main() {
    // Variabel
    int a, b;

    a = 1;
    do {
        cout << a << endl;
        a++;
    }while(a <= 10); // Syarat untuk berhenti
    
    // Contoh untuk mengatur batas dengan input
    a = 1;
    cout << "Masukan Berapa Icikiwir yang ingin di eksekusi: ";
    cin >> b;
    do {
        cout << "Icikiwir " << a << endl;
        a++;
    }while(a <= b);

    return 0;
}