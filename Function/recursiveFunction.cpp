#include <iostream>
using namespace std;

// Fungsi rekursif/pengulangan dengan kembalian
int fact(int a) {
    int b = 1;
    for(int i = 1; i <= a; i++) {
        b = b * i;
    }
    return b;
}

// Fungsi rekursif tanpa kembalian
void Tangle(int b) {
    for(int i = 1; i <= b; i++) {
		for(int j = b; j > i; j--) {
			cout << " ";
		}
		for(int k = 1; k <= (2*i-1); k++) {
			cout << "*";
		}
		cout << endl;
	}
}

int main() {
    // Variabel
    int a, x;

    // Fungsi faktorial
    cout << "Faktorial: ";
    cin >> a;
    cout << a << "!= " << fact(a) << endl << endl;

    // Fungsi segitiga
    cout << "Besar segitiga: ";
    cin >> x;
    Tangle(x);
    cout << endl;

    return 0;
}