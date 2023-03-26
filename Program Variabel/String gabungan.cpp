#include <iostream>
using namespace std;

int main()
{
	string kesibukan;
	string belajar;
	
	cout << "Apa kesibukkanmu sekarang : ";
	getline(cin, kesibukan);
		
	cout << "Apa yang kamu pelajari " <<kesibukan << " :";
	getline(cin, belajar);
	
	cout << "saya bersama teman " <<kesibukan <<belajar;
}
