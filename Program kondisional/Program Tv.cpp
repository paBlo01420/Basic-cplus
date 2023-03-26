#include <iostream>

using namespace std;

main()
{
	int pilihan;
	cout << "1. RCTI"<< endl;
	cout << "2. ANTV"<< endl;
	cout << "3. GLOBAL TV"<< endl;
	cout << "====================="<< endl;
	
	cout << "Masukkan pilihan : " ;
	cin >> pilihan;
	cout << endl;
	
	system("cls");
	
	if (pilihan == 1){
		cout << "Jadi Program yang dipilih 1. RCTI" << endl;
	}else if (pilihan == 2){
		cout << "Jadi Program yang dipiih 2. ANTV" << endl;
	}else if (pilihan == 3){
		cout << "Jadi Program yang dipilih 3. GLOBAL TV" << endl;
	}else {
		cout << "Tidak ada Program yang dipilih" <<endl;
	}
	
	
	 return 0;
}
