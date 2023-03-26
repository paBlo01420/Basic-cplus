#include <iostream>

using namespace std;

int main () {
   int  nilai = 20;   
   int  *ip;        

   ip = &nilai;       

   cout << "Nilai dari : ";
   cout <<nilai<< endl;

   cout << "Alamat dari nilai : ";
   cout << ip << endl;

   cout << "Nilai dari *ip ";
   cout << *ip << endl;

   return 0;
}
