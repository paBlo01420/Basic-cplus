#include <iostream>
using namespace std;

int main(){
	/*Menghitung Luas Segitiga
		L = (a x t)/2
		
		L = Luas segitiga	
		a = panjang alas segitiga
		t = tinggi sigitiga
	*/	
	double L, a, t;
	cout<<"Menghitung Luas Segitiga\n============================="<<endl;
	cout<<"masukkan alas \t\t= ";
	cin>>a;
	cout<<"masukkan tinggi \t= ";
	cin>>t;
	L = (a * t)/2;
	cout<<"Luas segitiga yang  diketahui : "<<endl;
	cout<<"alas\t= "<<a<<" cm"<<endl;
	cout<<"tinggi\t= "<<t<<" cm"<<endl;
	cout<<"adalah : "<<endl;
	cout<<"L = (a x t)/2\nL = ("<<a<<" x "<<t<<")/2"<<endl;
	cout<<"L = "<<L<<" cm"<<endl;
	cout<<"Luas segitiga tersebut adalah ="<<L<<" cm"<<endl;
}

