#include <iostream>
#include <string>
#include <chrono>

using std::cout;
using std::cin;
using std::endl;

// Chrono library
using Clock = std::chrono::high_resolution_clock;
using Timepoint = std::chrono::time_point<Clock>;

class Debug {
    public:
        std::string x;

        Debug(std::string x) {
            Debug::x = x;
        }
};

int main() {
    // Untuk mengetahui durasi untuk membuat object di tiap memory

    Timepoint *tStackStart = new Timepoint();
    Timepoint *tStackEnd = new Timepoint();
    Timepoint *tHeapStart = new Timepoint();
    Timepoint *tHeapEnd = new Timepoint();

    // Stack
    cin.get();
    *tStackStart = Clock::now();
    Debug run1 = Debug("Apabila");
    *tStackEnd = Clock::now();
    // Heap
    cin.get();
    *tHeapStart = Clock::now();
    Debug* run2 = new Debug("Terkadang");  
    *tHeapEnd = Clock::now();

    std::chrono::duration<double> durasi = *tStackEnd - *tStackStart;
    cout << "Waktu eksekusi object di stack memori: " << durasi.count() << endl;
    durasi = *tHeapEnd - *tHeapStart;
    cout << "Waktu eksekusi object di heap memori: " << durasi.count() << endl;

    return 0;
}