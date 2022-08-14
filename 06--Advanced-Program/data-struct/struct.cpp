#include <iostream>
#include <string>

/* using namespace std; */  // !--dapat menulis seperti ini tetapi tidak terlalu disarankan

using std::cout;
using std::cin;
using std::endl;

// Data struktur
struct hewan {
    std::string species; // Substruct
    std::string tipe;
    double ukuran;
    int bobot;
    bool status;
};

int main () {
    // Variabel
    hewan kucing, katak, Triceratops; // Masukan nama data struct untuk mengganti tipe data

    // Data struct kucing
    kucing.species = "Mamalia";
    kucing.tipe = "Karnivora";
    kucing.ukuran = 0.5;
    kucing.bobot = 2000;
    kucing.status = 1;

    // Data struct katak
    katak.species = "Amphibi";
    katak.tipe = "Insectivora";
    katak.ukuran = 0.002;
    katak.bobot = 5;
    katak.status = 1;

    // Data struct Triceratops
    Triceratops.species = "Reptil";
    Triceratops.tipe = "Herbivora";
    Triceratops.ukuran = 15;
    Triceratops.bobot = 2000000;
    Triceratops.status = 0;

    // Printing
    cout << "<Kucing>";
    cout <<
        "\n- Spesies: " << kucing.species <<
        "\n- Tipe makanan: " << kucing.tipe <<
        "\n- Ukuran: " << kucing.ukuran << " m" <<
        "\n- Berat: " << kucing.bobot << " gram" <<
        "\n- Status kepunahan: " << kucing.status << endl <<
    endl;

    cout << "<Katak>";
    cout <<
        "\n- Spesies: " << katak.species <<
        "\n- Tipe makanan: " << katak.tipe <<
        "\n- Ukuran: " << katak.ukuran << " m" <<
        "\n- Berat: " << katak.bobot << " gram" <<
        "\n- Status kepunahan: " << katak.status << endl <<
    endl;

    cout << "<Triceratops>";
    cout <<
        "\n- Spesies: " << Triceratops.species <<
        "\n- Tipe makanan: " << Triceratops.tipe <<
        "\n- Ukuran: " << Triceratops.ukuran << " m" <<
        "\n- Berat: " << Triceratops.bobot << " gram" <<
        "\n- Status kepunahan: " << Triceratops.status << endl <<
    endl;

    return 0;
}