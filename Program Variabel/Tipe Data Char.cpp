#include <iostream>
using namespace std;

int main()
{
	// membuat variabel
	char name[20], web_address[30];
	
	printf("Nama : ");
	scanf("%[^\n]s", &name);
	
	printf("Web address : ");
	scanf("%s", &web_address);
	
	printf("\n---------------------\n");
	printf("Nama yang diinputkkan: %s\n", name );
	printf("Alamat web yang diinputkkan: %s\n", web_address );
}
