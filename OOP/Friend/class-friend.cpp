#include <iostream>     // Friend class digunakan untuk berbagi akses seluruh member pada class yang berbeda
#include <string>       // !--Akses friend class hanya bersifat satu arah dan tidak berlaku sebaliknya

using std::cout;
using std::cin;
using std::endl;

class Balok;

class Kubus {
    friend class Balok;
    private:
        double rusuk;
    public:
        Kubus(double rusuk) {
            this->rusuk = rusuk;
        }

        double volume() {
            return this->rusuk*this->rusuk*this->rusuk;
        }

        bool compare(const Balok &obj) {
            bool logic = obj.panjang > this->rusuk;
            return logic;
        }
};

class Balok {
    friend Kubus;
    private:
        double panjang, lebar, tinggi;
    public:
        Balok(double p, double l, double t) {
            this->panjang = p;
            this->lebar = l;
            this->tinggi = t;
        }

        double volume() {
            return this->panjang*this->lebar*this->tinggi;
        }

        bool compare(const Kubus &obj) {
            bool logic = this->panjang > obj.rusuk;
            return logic;
        }
};

int main() {
    Kubus* geometri1 = new Kubus(5);
    Balok* geometri2 = new Balok(7, 9, 2);

    cout << "Volume Kubus: " << geometri1->volume() << endl;
    cout << "Volume Balok: " << geometri2->volume() << endl;

    bool comp = geometri2->compare(*geometri1);
    cout << "\nApakah balok lebih panjang ketimbang kubus?: " << comp << endl;

    return 0;
}