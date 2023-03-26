#include <iostream>

using namespace std;

int main(){ //Deklrasi nilai
    int a[10]={6, 18, 31, 55, 22, 48, 76, 99, 100, 12};
    int tertinggi, terendah;

    //menampilkan elemen data
    for (int i=0; i<10; i++){
        cout << "Data baris ke- " <<i <<" " << a[i]; cout <<endl;
    }

    tertinggi = a[0];
    terendah = a[0];

    //meseleksi nilai 
    for (int j=0; j<10; j++){
        if (a[j] > tertinggi){
            cout << tertinggi << a[j];
        } if (a[j] > terendah){
            cout << terendah << a[j];
        }
    }
	cout <<"\n";
    cout << "Nilai teringgi = " <<tertinggi <<endl;
    cout << "Nilai terendah = " <<terendah;
}
