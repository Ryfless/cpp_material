#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

// Contoh penggunaan class
class Game {  // Template
    public:     // Access modifier (public, private, protected)
        // Data
        std::string judul;
        std::string genre;
};

int main() {
    // Object
    Game game1, game2;

    game1.judul = "Blocky Go";
    game1.genre = "Platformer";
    game2.judul = "Dodgeball";
    game2.genre = "Sport";

    // Print
    cout << "Game 1:\n" << game1.judul << "\n" << game1.genre << endl;
    cout << "\nGame 2:\n" << game2.judul << "\n" << game2.genre << endl;

    return 0;
}