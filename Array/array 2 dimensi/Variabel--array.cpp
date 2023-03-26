#include <iostream>

using namespace std;

int main (){
    int data[5]; //Deklarasi array

    //Memasukkan data menggunakan perulangan for
    for (int i=0; i<5; i++){
        cout<<"Masukkan data pada elemen ke "<<i<<" = ";cin>>data[i];
    }

    cout<<endl;
    //Menampilkan elemen data
    for (int j=0; j<5; j++){
        cout<<"Data baris ke-"<<j<<" = "<<data[j];cout<<endl;
    }
    return 0;
}
