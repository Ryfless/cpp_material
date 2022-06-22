#include <iostream>
using namespace std;

int main(){

    int a, b;

    // pengisian nilai dengan operator =
    a = 5;
    b = 10;

    // pengisian sekaligus penambahan
    b += a; // ini sama seperti b = b + a
    cout << b << endl;

    // pengisian sekaligus pengurangan
    b -= a; // ini sama seperti b = b - a
    cout << b << endl;

    // pengisian sekaligus perkalian
    b *= a; // ini sama seperti b = b * a
    cout << b << endl;

    // pengisian sekaligus pembagian
    b /= a; // ini sama seperti b = b / a
    cout << b << endl;

    // pengisian sekaligus penambahan
    b %= a; // ini sama seperti b = b % a
    cout << b << endl;

    return 0;
}

  /* Output:
      15
      10
      50
      10
      0
  */
