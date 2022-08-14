#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int i,  a = 0;

    cout << "Hello world!" << endl;

    // Rainbow color printing
    while(true) {
        i++;
        a++;
        if (i == 5) {
            system("color a");
        } else if (i == 10) {
            system("color b");
        } else if (i == 15) {
            system("color c");
            i = 0;
        }

        // Batasan
        if (a == 250) {
            system("color 7");
            system("cls");
            break;
        }
    }

    cout << "Program selesai..." << endl;

    return 0;
}