#include <iostream>

using namespace std;

int main()
{
    // contoh : Jumat, 31-12-2022 -> 18 karakter
    char tanggal[18];

    cout << "Program untuk membaca hari dari format tanggal dan hari" << endl;
    cout << "Masukkan tanggal dengan format" << endl;
    cout << "Hari, dd-mm-yyyy" << endl;
    cout << "-> ";
    cin.get(tanggal, 7);
    cout << endl << "Hari : " << tanggal;
}
