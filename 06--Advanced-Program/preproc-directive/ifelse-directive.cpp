#include <iostream>

#define ID 1  // Ekspresi

// Kondisi
#if ID == 0
    #define PKM "Pikachu"  // Untuk if
#elif ID == 1
    #define PKM "Charizard" // Untuk else if
#else
    #define PKM "Eevee"  // Untuk else
#endif // Akhir statement

using std::cout;
using std::cin;
using std::endl;

int main() {
    // Print
    cout << "Pokemon yang dipilih: " << PKM << endl;

    return 0;
}