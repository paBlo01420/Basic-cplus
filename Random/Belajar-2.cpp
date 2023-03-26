#include <iostream>

using namespace std;

int main()
{
	int angka;
	
	cout << "Masukkan sebuah bilangan : "; cin >> angka;
	
	if (angka > 0)
	{
		cout << "Kamu Masukkan Bilangan positif " << angka <<endl;
	} else {
		cout << "Kamu Masukkan Bilangan negatif " << angka <<endl;
	} 
	cout << "Salah masukkan bilangan ";
}
