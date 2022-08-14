#include <iostream>
#include <string>

/* using namespace std; */  // !--dapat menulis seperti ini tetapi tidak terlalu disarankan

using std::cout;
using std::cin;
using std::endl;

int main() {
    // Variabel
    std::string string_1("ada icikiwir disini");
    std::string string_2("bersamamu membuatku bahagia");
    std::string string_3("gwej satirin luwh");
    std::string input;
    int swap, a, x;

    cout << "Kalimat ke-1: " << string_1 << endl;
    cout << "Kalimat ke-2: " << string_2 << endl;
    cout << "Kalimat ke-3: " << string_3 << endl;

    // #Swap string (menukar nilai string)
    cout << "\nKalimat mana yang ingin ditukar: ";
    cin >> swap;
    
    switch(swap) {
        case 1:
            cout << "Dengan kalimat ke: ";
            cin >> a;
            switch(a) {
                case 2:
                    string_1.swap(string_2);
                    break;
                case 3:
                    string_1.swap(string_3);
                    break;
                default:
                    cout << "Error" << endl;
            }
            break;
        case 2:
            cout << "Dengan kalimat ke: ";
            cin >> a;
            switch(a) {
                case 1:
                    string_2.swap(string_1);
                    break;
                case 3:
                    string_2.swap(string_3);
                    break;
                default:
                    cout << "Error" << endl;
            }
            break;
        case 3:
            cout << "Dengan kalimat ke: ";
            cin >> a;
            switch(a) {
                case 1:
                    string_3.swap(string_1);
                    break;
                case 2:
                    string_3.swap(string_2);
                    break;
                default:
                    cout << "Error" << endl;
            }
            break;
        default:
            cout << "Error" << endl;
    }

    // Hasil setelah swap
    cout << "\n#==After Swap==#" << endl;
    cout << "Kalimat ke-1: " << string_1 << endl;
    cout << "Kalimat ke-2: " << string_2 << endl;
    cout << "Kalimat ke-3: " << string_3 << endl << endl;

    // #Replace string (mengganti nilai string)
    cout << "#==Replace==#" << endl;
    cout << "\nMasukan kata yang akan diganti pada kalimat 2: ";
    cin >> input;
    int s = string_2.find(input);

    cout << "Masukan jumlah karakter: ";
    cin >> x; // jumlah karakter pada kata pengganti diatas

    cout << "Masukan kata pengganti: ";
    cin >> input;
    string_2.replace(s, x, input);

    // Hasil setelah replace
    cout << "\nHasil akhir: " << string_2 << endl;

    // #Insert string (menambah nilai pada string)
    cout << "\n#==Insert==#" << endl;
    cout << "Masukan posisi pada index kalimat 3: ";
    cin >> x;
    cout << "Masukan kata penambah: ";
    cin >> input;
    string_3.insert(x, " " + input);

    // Hasil setelah insert
    cout << "\nHasil akhir: " << string_3 << endl;

    return 0;
}