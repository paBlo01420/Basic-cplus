#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;

struct Tinggal {
  char Jalan[40];
  char Kota[15];
  char Pos[5];
};

struct Tgl_Lahir {
  int Tanggal;
  int Bulan;
  int Tahun;
};

struct Jenis_kelamin {
  char jenis_kelamin[13];
  char Nama[25];
  Tinggal Alamat;
  Tgl_Lahir Lahir;
};

int main()
{
  Jenis_kelamin jkl[13];
  int i;
  for(i=0;i<3;i++)
  {
    cout<<"Jenis Kelamin  : "; cin>>jkl[i].jenis_kelamin;
    cout<<"Nama  : "; cin>>jkl[i].Nama;
    cout<<"\tJalan  : "; cin>>jkl[i].Alamat.Jalan;
    cout<<"\tKota  : "; cin>>jkl[i].Alamat.Kota;
    cout<<"\tKode Pos  : "; cin>>jkl[i].Alamat.Pos;
    cout<<"\tTanggal  : "; cin>>jkl[i].Lahir.Tanggal;
    cout<<"\tBulan  : "; cin>>jkl[i].Lahir.Bulan;
    cout<<"\tTahun  : "; cin>>jkl[i].Lahir.Tahun;
  }
  cout<<"\n\nMencetak Kembali Nilai Anggota\n\n";
  for(i=0;i<3;i++)
  {
    cout<<"\nJenis Kelamin  : "<<jkl[i].jenis_kelamin;
    cout<<"\nNama  : "<<jkl[i].Nama;
    cout<<"\n\tJalan  : "<<jkl[i].Alamat.Jalan;
    cout<<"\n\tKota  : "<<jkl[i].Alamat.Kota;
    cout<<"\n\tKode Pos  : "<<jkl[i].Alamat.Pos;
    cout<<"\nTanggal Lahir  : "<<jkl[i].Lahir.Tanggal<<"-";
    cout<<jkl[i].Lahir.Bulan<<"-"<<jkl[i].Lahir.Tahun;
  }
  getch();
}
