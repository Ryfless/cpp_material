#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

class Hero {
    private:
        std::string name;
        double atk;
        double exp;
        int lvl;

    public:
        Hero(const char* name){
            this->name = name;
            this->atk = 100;
            this->exp = 0;
            this->lvl = 1;
        }

        // Getter, berarti akan membuat attribute menjadi read only
        std::string getName() {
            return this->name;
        }

        // Setter, write data ke class
        void addExp(int expval) {
            int maxExp = 100;
            this->exp += expval;
            if(this->exp >= maxExp) {   // Naik level
                cout << "Level Up!!" << endl;
                this->lvl++;
                this->atk += 100;
                this->exp = 0;
            }
        }

        void show() {
            cout << "Nama: " << this->name << "\n"
                    "Level: " << this->lvl <<
                    ", Exp: " << this->exp << "\n"
                    "Attack: " << this->atk <<
            endl;
        }
};

int main() {
    Hero* player1 = new Hero("Handrias");

    // Stat player
    cout << "<Status>" << endl;
    player1->show();
    cout << endl;

    cout << player1->getName() << endl;
    // player1->name = "Dandy";  // Tidak bisa diubah namanya

    // Menambah exp
    cout << "\n<Fight!>" << endl;
    player1->addExp(25);
    player1->show();
    cout << endl;
    player1->addExp(50);
    player1->show();
    cout << endl;
    player1->addExp(15);
    player1->show();
    cout << endl;
    player1->addExp(10);
    player1->show();
    cout << endl;
    player1->addExp(100);
    player1->show();

    cout << "\n<Stat akhir player>" << endl;
    player1->show();

    return 0;
}