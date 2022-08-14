#include <iostream>
#include <array>
using namespace std;

int main() {
    // Variabel
    array<int, 6> dadu = {1, 2, 3, 4, 5, 6}; // Penulisan standard array

    // Eksekusi seluruh nilai array
    for(int i; i < 6; i++) {
        cout << dadu[i];
        cout << " Addressnya: " << &dadu[i] << endl;
    } 
    cout << endl;

    // Function pada standard array
    int a;
    // Untuk melihat ukuran index
    cout << "ukuran Index dadu: " << dadu.size() << endl;
    // Untuk melihat awal address
    cout << "Address awal: " << dadu.begin() << endl;
    // Untuk melihat akhir address
    cout << "Address akhir: " << dadu.end() << endl;
    // Untuk melihat nilai pada index
    cout << "Masukan Index: ";
    cin >> a;
    cout << "Nilai dadu[" << a << "]: " << dadu.at(a);

    return 0;
}