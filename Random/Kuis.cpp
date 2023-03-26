#include<iostream>
using namespace std;

main(){
 int tinggiBadan;
 int beratBadan;
 char beratTinggi;
 
 cout << "Cek berat badan = ";
 cin >> beratBadan;
 
 cout << "cek Tinggi badan = ";
 cin >> tinggiBadan;
 
 cout << "Masukkan berat dan tinggi badan = ";
 cin >> beratTinggi;
 
 	switch (beratTinggi){
  		case 'ideal' :
  			cout << "Berat dan tinggi badan";
  		 	break;
  		case 'kurus' :
    		cout << "Berat dan tinggi badan";
   			break;
  		case 'gemuk' :
  			cout << "Berat dan tinggi badan";
   			break;
  			default :
  			 break;
 }
 	return 0;
}

