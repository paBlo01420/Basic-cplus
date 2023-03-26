#include <iostream>

using namespace std;

int main(){
	const float LIMIT = 60.0;
	int idMobil;
	float kecepatan;
	
	cout <<"\nMasukkan Nomor Mobil dan Kecepatan : ";
	cin >> idMobil >> kecepatan;
	
	if (kecepatan > LIMIT)
	cout << "\nMobil " << idMobil << "Melebihi batas kecepatan" << endl;
	
	return 0;
}
