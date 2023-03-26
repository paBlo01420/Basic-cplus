#include <iostream>
using namespace std;

main ()
{
	int angka1, angka2,hasil1, hasil3, hasil2, hasil5;
	float hasil4;
	cout << "Masukkan angka 1 = ";
	cin >> angka1;
	cout << "Masukkan angka 2 = ";
	cin >> angka2;
	cout << "================" <<endl;
	
	hasil1 = angka1 + angka2; 
	hasil2 = angka1 - angka2;
	hasil3 = angka1 * angka2;
	hasil4 = (float)angka1 / (float)angka2;
	hasil5 = angka1 % angka2;
	
	cout << "Hasil " << angka1 << " + " <<angka2 << " = " << hasil1 <<endl;
	cout << "Hasil " << angka1 << " - " <<angka2 << " = " << hasil2 <<endl;
	cout << "Hasil " << angka1 << " * " <<angka2 << " = " << hasil3 <<endl;
	cout << "Hasil " << angka1 << " / " <<angka2 << " = " << hasil4 <<endl;
	cout << "Hasil " << angka1 << " % " <<angka2 << " = " << hasil5 <<endl;

	
}
