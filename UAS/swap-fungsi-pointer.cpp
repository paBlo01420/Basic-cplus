#include <iostream>
using namespace std;

void swap(int *a,int *b){
	int x;
	x= *a;
	*a=*b;
	*b= x;	
}

int main(){
	
	int a, b;
	
	cout<<"Masukan nilai A: ";cin>>a;
	cout<<"Masukan nilai B: ";cin>>b;
	
	system("pause");
	system("cls");
	
	cout<<"Nilai A Sebelum Di SWAP: "<<a<<endl;
	cout<<"Nilai B Sebelum Di SWAP: "<<b<<endl;
	swap(&a,&b);
	cout<<"\nNilai A Sesudah Di SWAP: "<<a<<endl;
	cout<<"Nilai B Sesudah Di SWAP: "<<b;
}