#include <iostream>
using namespace std;

int main() {
    // Variabel
    int i;
    int dadu[6] = {1,2,3,4,5}; // Contoh penulisan basic array
    double stopwatch[6] = {1.5, 2.8, 3.5, 4.2, 54.0, 6.7};
    string waifu[6] = {"ganyu", "hu tao", "keqing", "eula", "ayaka", "raiden shogun"};

    // Memanggil array
    cout << "Pilih urutan 0-5: "; // Urutan array dimulai dari 0
    cin >> i;

    // Mencegah adanya Error
    if (i < 0 || i > 5) {
        cout << "Error" << endl;
    } else {
        cout << dadu[i] << endl;
        cout << stopwatch[i] << endl;
        cout << waifu[i] << endl;
    }
    cout << endl;

    // Memanipulasi nilai array
    int x;
    double y;
    string z;

    // Urutan mana yang ingin dirubah
    cout << "Merubah urutan ke: ";
    cin >> i;

    // Mengubah nilai urutan array
    if (i < 0 || i > 5) {
        cout << "Error" << endl;
    } else {
        cout << "Merubah dadu: ";
        cin >> x;
        dadu[i] = x;

        cout << "Merubah stopwatch: ";
        cin >> y;
        stopwatch[i] = y;

        cout << "Merubah waifu: ";
        cin >> z;
        waifu[i] = z;
    } 
    
    cout << endl;

    // Mengetest kembali
    cout << "Pilih urutan 0-5: ";
    cin >> i;

    if (i < 0 || i > 5) {
        cout << "Error" << endl;
    } else {
        cout << dadu[i] << endl;
        cout << stopwatch[i] << endl;
        cout << waifu[i] << endl;
    }

    return 0;
}