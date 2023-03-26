#include <iostream>

using namespace std;

struct s_buku {
	string kode;
	string judul;
	string penulis;
	string penerbit;
	int jumlah;
	int harga;
};

int main(){
	s_buku buku[100];
	int n = 0, pilih;
	bool loop = true;
	
	while(loop){
		cout<<"Menu :"<<endl; 
		cout<<"1. Beli Buku"<<endl;
		cout<<"2. History Buku"<<endl;
		cout<<"3. Keluar"<<endl;
		cout<<"Pilih: ";cin>>pilih;
		cin.ignore();
		cout<<endl;
		
		switch(pilih){
			case 1:
				cout<<"Menu: Beli Buku"<<endl;
				cout<<"-----------------"<<endl;
				cout<<"Masukan Kode     : ";getline(cin,buku[n].kode);
				cout<<"Masukan Judul    : ";getline(cin,buku[n].judul);
				cout<<"Masukan Penulis  : ";getline(cin,buku[n].penulis);
				cout<<"Masukan Penerbit : ";getline(cin,buku[n].penerbit);
				cout<<"Masukan Jumlah	 : ";cin>>buku[n].jumlah;
				cout<<"Masukan Harga    : ";cin>>buku[n].harga;
				cin.ignore();
				n++;
				break;
			case 2:
				cout<<"Menu: History Pembelian Buku"<<endl;
				cout<<"-----------------------------"<<endl;
				if(n == 0){
					cout<<"Belum ada data buku!"<<endl;
				}else {
					for(int i = 0; i < n; i++){
						cout<<"-- BUKU KE-"<<i+1<<" --"<<endl;
						cout<<"Kode     : "<<buku[i].kode<<endl;
						cout<<"Judul    : "<<buku[i].judul<<endl;
						cout<<"Penulis  : "<<buku[i].penulis<<endl;
						cout<<"Penerbit : "<<buku[i].penerbit<<endl;
						cout<<"Jumlah	 : "<<buku[i].jumlah<<endl;
						cout<<"Harga    : "<<buku[i].harga<<endl;
						cout<<"Total	 : "<<buku[i].jumlah * buku[i].harga;
						cout<<endl;
					}	
				}
				
				break;
			case 3:
				cout<<"Program Selesai...."<<endl;
				loop = false;
				break;
			default:
				cout<<"Inputan salah, ulangi!"<<endl;
				break;		
		}
		cout<<endl;
		system("pause");
		system("cls");
	}
	return 0;
}