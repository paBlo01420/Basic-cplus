#include <iostream> 
using namespace std; 

int main (){
  	string gender; 
  	cout<<"masukkan gender : ";cin>>gender; 
	  if((gender=="L")|| (gender=="l")){
	  	cout<<"Laki-laki";
  }else if((gender=="P")|| (gender=="p"))
  {
  cout<<"Perempuan";
  }
  else
  {
  cout<<"Inputan salah";
  }
  return 0;
