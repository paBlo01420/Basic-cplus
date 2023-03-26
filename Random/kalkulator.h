#ifndef _kalkulator_h
#define _kalkulator_h

using namespace std;

int add (int a, int b){
	return a+b;
}

int kurang (int a, int b){
	int hasil;
	hasil = a-b;
	return hasil;
}

int kali (int a, int b){
	return a*b;
}

int bagi (int a, int b){
	return a/b;
}
void a (){
	int pil;
	int angka1, angka2;
	
	cout <<"PROGRAM KALKULATOR"<<endl;
	cout <<"1.Tambah"<<endl;
	cout <<"2.Kurang"<<endl;
	cout <<"3.kali"<<endl;
	cout <<"4.Bagi"<<endl;
	
	cout <<"Masukkan pilihan: ";cin>>pil;
	
	cout <<"Masukkan angka pertama: ";cin >>angka1;
	cout <<"Masukkan angka kedua: ";cin >>angka2;
	
	switch (pil){
		case 1:
			cout <<"Hasil "<<angka1 <<" + "<<angka2 <<" = " <<add(angka1,angka2)<<endl;
			break;
		case 2: 
			cout <<"Hasil "<<angka1 <<" - "<<angka2 <<" = " <<kurang(angka1,angka2)<<endl;
			break;
		case 3: 
			cout <<"Hasil "<<angka1 <<" x "<<angka2 <<" = " <<kali(angka1,angka2)<<endl;
			break;
		case 4:
			cout <<"Hasil "<<angka1 <<" : "<<angka2 <<" = " <<bagi(angka1,angka2)<<endl;
			break;
			
		default: 
			cout <<"Program tidak valid!";
	}
}

#endif
