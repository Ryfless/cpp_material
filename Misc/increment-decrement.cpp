#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    // Variabel
    int a = 5;
    int b = 5;
    int x;

    // Increment adalah simplyfication operator pertambahan 1 dan decrement adalah pengurangan 1
    x++;
    x--;
    // equivalen dengan
    x + 1;
    x - 1;

    // Postincrement
    cout << a << endl; // before
    cout << a++ << endl;  // Akan memprint var a terlebih dahulu baru ditambah
    cout << a << endl; // after

    cout << endl;
    
    // Preincrement
    cout << b << endl;
    cout << ++b << endl;
    cout << b << endl;

    return 0;
}