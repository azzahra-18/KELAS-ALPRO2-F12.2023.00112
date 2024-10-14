#include <iostream>

using namespace std;

// Fungsi untuk mencari nilai terkecil dari dua bilangan
int min(int a, int b) {
    if (a < b) {
        cout << a << " adalah nilai terkecil" << endl; // output nilai terkecil
        return a;
    } else {
        cout << b << " adalah nilai terkecil" << endl;
        return b;
    }
}

int main()
{
    int x, y;

    // Meminta input dari pengguna
    cout << "Masukkan nilai x: ";
    cin >> x;

    cout << "Masukkan nilai y: ";
    cin >> y;

    // Memanggil fungsi min untuk mencari nilai terkecil dari x dan y
    min(x, y);

    return 0;
}

