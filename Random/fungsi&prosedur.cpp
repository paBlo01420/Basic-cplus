#include <iostream>

using namespace std;

//prosedur -> tidak memiliki nilai pengembalian
void siswa(){
	string nama = "Pablo";
	string hobi = "skate";
	cout << nama << " anak keren dan hobi " << hobi << endl;
}

//fungsi -> memiliki nilai pengembalian 
string siswi(){
	string nama = "angel";
	string hobi = "bermain game";
	return (nama+" hobi "+hobi);
}

int main(){
	siswa();
	cout<<siswi()<<endl;
}
