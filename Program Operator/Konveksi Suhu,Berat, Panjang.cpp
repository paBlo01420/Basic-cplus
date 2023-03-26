#include <iostream>
 
using namespace std;

main()
{
	int suhu, berat, panjang;
	cout << "~~~ Program Konveksi ~~~" << endl;
	cout << endl;
	cout << "Masukkan suhu celcius : ";
	cin >> suhu;
	cout << "Masukkan berat : ";
	cin >> berat;
	cout << "Masukkan panjang : ";
	cin >> panjang;
	cout << endl;
	
	cout << "~~~ Konveksi suhu ~~~" << endl;
	cout << " Celcius -> Farenheit = " << 1.8 * suhu+32 << endl;
	cout << " Celcius -> Reamur = " << 0.8 * suhu << endl;
	cout << " Celcius -> Kelvin = " <<suhu + 273 << endl;
	cout << endl;
	cout << "~~~ Konveksi berat ~~~" << endl;
	cout << " Kilo Gram -> Gram = " << berat * 1000 << endl;
	cout << " Kilo Gram -> Pon = " << berat * 2 << endl;
	cout << endl;
	cout << "~~~ Konveksi panjang ~~~" << endl;
	cout << " Kilo meter -> Meter = " << panjang * 1000 <<endl;
	cout << " Kilo meter -> Mil = " << panjang * 0.6 <<endl;
	cout << " Kilo meter -> kaki = " << panjang * 3280 <<endl;
	
}
