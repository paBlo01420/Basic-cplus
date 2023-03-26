#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct warga
{
  string jenis_kelamin;
  string Nama;
  string Alamat;
  short Umur;
};
int main()
{
  warga wrg;
  cout<<"jenis_kelamin  : ";
  cin >> wrg.jenis_kelamin;
  cout<<"Nama  : ";
  cin>>wrg.Nama;
  cout<<"Alamat  : ";
  cin>>wrg.Alamat;
  cout<<"Umur  : ";
  cin>>wrg.Umur;
  cout<<"\n\n\nJenis kelamin  : "<<wrg.jenis_kelamin;
  cout<<"\nNama  : "<<wrg.Nama;
  cout<<"\nAlamat  : "<<wrg.Alamat;
  cout<<"\nUmur  : "<<wrg.Umur;
  getch();

  return 0;
}
