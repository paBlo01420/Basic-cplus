#include <iostream>

using namespace std;

main()
{
	int acara;
	cout << "1. RCTI" <<endl;
	cout << "2. ANTV" <<endl;
	cout << "3. GLOBAL TV" <<endl;
	cout << "=============="<< endl;
	cout << "Masukkan Pilihan = ";
	cin >> acara;
	
	if (acara == 1){
		cout << "Jadi Program Tv yang di pilih RCTI"<< endl;
	}else if (acara == 2){
		cout << "Jadi Program Tv yang di pilih ANTV"<< endl;
	}else if (acara == 3){
		cout << "Jadi Program Tv yang di pilih GLOBAL TV"<< endl;
	}else {
		cout << "Tidak ada program tv yang dipilih"<< endl; 
	}
		
		return 0;
		
}
