 #include <iostream>

using namespace std;


int main()
{
	float input, output;
	char asal, tujuan;
	
	cout<<"Masukan skala asal        : ";cin>>asal;
	cout<<"Masukan suhu asal dalam "<<asal<<" : ";cin>>input;
	cout<<"Masukan skala tujuan      : ";cin>>tujuan;
	 
	switch(asal) {
		case 'C' :
			switch(tujuan) {
				case 'C' :
					output = input;
					break;
				case 'K' :
					output = input + 273;
					break;
				case 'F' :
					output = 1.8 * input + 32;
					break;
				default :
					cout<<"Skala tujuan tidak ditemukan!"<<endl;
					break;		
			}
			break;
		case 'K' :
			switch(tujuan) {
				case 'C' :
					output = input - 273;
					break;
				case 'K' :
					output = input;
					break;
				case 'F' :
					output = 1.8 * (input - 273) + 32;
					break;
				default :
					cout<<"Skala tujuan tidak ditemukan!"<<endl;
					break;		
			}
			break;
		case 'F' :
			switch(tujuan) {
				case 'C' :
					output = (input - 32) / 9 * 5;
					break;
				case 'K' :
					output = (input - 32) / 9 * 5 + 273;
					break;
				case 'F' :
					output = input;
					break;
				default :
					cout<<"Skala tujuan tidak ditemukan!"<<endl;
					break;		
			}
			break;
		default :
			cout<<"Skala asal tidak ditemukan!"<<endl;
			break;		
	}
	
	cout<<endl<<input<<" derajat "<<asal<<" sama dengan "<<output<<" derajat "<<tujuan<<endl;
	
}
