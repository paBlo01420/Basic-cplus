#include <iostream>

using namespace std;

struct mahasiswa{
	string nama,prodi;
	long nim;
	char kelas;
	int sem;
};

int main (){
	int n;
	cout<<"Masukkan Jumlah Mahasiswa: ";
	cin>>n;
	
	mahasiswa mhs[n];
	for(int i=0;i<n;i++){
		cout<<"DATA ke-"<<i+1<<endl;
		cout<<"Masukkan Nama: ";cin>>mhs[i].nama;
		cout<<"Masukkan NIM: ";cin>>mhs[i].nim;
		cout<<"Masukkan Prodi: ";cin>>mhs[i].prodi;
		cout<<"Masukkan Kelas: ";cin>>mhs[i].kelas;
		cout<<"Masukkan Semester: ";cin>>mhs[i].sem;
		cout<<endl;
	}
	cout<<endl;
	
	
	for(int i=0;i<n;i++){
		cout<<"DATA ke "<<i+1<<endl;
	cout<<"Nama: "<<mhs[i].nama<<endl;
	cout<<"NIM : "<<mhs[i].nim<<endl;
	cout<<"Kelas: "<<mhs[i].kelas<<endl;
	cout<<"Prodi: "<<mhs[i].prodi<<endl;
	cout<<"Sem: "<<mhs[i].sem<<endl;
	cout<<endl;
	}	
	
}