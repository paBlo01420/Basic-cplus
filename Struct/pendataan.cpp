#include <iostream>
 
using namespace std;
 
struct Mahasiswa {
  string nama;
  string nim;
  unsigned int fakultas;
};
 
int main()
{
  struct Mahasiswa mhs1;
 
  cout << "==++ Pendaftaran Mahasiswa Baru ++==" << endl;
  cout << "Nama: ";
  getline(cin,mhs1.nama);
 
  cout << "Nim: ";
  getline(cin,mhs1.nim);
 
  cout << "Fakultas: ";
  cin >> mhs1.fakultas;
 
  cout << endl;
 
  cout << mhs1.nama <<" Mahasiswa Baru Nim " << mhs1.nim;
  cout << " Prodi Teknik " << mhs1.fakultas << endl;
 
  return 0;
}