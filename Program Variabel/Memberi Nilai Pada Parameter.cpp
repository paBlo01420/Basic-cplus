#include <iostream>
using namespace std;


void kali_dua(int *num){
*num = *num * 2;


}


int main(){
int angka = 9;


// memanggil fungsi
kali_dua(&angka);


// mencetak hasil variabel
// setelah fungsi memanggil
cout << "isi variabel angka = " << angka <<endl;


return 0;
}

