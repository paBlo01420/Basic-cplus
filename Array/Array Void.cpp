#include <iostream>
#include <string>

using namespace std;

void array_angka(){
 //Mendeklarasikan Array
 int angka[5][2]={{1,20},{2,40},{3,5},{4,89},{5,12}};
 
 //Menampilkan Array angka
 for(int i = 0; i<=4; i++){
  cout<<"\nNilai pada baris ke-"<<i<<endl;
  for(int j = 0; j<=1; j++){
   cout<<"Array ["<<i<<"]["<<j<<"] : "<<angka[i][j];
   cout<<endl;
  }
  cout<<endl;
 }
 
}

void array_huruf(){
 //Menampilkan Array huruf
 for(int i = 0; i<=4; i++){
  cout<<"\nNilai pada baris ke-"<<i<<endl;
  for(int j = 0; j<=1; j++){
   cout<<"Array ["<<i<<"]["<<j<<"]";
   cout<<endl;
  }
  cout<<endl;
 }
}

int main(){
 array_angka();
 array_huruf();
}
