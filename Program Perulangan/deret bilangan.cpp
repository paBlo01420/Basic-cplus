#include <iostream> 
using namespace std; 

int main (){
	int i=99, a;
  	cout<<"Masukkan nim : ";
	cin>>a;
  	
	awal: 
	a++;
  	cout<<a<<","; 
	  if(i>=a)
  		goto awal; 
	   else
  		goto akhir;
	akhir:
	return 0;
}
