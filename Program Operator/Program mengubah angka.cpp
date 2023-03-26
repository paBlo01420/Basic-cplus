#include <iostream>

using namespace std;

int main() {
    float angka1, angka2;

	cout << "Pertukaran Angka Dengan Operator " << endl;
    cout << "Masukkan angka pertama\t: " << endl;
    cin >> angka1;
    cout << "Masukkan angka kedua\t: " << endl;
    cin >> angka2;
    //system("cls");
    printf ("Angka sebelum ditukar : %g || %g\n"), angka1, angka2;

    angka1+=angka2;
    angka2=angka1-angka2;
    angka1-=angka2;

    printf ("Angka setelah ditukar : %g || %g"), angka1, angka2;
    
    return 0;
}
