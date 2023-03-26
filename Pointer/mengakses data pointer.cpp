#include <iostream>
using namespace std;

int main(){
    int set = 50;
    int hp = 100;

    // membuat pointer dengan isi alamat memori dari hp
    int *ptr_hp = &hp;

    // print isi variabel dan alamat memori
    cout <<"Nama Variabel \t Alamat \t Nilai\n";
    cout <<"set \t\t " <<&set <<"\t" << set <<endl;
    cout <<"hp \t\t " << &hp <<"\t"<<hp <<endl;
    cout <<"ptr_hp \t\t " <<&ptr_hp << "\t" <<ptr_hp <<endl;
    cout <<"*ptr_hp \t " <<&ptr_hp <<"\t" <<*ptr_hp <<endl;

    // mengubah data pada alamat memori dengan pointer
    *ptr_hp = 95;

    cout <<"hp \t\t "<< &hp <<"\t" <<hp <<endl;
    cout <<"*ptr_hp \t " <<&ptr_hp <<"\t"<<*ptr_hp;
}
