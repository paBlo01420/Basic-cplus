#include <iostream>

using namespace std;

int main() {
    string namaLengkap, alamat, pekerjaan;

    // if 2 or more word use getline() instead of cin method 
    cout << "Masukkan nama lengkap   : ";
    getline(cin, namaLengkap);
    cout << "Masukkan alamat lengkap : ";
    getline(cin, alamat);
    cout << "Masukkan pekerjaan\t : ";
    getline(cin, pekerjaan);

    cout << endl;
    cout << "Nama Lengkap\t : " << namaLengkap << endl;
    cout << "Alamat Lengkap\t : " << alamat << endl;
    cout << "Pekerjaan\t : " << pekerjaan << endl;
}
