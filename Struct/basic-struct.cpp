#include <iostream>
 
using namespace std;
 
struct people {
  string nama;
  string negara;
  unsigned int gol;
};
 
int main()
{
  struct people messi;
 
  messi.nama = "Messi";
  messi.negara = "team argentina";
  messi.gol = 4-2;
 
  cout << messi.nama <<" bermain di " << messi.negara << endl;
  cout << "melawan prancis dengan " << messi.gol << " skor akhir" << endl;
 
  return 0;
}