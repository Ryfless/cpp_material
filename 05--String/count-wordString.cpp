#include <iostream>
#include <string>

/* using namespace std; */  // !--dapat menulis seperti ini tetapi tidak terlalu disarankan

using std::cout;
using std::cin;
using std::endl;

int main() {
    // Variabel
    std::string string;
    
    cout << "#=== -Program menghitung jumlah kata dalam kalimat- ===#" << endl;

    while(true) {
        int pos, jmlh = 0;
        cout << "\nMasukan input: " << endl;
        std::getline(cin, string);
        
       
        while(true) { // Fungsi mencari jumlah kata
            pos = string.find(" ", pos + 1);
            jmlh++;
            if (pos < 0) {
                break;
            }
        }

        if (string == "/stop") {
            break;
        }

        cout << "Jumlah kata: " << jmlh << endl << endl;
    }

    cout << "\nProgram selesai..." << endl;

    return 0;
}