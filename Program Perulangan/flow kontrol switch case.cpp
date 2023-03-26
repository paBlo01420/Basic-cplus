#include <iostream> 
using namespace std;
 
int main ()
{
	int juara;
 	cout<<"masukkan peringkat : "; 
	cin>>juara; 
	
	switch(juara){
		
 		case 1 : cout<<"anda juara 1";
			break;
 		case 2 : cout<<"anda juara 2";
	 		break;
 		case 3 : cout<<"anda juara 3";
	 		break;
 			default :
			 cout<<"anda belum juara";
			break;
 	}
 	
 return 0;
 }

