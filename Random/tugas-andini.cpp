#include <iostream>

using namespace std;

int main(){
	string jenisKelamin;
	int usia;
	cout << "PERSYARATAN PERUSAHAAN\n";
	cout << "======================\n";
	cout << "Kasir: \n";
	cout << "\t1.Harus Perempuan \n";
	cout << "\t2.Usia Maks 21 tahun \n";
	cout << endl;
	cout << "Gudang: \n";
	cout << "\t1.Harus Laki-laki \n";
	cout << "\t2.Usia Maks 25 tahun \n";
	cout << "========================\n";
	cout << endl;
	
	cout << "  PENERIMAAN KARYAWAN\n";
	cout << "*---------------------*\n";
	cout << "Ketik 1 untuk Perempuan \n";
	cout << "Ketik 2 untuk Laki-laki \n";
	cout << "Pilih Jenis Kelamin: "; cin >> jenisKelamin;
	cout << "Masukkan Usia Anda: "; cin >> usia;
	if (usia <= 21){
		cout << "Anda di Bagian Kasir ";
	}else if (usia <= 25){
		if (usia >= 21){
			cout << "Anda Bagian Gudang ";
		}
	}else if (usia>=26){
		cout << "Anda bukan kategori ";
    }else {
    	cout << "Selamat Mencoba Lagi ";
	}

	return 0;
}
