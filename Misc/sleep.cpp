#include <iostream>     // sleep untuk menciptakan delay pada syntax yang akan dieksekusi
#include <chrono>
#include <thread>
#include <string>

using std::cout;
using std::cin;
using std::endl;
  
int main()
{
    // Variabel
    std::string nama, input, blank;
    int a, b, res;

    cout << "Selamat Datang...\nDengan siapa disini?" << endl;
    getline(cin, nama);
    // Delay
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cout << "\nHalo " << nama << " senang dapat mengenalmu :)\nAdakah yang dapat saya bantu?" << endl;
    getline(cin, input);

    if (input == "penjumlahan") {
        cout << "\nMasukan Input:" << endl;
        res = (cin >> a, cin >> b, a*b);
        cout << "Perintah anda akan diproses..." << endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
        cout << "Loading.";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        cout << ".";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        cout << ".";
        std::this_thread::sleep_for(std::chrono::seconds(3));
        cout << "\nMaaf lama, sinyal sedang ada gangguan (Time remaining 10 sec)\nMohon bersabar...                             :)" << endl;
        std::this_thread::sleep_for(std::chrono::seconds(10));
        cout << "Hasil anda: " << res << endl;
    } else if (input == "aku suka kamu") {
        for (int i = 0; i < 500; i++) {
            std::this_thread::sleep_for(std::chrono::milliseconds(20));
            cout << (char)3;
        }

        cout << endl;

        for (int i = 0; i < 15; i++) {
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            cout << "AKU JUGA SUKA KAMU " << nama << endl;
        }
    } else {
        cout << "\nLoading";
        for (int i = 0; i < 5; i++) {
            std::this_thread::sleep_for(std::chrono::seconds(1));
            cout << ".";
        }
        cout << endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
        cout << "\n\nMaaf perintah tidak ditemukan :(" << endl;
    }

    return 0;
}