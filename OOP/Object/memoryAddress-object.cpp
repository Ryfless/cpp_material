#include <iostream>             // Memori address adalah suatu metode untuk menyimpan suatu data di tempat yang berbeda
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// Class kosong
class blank {

};

// Class dengan isi
class contain {
    public:
        int a;  // Data integer berukuran 4 byte
        int b;  // 4 byte
        double dec; // 8 byte
        string x; // 32 byte
};

class Game {
    public:
        string judul;

        Game(const char* judul) {
            Game::judul = judul;
        }
};

int main() {
    // Besaran memori sebuah object
    cout << "Ukuran class kosong: " << sizeof(blank) << " byte" << endl;
    cout << "Ukuran class dengan isi: " << sizeof(contain) << " byte" << endl;  // Ukuran dari tiap data dalam class akan di jumlahkan

    // Address
    string a;
    string b;
    Game game1("Far cry");
    Game* game2 = new Game("Mario kart");
    string c;
    string d;

    cout << "\nAddress" << endl;
    cout << &a << endl;
    cout << &b << endl;
    cout << &game1 << endl;
    cout << game2 << " (heap memory)" << endl;  // Addressnya akan berbeda
    cout << &c << endl;
    cout << &d << endl;
    
    return 0;
}