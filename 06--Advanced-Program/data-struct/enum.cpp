#include <iostream>         // Enum untuk membuat data struct seperti array
#include <string>

/* using namespace std; */  // !--dapat menulis seperti ini tetapi tidak terlalu disarankan

using std::cout;
using std::cin;
using std::endl;
using std::string;

enum waifu {ganyu, keqing, jean, hutao, raiden, ayaka, udin}; // Nilai dalam range enum harus berupa string
enum dadu {a = 1, b = a+1, c = b+1, d = c+1, e = d+1, f = e+1}; // Tiap nilai dalam range dapat dimanipulasi nilai indexnya

int main() {
    // Variabel
    waifu index;
    string input;

    // Masukan nilai range waifu
    index = udin;
    cout << "Posisi waifu index berada di " << index << endl;

    // Untuk membuat ekspresi dalam enum
    switch(index) {
        case 0:
            cout << "Waifu gwejjj" << endl;
            break;
        case 1:
            cout << "Wangy wangy!!!" << endl;
            break;
        case 2:
            cout << "ughhhh mantap" << endl;
            break;
        case 3:
            cout << "Yaaahoooo!!!" << endl;
            break;
        case 4:
            cout << "yess moommmyy :3" << endl;
            break;
        case 5:
            cout << "Anything for you, my lady..." << endl;
        default:
            cout << "Error" << endl;
    }

    // Pemanggilan data dadu
    cout << "\n\n#==Dadu Putar==#" << endl;

    dadu roll1;
    roll1 = a;
    cout << roll1 << endl;
    roll1 = b;
    cout << roll1 << endl;
    roll1 = c;
    cout << roll1 << endl;
    roll1 = d;
    cout << roll1 << endl;
    roll1 = e;
    cout << roll1 << endl;
    roll1 = f;
    cout << roll1 << endl << endl;

    // Perubahan nilai index
    enum dadu {a = a*2, b = b*2, c = c*2, d = d*2, e = e*2, f = f*2}; // Nilai sebelumnya di kali 2
    dadu roll2; // Variabel data harus diubah

    cout << "#==Dadu Putar==#" << endl;
    roll2 = a;
    cout << roll2 << endl;
    roll2 = b;
    cout << roll2 << endl;
    roll2 = c;
    cout << roll2 << endl;
    roll2 = d;
    cout << roll2 << endl;
    roll2 = e;
    cout << roll2 << endl;
    roll2 = f;
    cout << roll2 << endl << endl;

    return 0;
}