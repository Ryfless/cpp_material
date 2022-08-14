#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

class User {
    // Attribute
    public:
        std::string namePublic;
    
    private:
        std::string namePrivate;

    // Method dan Constructor
    public:
        User(const char* name) {    // Constructor harus berakses public karena akan diakses diluar class
            this->namePublic = name;
            this->namePrivate = name;
        }

        void show() {
            cout << "Nama Public: " << this->namePublic << endl;
        }

        // Method public dapat menggunakan attribute private
        void display() {
            cout << "Nama Private: " << this->namePrivate << endl;
        }

    private:
        void showPrivate() {
            cout << "Nama Private: " << this->namePrivate << endl;
        }
};

int main() {
    User* object1 = new User("Mardy");
    object1->show();
    // object1->showPrivate();  // Akan error dikarenakan method berakses private

    // Eksekusi attribute private
    User* object2 = new User("Dandy");
    object2->display();
       
    return 0;
}