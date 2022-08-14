#include <iostream>         // Ternary operator adalah simplification dari if else
#include <string>

/* using namespace std; */  // !--dapat menulis seperti ini tetapi tidak terlalu disarankan

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    // Variabel
    int a = 5;
    int b;
    string res1, res2, out;
    res1 = "Icikiwir";
    res2 = "Aselole";

    cout << "Masukan nilai: ";
    cin >> b;

    out = (a < b) ? res1 : res2;  // nilai_out = (*kondisi) ? hasil if : hasil else
    cout << out << endl;

    // ekuivalen dengan
    if (a < b)  {
        cout << res1 << endl;
    } else {
        cout << res2 << endl;
    }

    return 0;
}