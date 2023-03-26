#include<iostream>
using namespace std;

int main()
{
	int nilai;
	cout << "Nilai ujian = ";
	cin >> nilai;
	
	if (nilai >= 60)
		cout << "Lulus";
	else
	cout << "Tidak lulus";
	
	return 0;	
}
