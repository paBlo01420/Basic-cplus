#include <iostream>

using namespace std;

struct mhs 
{
    char nama [30];
    int nim, uts, uas, nilai;
};

main()
{
    int n;
    cout <<"Masukkan Jumlah Mahaiswa: ";
    cin >>n;
    mhs m[n];

    for (int i=0; i<n; i++)
    {
        cout <<"Masukkan Nama : ";
        cin >>m[i].nama;
        cout <<"Masukkan Nim  : ";
        cin >>m[i].nim;
        cout <<"Masukkan Nilai UTS : ";
        cin >>m[i].uts;
        cout <<"Masukkan Nilai UAS : ";
        cin >>m[i].uas;
        cout <<"\n";
    }
    for (int i=0; i<n; i++)
    {
        m[i].nilai=(m[i].uas+m[i].uts)/2;
        cout << "Nama          : " <<m[i].nama<<endl;
        cout << "Nim           : " <<m[i].nim<<endl;
        cout << "Nilai Akhir   : " <<m[i].nilai<<endl;
    }
    return 0;
}

