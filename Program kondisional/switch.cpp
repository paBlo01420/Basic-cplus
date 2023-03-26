#include <iostream>
using namespace std;

int main()
{
	char nilaihuruf;
	cout << "Cek Predikat Nilai"<<endl;
	cout << "Nilai Huruf = ";
	cin >> nilaihuruf;
	
	switch (nilaihuruf){
		case 'A' :
			cout << "Lulus dengan nilai sangat baik";
			break;
		case 'B' :
			cout << "Lulus dengan nilai baik";
			break;
		case 'C' :
			cout << "Lulus dengan nilai cukup baik";
			break;
		case 'D' :
			cout << "Lulus dengan nilai cukup";
			break;
		case 'E' :
			cout << "Tidak Lulus";
			break;
		default :
			cout << "Nilai tidak valid";
			break;
}
}
