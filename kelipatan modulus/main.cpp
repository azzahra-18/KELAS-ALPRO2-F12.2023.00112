#include <iostream>
using namespace std;

int main() {
    int bilangan;

    // Meminta input angka dari pengguna
    cout << "Masukkan bilangan: ";
    cin >> bilangan;

    // Mengecek apakah bilangan ganjil atau genap
    if (bilangan % 2 == 0) {
        cout << "Bilangan " << bilangan << " adalah bilangan genap." << endl;
    } else {
        cout << "Bilangan " << bilangan << " adalah bilangan ganjil." << endl;
    }

    // Mengecek apakah bilangan kelipatan 3
    if (bilangan % 3 == 0) {
        cout << "Bilangan termasuk kelipatan 3." << endl;
    } else {
        int sisa = bilangan % 3; // Menghitung sisa bagi
        cout << "Bilangan tidak termasuk kelipatan 3." << endl;
        cout << "Karena jika dibagi 3, sisanya adalah " << sisa << "." << endl;
    }

    return 0;
}
