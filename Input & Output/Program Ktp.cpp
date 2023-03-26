#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	string Nik, Nama, TTL, jenisKelamin, Alamat, tgl, rtrw, kelDesa, kecamatan, agama, statusPernikahan, pekerjaan, kewarganegaraan, berlakuHingga;
	
	cout << "NIK\t\t\t : ";
	getline(cin, Nik);
	
	cout << "Nama\t\t\t : ";
	getline(cin, Nama);
	
	cout << "Tempat/Tgl Lahir\t :";
	getline(cin, TTL);
	
	cout << "Jenis Kelamin\t\t :";
	getline(cin, jenisKelamin);
	
	cout << "Alamat\t\t\t :";
	getline(cin, Alamat);
	
	cout << "RT/RW\t\t\t :";
	getline(cin, rtrw);
	
	cout << "Kel/Desa\t\t :";
	getline(cin, kelDesa);
	
	cout << "Kecamatan\t\t :";
	getline(cin, kecamatan);
	
	cout << "Agama\t\t\t :";
	getline(cin, agama);
	
	cout << "Status Pernikahan\t :";
	getline(cin, statusPernikahan);
	
	cout << "Pekerjaan\t\t :";
	getline(cin, pekerjaan);
	
	cout << "Kewarganegaraan\t\t :";
	getline(cin, kewarganegaraan);
	
	cout << "Berlaku Hingga\t\t :";
	getline(cin, berlakuHingga);
	
	cout << "NIK\t\t :" <<Nik;
	cout <<endl;
	cout << "Nama\t\t :" <<Nama;
	cout <<endl;
	cout << "Tempat/Tgl Lahir :" << tgl;
	cout <<endl;
	cout << "Jenis Kelamin\t :" << jenisKelamin;
	cout <<endl;
	cout << "\t\tAlamat\t :" << Alamat;
	cout <<endl;
	cout << "\t\tRT/RW\t :" <<rtrw;
	cout <<endl;
	cout << "\t\tKel/Desa  :" <<kelDesa;
	cout <<endl;
	cout << "\t\tKecamatan :" <<kecamatan;
	cout <<endl;
	cout << "Agama\t\t :" <<agama;
	cout <<endl;
	cout << "Status Pernikahan:" <<statusPernikahan;
	cout <<endl;
	cout << "Pekerjaan\t :" <<pekerjaan;
	cout <<endl;
	cout << "Kewarganegaraan\t :" <<kewarganegaraan;
	cout <<endl; 
	cout << "Berlaku Hingga\t :" <<berlakuHingga;
	cout <<endl;
	
}
