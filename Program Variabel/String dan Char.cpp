#include <iostream>

using namespace std;

int main() {
    string namaLengkap;
    char kelas;
    char garis[11]="==========";

    cout << "Input nama lengkap : ";
    getline(cin, namaLengkap); 
    cout << "Input kelas anda [A-Z] : ";
    cin >> kelas;

    cout << endl;
    cout << garis << " Data Kamu " << garis << endl;
    cout << "Nama Lengkap\t: " << namaLengkap << endl;
    cout << "Kelas\t\t: " << kelas << endl;
    
    return 0;
}
