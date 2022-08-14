// Include guard digunakan untuk mencegah error pada multi-file
#include <string>
#pragma once

#define STR

// Struct
struct Pokemon {
    std::string Nama;
    int ID;
};

// pragma once ekuivalen dengan
// #ifndef _GUARD
// (*code)
// #endif
