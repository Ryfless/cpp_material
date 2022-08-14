#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

class Type {
    public:
        std::string dataStr;
        double decimal;
        double m_decimal;

        // Constructor
        Type (const char* dataStr, double decimal) {
            // Membedakan nama variabel yang sama dengan namespace
            Type::dataStr = dataStr;

            // Dengan "this"
            cout << this << endl; // Akan menampilkan address
            this->decimal = decimal;

            // Dengan konvensi penamaan
            m_decimal = decimal;
        }
};

// Member function
class Apps {
    public:
        std::string nama;
        double rating;
        int download;

        Apps(const char* nama, double rating) {
            Apps::setName(nama);
            // atau
            this->setRating(rating);
        }

        void setName(const char* nama) {
            this->nama = nama;
        }

        void setRating(double rating) {
            this->rating = rating;
        }

        void setDownload(int download);  // Prototype function
};

int main() {
    Type* object1 = new Type("object1", 0.02);
    cout << object1->dataStr << endl;
    cout << object1->decimal << endl;
    cout << object1->m_decimal << endl << endl;

    Apps* aplikasi1 = new Apps("gopud", 4.8);
    aplikasi1->setDownload(50);
    cout << aplikasi1->nama << endl;
    cout << aplikasi1->rating << endl;
    cout << aplikasi1->download << endl;

    return 0;
}

void Apps::setDownload(int download) {  // Hanya berlaku menggunakan namespace
    this->download = download;
}