#include <iostream>

using namespace std;

struct guru 
{
    string nama;
    int umur;
};

struct mapel
{
    string nama_mapel;
    double kkm;
    string status;
    
    //Panggil struct guru
    guru guru1, guru2;
};

int main()
{
    guru guru1, guru2;
    mapel mapel1, mapel2;

    guru1.nama = "Joko";
    guru1.umur = 30;

    guru2.nama = "Siti";
    guru2.umur = 25;

    mapel1.guru1 = guru1;
    mapel2.guru2 = guru2;

    mapel1.nama_mapel = "biologi";
    mapel1.kkm = 75;
    mapel1.status = "wajib";

    mapel2.nama_mapel = "Matematika";
    mapel2.kkm = 80;
    mapel2.status = "tidak wajib";

    mapel1.guru1 = guru2;

    cout<<"Nama mapel\t = "<<mapel1.nama_mapel<<endl;
    cout<<"Kkm mapel\t = "<<mapel1.kkm<<endl;
    cout<<"Status mapel\t = "<<mapel1.status<<endl;
    cout<<"Nama guru 1 \t = "<<mapel1.guru1.nama<<endl;
    cout<<"Usia guru 1 \t = "<<mapel1.guru1.umur<<endl;

    cout<<"=================================\n";
    cout<<"Nama mapel\t = "<<mapel2.nama_mapel<<endl;
    cout<<"Kkm mapel\t = "<<mapel2.kkm<<endl;
    cout<<"Status mapel\t = "<<mapel2.status<<endl;
    cout<<"Nama guru 2 \t = "<<mapel2.guru2.nama<<endl;  
    cout<<"Usia guru 2 \t = "<<mapel2.guru2.umur<<endl;
}

    
