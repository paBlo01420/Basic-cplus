#include <iostream>

using namespace std;

main(){
    char nama[5]={'M','E','S','S','I'};
    string alamat[5]={"Francis","Kelurahan Argentina","Kecamatan Arab","Kabupaten Sleman","Propinsi Arab saudi"};
    cout <<"Nama = ";
    for (int i=0; i<5; i++){
        cout<<nama[i];
        }
        cout<<endl;
        cout<<"Alamat: " <<endl;
        for (int i=0; i<5; i++){
            cout<<alamat[i]<<endl;
            }
}
