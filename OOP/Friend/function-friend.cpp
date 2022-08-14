#include <iostream>     // Friend function digunakan untuk mengambil attribute public maupun non-public
#include <string>

using std::cout;
using std::cin;
using std::endl;

class Mage;

class Knight {
    private:
        std::string name;
        double baseAtk;
    public:
        Knight(const char* name) {
            this->name = name;
            this->baseAtk = 100;
        }

        friend bool compare(const Knight& hero1, const Mage& hero2);
        friend bool compare(const Mage& hero2, const Knight& hero1);
};

class Mage {
    private:
        std::string name;
        double baseAtk;
    public:
        Mage(const char* name) {
            this->name = name;
            this->baseAtk = 50;
        }

        friend bool compare(const Knight& hero1, const Mage& hero2);
        friend bool compare(const Mage& hero2, const Knight& hero1);
};

bool compare(const Knight& hero1, const Mage& hero2) {
    cout << hero1.name << " memiliki atk yang lebih besar dibanding " << hero2.name << endl;

    return hero1.baseAtk > hero2.baseAtk;
}

bool compare(const Mage& hero2, const Knight& hero1) {
    cout << hero2.name << " memiliki atk yang lebih besar dibanding " << hero1.name << endl;

    return hero2.baseAtk > hero1.baseAtk;
}

int main() {
    Knight hero1 = Knight("Thorin");
    Mage hero2 = Mage("Gandalf");

    cout << compare(hero1, hero2) << endl;
    cout << compare(hero2, hero1) << endl;

    return 0;
}