#include <iostream>
using namespace std;

// Fungsi untuk mencari dan mencetak bilangan X
void caricetak(int arr[], int size, int X) {
    bool isFound = false;

    for (int i = 0; i < size; i++) {
        if (arr[i] == X && X % 2 == 0) {
            cout << "Angka ditemukan: " << X << " adalah angka genap." << endl;
            isFound = true;
            break;
        }
    }

    if (!isFound) {
        cout << "Angka " << X << " tidak ditemukan atau bukan angka genap." << endl;
    }
}

int main() {
    int arr[6] = {2, 2, 3, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int X;

    cout << "Mangga lebetaken X ingkang kersa dipun goleki: ";
    cin >> X;

    caricetak(arr, size, X);
    return 0;
}

