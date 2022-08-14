#ifndef _CLASS
#define _CLASS

#include <string>

// Deklarasi class
class Siswa {
    public:
        std::string nama;

        Siswa(const char*);
        void show();
        void change(std::string);
};
#endif