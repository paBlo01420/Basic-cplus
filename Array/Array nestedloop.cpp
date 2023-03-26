#include <iostream>

using namespace std;

int main(){
    int siswa[2][5];     //deklarasi array 2 dimensi

    cout <<"Masukkan nilai array: \n";
    for (int i=0; i<2; i++){
        for (int j=0; j<5; j++){
            cout <<"Nilai Elemen [" <<i <<"] [" <<j <<"] = ";
            cin >> siswa [i][j];
        }
    }
    cout <<endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<5; j++){
            cout <<"Nilai  array siswa [" <<i <<"] [" <<j <<"] = " <<siswa[i][j]<<endl;
        }
    }

    return 0;
}
