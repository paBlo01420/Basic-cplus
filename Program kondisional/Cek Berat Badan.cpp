#include<iostream>
using namespace std;

main(){
 int tinggiBadan;
 int beratBadan;
 char saya;
 	cout << "cek Tinggi badan = ";
	cin >> tinggiBadan;
	 
	cout << "masukkan nomor menu [1,2,4] = ";
	cin >> saya;
 
 switch (saya){
  case '1' :
   cout << "nomor 1";
   break;
  case '2' :
   cout << "nomor 2";
   break;
  case '4' :
   cout << "nomor 4";
   break;
  default :
   return 0;
   break;
 }
}

