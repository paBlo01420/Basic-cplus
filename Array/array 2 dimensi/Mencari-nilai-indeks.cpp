#include <iostream>

using namespace std;

int main(){    //Deklarasi array
    int a[10]={6, 18, 31, 55, 22, 48, 76, 99, 100, 666};
    int cari;

    //Menampilkan elemen data
    for (int i=0; i<10; i++){
        cout << "Data baris ke- " << i << " = " << a[i]; cout <<endl; 
    }

    //masukkan data yang dicari
    cout << "Masukkan data yang dicari = "; cin >> cari;

    //mencari data
    for (int j=0; j<10; j++){

        if (a[j] == cari)
        {
            cout << "Data yang dicari indeks ke- " <<j <<endl;
        } else {
            cout << "Data yang dicari tidak ada" <<endl;
        }

    }
    return 0;
}
