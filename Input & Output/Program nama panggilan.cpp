#include <iostream>

using namespace std;

int main() 
{
    char nama[15];

    cout << "Program untuk memanggil nama panggilan" << endl;
    cout << "Masukkan nama depan atau belakang : ";
    cin.read(nama, 5);
    cout << "Hai " << nama << endl;
    cout << "Apa kabar " << nama;
}
