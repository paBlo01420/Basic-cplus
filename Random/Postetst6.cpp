#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int menu;
    int c, k, f;

    while (1){
    
    cout << "~~~ MENU KONVERSI SUHU ~~~";
    cout << "1)\t Konversi dari C ke F\n";
    cout << "2)\tKonversi dari C ke K\n";
    cout << "3)\tKonversi dari F ke C\n";
    cout << "4)\tKonversu dari F ke K\n";
    cout << "5)\tKonversi dari K ke C\n";
    cout << "6)\tKonversi dari K ke F\n";
    cout << "1)\tKeluar\n";
    cout << "-------------------------";

    cout << "Pilih Nomor Menu : "; 
    cin >> "%d", menu;
    cin.ignore();

    if(menu == 1){
        cout << "Masukkan nilai Celcius :";
        cin >> "%f", c;

        k = k-273;
        f = 5/9 * (f-32);

        cout << "Celcius dalam kelvin adalah %.2f\n", k;
        cout << "Celcius dalam fahrenheit adalah %.2f\n", f;

    } else if (menu == 2){
        cout << "Masukkan nilai Fahrenheit :";
        cin >> "%f", f;

        c = 9/5 * c + 32;
        k = 5/9 * (f-32) + 273;

        cout << "Fahrenheit dalam celcius adalah %.2f\n", c;
        cout << "Fahrenheit dalam kelvin adalah %.2f\n", k;

    } else if (menu == 3){

        cout << "Masukkan nilai Kelvin: ";
        cin  >> "%f", k;

        c = c + 273;
        f = 5/9 * (f-32) + 273;

        cout << "Kelvin dalam celcius adalah %.2f\n", c;
        cout << "Kelvin dalam fahrenheit adalah %.2f\n", f;
    } else if (menu == 4){
        exit(0);
    } else {
        cout << "Menu yang diinputkan salah";
    }

    }
    
    return 0;
}
