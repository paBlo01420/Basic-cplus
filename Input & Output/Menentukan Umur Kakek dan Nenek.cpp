#include <iostream>

using namespace std;

main()
{
	int lahirKakek;
	int lahirNenek;
	int tahun;
	tahun = 2022;
	
	cout << "Tahun Lahir Kakek = ";
	cin >> lahirKakek;
	
	cout << "Tahun Lahir Nenek = ";
	cin >> lahirNenek;
	
	cout << "Umur Kakek Sekarang = " << tahun - lahirKakek;
	cout << "tahun" << endl;
	
	cout << "Umur Nenek Sekarang = " << tahun - lahirNenek;
	cout << "tahun";
}
