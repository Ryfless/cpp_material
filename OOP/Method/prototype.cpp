#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

class User {
    public:
        std::string nama;

        // Constructor
        User(const char*);  // Prototyping
        void show();
        std::string getName();
        void change(std::string); 
};

// Main function
int main() {
    std::string input;

    User* object = new User("Ahmad");
    object->show();

    cout << "Get name: " << object->getName() << endl;
    cout << "Rubah nama: ";
    getline(cin, input);
    object->change(input);
    object->show();

    return 0;
}

// Penjabaran method
User::User(const char* nama) {
    this->nama = nama;
}

void User::show() {
    cout << "Nama user: " << this->nama << endl;
}

std::string User::getName() {
    return this->nama;
}

void User::change(std::string nama) {
    this->nama = nama;
}
