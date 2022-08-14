#include <iostream>     // Berbagai cara membuat object
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// Class dengan constructor
class wCon {
    public:
        string data;

        wCon(const char* data) {
            wCon::data = data;
        }

        void print() {
            cout << "Aku suka " << wCon::data << endl;
        }
};

// Class tanpa constructor
class noCon {
    public:
        string data;

        void print() {
            cout << "Aku suka " << noCon::data << endl;
        }
};

int main() {
    // 1. Membuat object tanpa constructor
    noCon object1;
    object1.data = "C++";
    object1.print();

    // 2. Membuat object dengan constructor
    wCon object2 = wCon("Pemrograman");
    object2.print();

    // 3. Cara lain membuat object dengan constructor
    wCon object3("Animeh");
    object3.print();

    // 4. Membuat object pada heap memory
    wCon* object4 = new wCon("Kamu :3");
    // cara printing
    (*object4).print();  // dengan cara dereferencing
    object4->print();  // dengan arrow operator (mapping function atau attribute pada pointer)

    
    // Perbedaan cara no 2 dan 4
    /*  Don't:
        wCon object5;
        object = wCon("Pisang");
    */

    // Do
    wCon* object5;
    object5 = new wCon("Pisang");
    object5->print();

    return 0;
}