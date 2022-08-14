#include <iostream>

#include "guard.h"
#include "content.h"
#include "content.cpp" // Menyambungkan 2 file cpp

using std::cout;
using std::cin;
using std::endl;

int main() {
    Pokemon PKM;
    PKM.Nama = "Lucario";
    PKM.ID = 4;
    
    // Print
    cout << PKM.Nama << " " << PKM.ID << endl;
    cout << STR << endl;  // Akan mengeksekusi STR pada header file content
    print("Hello world!");

    return 0;
}