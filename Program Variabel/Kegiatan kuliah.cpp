ku#include <iostream>
using namespace std;

int main()
{
	string kegiatan;
	string universitas;
	
	cout << "Apa kegiatanmu sekarang : ";
	cin >> kegiatan;
	
	cout << "Dimana kamu kuliah " <<kegiatan << " : ";
	getline(cin, universitas);
	
	cout << "Saya " <<kegiatan <<" di " <<universitas;
}
