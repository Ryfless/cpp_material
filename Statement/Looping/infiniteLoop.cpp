#include <iostream>                     // !--Diusahakan untuk menghindari
using namespace std;

int main() {
    // Variabel
    int a, b, c = 0;

    // while
    while(a < 1) {
        cout << "0";
    } //atau
    while(a = 0) {
        cout << "0";
    }

    // do while
    do {
        cout << "0";
    }while(a < 1);

    // for
    for(int i = 0; i > a; i++) {
        cout << "0";
    }

    return 0;
}