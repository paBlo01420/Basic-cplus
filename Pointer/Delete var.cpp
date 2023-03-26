#include <iostream>

using namespace std;

main (){
    int *P; //Mendeklarasikan pointer P yang menunjuk ke tipe data int

    //Melakukan alokasi memori
    P=new int;

    //Menggunakan memori yang telah dialokasikan
    *P=100;

    cout<<"Nilai *P : "<<*P<<endl;

    //Melakukan dealokasi memori
    delete P;

    return 0;
}
