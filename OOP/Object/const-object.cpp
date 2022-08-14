#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

class Hero {
    public:
        std::string name;
        int lvl;
    public:
        Hero(const char* name, int lvl) {
            this->name = name;
            this->lvl = lvl;
        }

        void show() {
            cout << "\nNama Player: " << this->name << endl;
            cout << "Level: " << this->lvl << endl;
        }

        // Fungsi untuk manampilkan object constant
        void showConst() const {
            cout << "\nNama Player: " << this->name << endl;
            cout << "Level: " << this->lvl << endl;
        }
};

int main() {
    // Object normal
    Hero* player1 = new Hero("Armstrong", 999);
    player1->show();
    player1->name = "Luigi";
    player1->show();

    // Object constant
    const Hero* player2 = new Hero("Tifa", 50);
    // player->show();  // Syntax error
    player2->showConst();
    // player2->name = "Raiden";  // Syntax error (Nilai tidak dapat dirubah)

    return 0;
}

/*  Kesimpulan
    - Jika objectnya tidak const, maka seluruh member dapat dipanggil
    - Jika objectnya constant, maka hanya method yang const saja yang dapat dipanggil
*/