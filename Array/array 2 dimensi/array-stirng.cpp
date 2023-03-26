#include <iostream>
#include <conio.h>

using namespace std;

void array_huruf(){
 //Mendeklarasikan array
 string huruf[5][2]={{"1","Tutor-All Progamming"},{"2","Tutorial Bahasa Pemrograman"},
    {"3","Materi Progam C++"},{"4","Array 2 Dimensi"},{"5","Array Multidimensional"}};
      
 //Menampilkan Array huruf
 for(int i = 0; i<=4; i++){
  cout<<"\nNilai pada baris ke-"<<i<<endl;
  for(int j = 0; j<=1; j++){
   cout<<"Array ["<<i<<"]["<<j<<"] : "<<huruf[i][j];
   cout<<endl;
  }
  cout<<endl;
 }
}
