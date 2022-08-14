#include <iostream>     // Method adalah fungsi member
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Waifu {
    public:
        string nama;
        double rating;

        Waifu(string inNama, double inRating) {
            Waifu::nama = inNama;
            Waifu::rating = inRating;
        }

        // Method

        // Fungsi tanpa parameter dan return
        void showData() {  
            cout << "Nama waifu: " << nama << endl;
            cout << "Rating: " << rating << "/10" << endl;
        }

        // Fungsi dengan parameter dengan return
        void changeName(string namaBaru) {  
            Waifu::nama = namaBaru;
        }

        // Fungsi tanpa parameter dengan return
        string getNama() {
            return Waifu::nama;
        }

        double getRating() {
            return Waifu::rating;
        }

        // Fungsi dengan parameter dan return
        double changeRating(const double &chRating) {
            return Waifu::rating = chRating;
        }
        
};

int main() {
    // Object
    Waifu waifu1 = Waifu("Megumi katou", 9.5);
    Waifu waifu2 = Waifu("Asuna", 8.0);

    string input, blank;
    double x;
    
    // Pemanggilan fungsi
    cout << "Waifu 1:" << endl;
    waifu1.showData();
    cout << "\nWaifu 2: " << endl;
    waifu2.showData();
    cout << endl;

    cout << "Ubah nama waifu 2: ";
    getline(cin, input);
    waifu2.changeName(input);
    cout << "Ubah ratingnya: ";
    cin >> x;
    waifu2.changeRating(x);
    cout << endl;

    cout << "================================" << endl;
    cout << "\nNama Waifu 2: " << waifu2.getNama() << endl;
    cout << "Ratingnya: " << waifu2.getRating()  << "/10"<< endl;

    return 0;
}