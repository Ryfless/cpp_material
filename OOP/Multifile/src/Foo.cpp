#include <iostream>
#include <string>
#include "class.h"

Siswa::Siswa(const char* nama) {
    this->nama = nama;
}

void Siswa::show() {
    std::cout << "Nama siswa: " << this->nama << std::endl;
}

void Siswa::change(std::string nama) {
    this->nama = nama;
}