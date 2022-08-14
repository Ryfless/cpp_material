#include <iostream>         // Nesting struct adalah menyambungkan beberapa data
#include <string>

/* using namespace std; */  // !--dapat menulis seperti ini tetapi tidak terlalu disarankan

using std::cout;
using std::cin;
using std::endl;
using std::string;

// Data karakter
struct karakter {
    string nama;
    int usia;
};

// Data produk
struct manga {
    string judul;
    string genre;
    int th_rilis;

    // Struct karakter
    karakter char_1, char_2, char_3;
};


int main() {
    // Variabel
    karakter main_char, her_char, vill_char, sfuh;
    manga a, b, c;
    string input;
    int toInt;
    char status;

    // Character developing
    cout << "#=== -Program Membuat Struktur Manga- ===#" << endl;
    cout << "Masukan nama MC: ";
    getline(cin, input);
    main_char.nama = input;

    cout << "Masukan nama Heroin: ";
    getline(cin, input);
    her_char.nama = input;

    cout << "Masukan nama Villain: ";
    getline(cin, input);
    vill_char.nama = input;

    cout << "Masukan nama Sfuhh: ";
    getline(cin, input);
    sfuh.nama = input;
    cout << endl;

    cout << "Berapakah usia MC: ";
    cin >> toInt;
    main_char.usia = toInt;

    cout << "Berapakah usia Heroin: ";
    cin >> toInt;
    her_char.usia = toInt;

    cout << "Berapakah usia Villain: ";
    cin >> toInt;
    vill_char.usia = toInt;

    cout << "Berapakah usia Sfuhh: ";
    cin >> toInt;
    sfuh.usia = toInt;

    

    // Manga creation
    cout << "============\n" <<
            "<Membuat manga>" <<
    endl;

    while(true) {
        getline(cin,input);
        cout << "Apa judul mangamu?: ";
        getline(cin, input);
        a.judul = input;

        cout << "Apa genre mangamu?: ";
        getline(cin, input);
        a.genre = input;

        cout << "Kapan mangamu rilis?: ";
        cin >> toInt;
        a.th_rilis = toInt;

        a.char_1 = main_char;
        a.char_2 = her_char;
        a.char_3 = vill_char;

        cout << "Konfirmasi? [y/n]" << endl;
        cin >> status;
        if (status == 'y' || status == 'Y') {
            break;
        }
        cout << endl;
    }

    cout << "#==Hasil Akhir==#" << endl;
    cout << "Judul: " << a.judul << "\n"
            "Genre: " << a.genre << "\n"
            "Tahun Rilis: " << a.th_rilis << "\n"
            "\nKarakter manga: \n" <<
                "MC: " << a.char_1.nama << "\n"
                "Usia: " << a.char_1.usia << "\n"
                "Heroin: " << a.char_2.nama << "\n"
                "Usia: " << a.char_2.usia << "\n"
                "Villain: " << a.char_3.nama << "\n"
                "Usia: " << a.char_3.usia << "\n" <<
    endl;

    return 0;
}