#include <iostream>
using namespace std;

int main() {
    // Variabel
    int a;
    
    a = 10;
    for(int i = 0; i <= a; i++) {
        if(i == 6){
            break; // Syntax berhenti
        }
        cout << i << endl;
    }

    cout << endl << endl;

    for(int i = 0; i <= a; i++) {
        if(i == 4){
            continue; // Syntax di skip
        }
        cout << i << endl;
    }

    return 0;
}