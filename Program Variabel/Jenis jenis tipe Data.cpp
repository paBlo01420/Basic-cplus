#include <iostream>
using namespace std;

int main()
{
	float umur;
	double nik;
	bool suhu_tubuh;
	char jenisKelamin;
	string nama;
	int tanggal;
		
	cout << "Nama\t :";
	getline(cin, nama );
	cout << "Tanggal :"; 
	cin >> tanggal;
    cout << "Umur\t :";
	cin >> umur;
	cout << "Nik\t :";
	cin >> nik;
    cout << "Suhu tubuh :";
	getline(cin, suhu_tubuh);
	cout << "Jenis Kelamin :";
	cin >> jenisKelamin;
}
	 

