#include <iostream>
using namespace std;

int main(){
	int nilai;
	cout << "Nilai ujian = ";
	cin >> nilai;
	
	if (nilai >= 80)
		cout << "Nilai A";
	else if (nilai >= 70)
		cout << "Nilai B";
	else if (nilai >= 60)
		cout << "Nilai C";
	else if (nilai >= 50)
		cout << "Nilai D";
	else if (nilai >= 40)
			cout << "Nilai E";
	else 
			cout << "Nilai F";
}
