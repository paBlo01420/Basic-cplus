#include <iostream>

using namespace std;

int main()
{
	int MD;
	
	//Meminta user memasukkan nilai MD
	cout << "Masukkan nikai MD = ";
	cin >> MD;
	
	//Melakukan pemeriksaan nilai MD
	if (MD > 8){
		MD= -MD;
	}
	
	//Menampilkan nilai MD
	//Setelah proses pemeriksaan
	cout << "\n Nilai MD = " <<MD;
	
	return 0;
	
}
