#include <iostream>
#include <string>
using namespace std;
 
struct siswa{
    struct{ //
    string nama;
    int umur;
    }anak;
    int noInduk; 
    float nilaiUjian;
};
 
void printIt(const struct siswa &a){
    cout<<"Nama \t\t = "<<a.anak.nama<<endl;
    cout<<"Umur \t\t = "<<a.anak.umur<<endl;
    cout<<"Nomer Induk \t = "<<a.noInduk<<endl;
    cout<<"Nilai Ujian \t = "<<a.nilaiUjian<<endl<<endl;
}
 
int main() {
    struct siswa budi{{"Trump Escobar", 19}, 123, 70.5};
    struct siswa tono;
 
    tono.anak.nama = "Joe biden";
    tono.anak.umur=18;
    tono.noInduk=124;
    tono.nilaiUjian=7.8;
 
    printIt(budi);
    printIt(tono);
 
    return 0;
}