#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ios;

class Absen {
    public:
        string nama;
        string info;

        Absen(string nama, string info) {
            Absen::nama = nama;
            Absen::info = info;
        }

        string toString() {
            return "\n" + nama + " " + info;
        }
};

class Dtbs {
    public:
        std::fstream out, in;
        string fileName;

        Dtbs(const char* fileName) {
            Dtbs::fileName = fileName;
        }

        void save(Absen data) {
            cout << "Data di save..." << endl;

            Dtbs::out.open(Dtbs::fileName, ios::app);
            Dtbs::out << data.toString();
            Dtbs::out.close();
        }

        void display() {
            Dtbs::in.open(Dtbs::fileName, ios::in);
            string nama, info;
            int i = 1;

            while(!Dtbs::in.eof()) {
                Dtbs::in >> nama;
                Dtbs::in >> info;
                cout << i++ << ".\t" <<
                        nama << "\t" <<
                        info <<
                endl;
            }

            Dtbs::in.close();
            
        }
};

int main() {
    // Membuat file baru
    Dtbs database = Dtbs("data.txt");

    // Data ditampilkan
    cout << "<Data yang ditampilkan>" << endl;
    cout << "\nNo.\tNama\tKehadiran" << endl;
    database.display();

    // Input user
    string nama, info;
    cout << "\n<Tambahkan data>" << endl;
    cout << "Nama: ";
    cin >> nama;
    cout << "Kehadiran: ";
    cin >> info;

    Absen siswa = Absen(nama, info);
    
    // Save ke data base
    database.save(siswa);

    // Tampilkan data ulang
    cout << "================================" << endl;
    cout << "\nNo.\tNama\tKehadiran" << endl;
    database.display();
    
    return 0;
}