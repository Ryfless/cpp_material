#include <iostream>
using namespace std;

int main() {
    // Variabel
    int a;

    a = 3;
    while(a <= 10) { // syarat 
        cout << a << endl; // Syntax yang akan di eksekusi
        a++; // Batasan
    }
    
    a = 15;
    while(a >= 10) {
        cout << a << endl;
        a--;
    }

    cout << "Program Selesai" << endl;

    return 0;
}