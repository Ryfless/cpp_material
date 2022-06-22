#include <iostream>
using namespace std;

// Fungsi tanpa kembalian
void print(int x) {
    cout << x;
}

void print(string x) {
    cout << x;
}

// Prototype Fungsi
void printLn(int x);
void printLn(string x);

// Main function
int main() {
    // Variabel
    int a = 2;

    // Menampilkan data integer
    print(a); print(" ");
    printLn(a);

    // Menampilkan data string
    print("Hello World!"); print(" ");
    printLn("Hello World!");

    return 0;
}

void printLn(int x) {
    cout << x << endl;
}

void printLn(string x) {
    cout << x << endl;
}

/*
    Walaupun memiliki nama fungsi yang sama akan tetapi sistem akan memakai tipe data yang sesuai
*/