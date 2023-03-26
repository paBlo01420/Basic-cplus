#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int baris, kolom;
    cout <<"Masukkan jumlah baris: ";
    cin >>baris;
    cout <<"Masukkan jumlah kolom: ";
    cin >>kolom;

    int angka[baris][kolom];
    for (int i=0; i<baris; i++){
        for (int j=0; i<kolom; j++){
            cout <<"Masukkan angka pada ["<<i<<"] ["<<j<<"] = ";
            cin >> angka [i][j];
        }
        cout <<endl;
    } 

    for (int i=0; i<baris; i++){
        for (int j=0; j<kolom; j++){
            cout <<setw(4) <<angka[i][j];
        }
        cout <<endl;
    }
}