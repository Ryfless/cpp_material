#include <iostream>
#include <string>

// External definition
#include "class.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    std::string input;

    Siswa* siswa1 = new Siswa("Sarah");
    siswa1->show();

    cout << "Rubah nama: ";
    getline(cin, input);
    siswa1->change(input);
    siswa1->show();

    return 0;
}