  #include <iostream>
using namespace std;

int main() {
	// membuat variabel
	char name[20], web_address[30];
	
	printf("Nama\t\t :");
	scanf("%s", &name);
	
	printf("Alamat web\t :");
	scanf("%s", &web_address);
	
	printf("\n------------------------------\n");
	printf("Nama yang diinputkan: %s\n", name);
	printf("Alamat Web yang diimputkan: %s\n", web_address);
	
	return 0;
}
