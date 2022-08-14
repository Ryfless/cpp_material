#include <iostream>     // Default assignment yaitu menambah nilai pada parameter untuk menetapkan nilai default
#include <string>

using std::cout;
using std::cin;
using std::endl;

class Player {
    private:
        std::string name;
        double hp;
    public:
        // Constructor dengan default assignment
        Player(const char* name = "User", double hp = 250) {  // Menambah nilai default
            this->name = name;
            this->hp = hp;
        }

        void show() {
            cout << "\nNama Player: " << this->name << endl;
            cout << "Hitpoint: " << this->hp << endl;
        }
};

int main() {
    Player* player1 = new Player("Dantress", 500);  // Object memiliki nilai, sehingga nilai default akan diganti
    player1->show();

    Player player2 = Player();  // Akan mengambil semua nilai default
    player2.show();

    Player* player3 = new Player("Vergil");  // Hanya mengambil 1 nilai default
    player3->show();

    return 0;
}