#include <iostream>     // Cascading berfungsi untuk mempersingkat pengetikan method
#include <string>

using std::cout;
using std::cin;
using std::endl;

class Hero {
    private:
        std::string role;
        std::string weapon;
        std::string spell;
    public:
        Hero() {
            role = "Mage"; // Teknik implicit
            this->weapon = "Tome of Infinity"; // Teknik explicit dengan arrow operator
            (*this).spell = "Blizzard"; // Teknik dereferencing
        }

        // Cascade function calls
        Hero& setRole(const char* role) {  // Dengan membuat fungsi return pointer this
            this->role = role;
            return *this;
        }

        Hero& setWeapon(const char* weapon) {
            (*this).weapon = weapon;
            return *this;
        }

        Hero& setSpell(const char* spell) {
            this->spell = spell;
            return *this;
        }

        void show() {
            cout << "Role: " << role << endl;
            cout << "Weapon: " << this->weapon << endl;
            cout << "Spell: " << (*this).spell << endl;
        }
};

int main() {
    Hero* hero1 = new Hero();
    hero1->show();
    cout << endl;

    // Set hero (cara normal)
    hero1->setRole("Rogue");
    hero1->setWeapon("Legendary Blooded Dagger");
    hero1->setSpell("Invicibility");
    hero1->show();
    cout << endl;

    // Dengan cascading
    hero1->setRole("Knight").setWeapon("Excalibur Sword").setSpell("Berserk Rage");
    hero1->show();

    return 0;
}