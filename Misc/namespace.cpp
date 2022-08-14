#include <iostream>     // namespace untuk membedakan nama variabel yang sama

// Contoh membuat namespace
namespace org {  // penamaan namespace
    // Member
    int id;
    std::string nama;

    // fungsi pada namespace
    int quad(int a) {
        return a*a;
    }
}
// using namespace org  // (dapat digunakan seperti ini agar tidak perlu menambah org:: pada member)

using std::cout;
using std::cin;
using std::endl;

int main() {
    // Default variabel
    int id = 49;
    std::string nama = "hernat";

    org::id = 24;
    org::nama = "dadang";

    cout << "Default" << endl;
    cout << id << endl;
    cout << nama << endl;

    cout << "\nMember org" << endl;
    cout << org::id << endl;
    cout << org::nama << endl;
    cout << org::quad(12) << endl;

    return 0;
}