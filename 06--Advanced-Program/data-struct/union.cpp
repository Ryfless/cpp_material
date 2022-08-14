#include <iostream>             // Union berfungsi untuk menyatukan nilai pada tipe data yang berbeda

/* using namespace std; */  // !--dapat menulis seperti ini tetapi tidak terlalu disarankan

using std::cout;
using std::cin;
using std::endl;

union data {
    int a;
    float b;
    char c[4];
};

int main() {
    // Variabel
    data uni;
    double input;
    char toChar, status;

    // Looping syntax
    while(true) {
        cout << "Masukan value data a (int): ";
        cin >> input;
        uni.a = input;
        cout << " Data a: " << uni.a << endl;
        cout << " Data b: " << uni.b << endl;
        cout << " Data c: " << uni.c  << endl;

        cout << "Masukan value data b (float): ";
        cin >> input;
        uni.b = input;
        cout << " Data a: " << uni.a << endl;
        cout << " Data b: " << uni.b << endl;
        cout << " Data c: " << uni.c  << endl;

        cout << "Masukan value data c (char): \n";
        cin >> toChar;
        uni.c[0] = toChar;
        cin >> toChar;
        uni.c[1] = toChar;
        cin >> toChar;
        uni.c[2] = toChar;
        cin >> toChar;
        uni.c[3] = toChar;
        cout << " Data a: " << uni.a << endl;
        cout << " Data b: " << uni.b << endl;
        cout << " Data c: " << uni.c  << endl;
        
        cout << "\nKonfirmasi? [y/n]: ";
        cin >> status;
        if (status == 'y' || status == 'Y'){
            break;
        }
    }

    cout << "\nProgram selesai..." << endl;
    
    return 0;
}