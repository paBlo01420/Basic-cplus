#include <iostream>

using namespace std;

main(){
    int nilai[3], *intruksi;

    nilai[0] = 87;
    nilai[1] = 123;
    nilai[2] = 680;

    intruksi = &nilai[0];
    cout<<"Nilai "<<*intruksi <<" ada di alamat memori "<<intruksi;
    cout<<"\nNilai "<<*(intruksi+1)<<" ada di alamat memori "<<intruksi+1;
    cout<<"\nNilai "<<*(intruksi+2)<<" ada di alamat memori "<<intruksi+2<<endl;
}
