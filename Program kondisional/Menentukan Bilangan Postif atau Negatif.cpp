#include <iostream>

using namespace std;

int main() {
    int angka;

    cout << "Program untuk Cek Angka Positif/Negatif\n";
    cout << "Masukkan angka : ";
    cin >> angka;

    if (angka > 0) {
        cout << "Angka adalah bilangan positif\n";
    } else if (angka < 0) {
        cout << "Angka adalah bilangan negatif\n";
    } else {
        cout << "Angka adalah bilangan 0\n";
    }
}
