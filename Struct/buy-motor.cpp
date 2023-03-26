#include <iostream>
using namespace std;

struct motor {
string jenis ; 
string harga ;
string warna ;
int seats;
};
int main()
{
motor c1; // Line 1 Creating variable of type Car
c1.jenis = "Vespa Matic"; // Line 2 Setting up the Member variable values. . .
c1.harga = "20 jt";
c1.warna = "White";
c1.seats = 5;
cout << " Car details are as below: \n " << endl;
cout << " jenis: " << c1.jenis << endl; // Line 3 Accessing the memeber variables
cout << " harga: " << c1.harga << endl; // using . (Dot) operator
cout << " warna: " << c1.warna << endl;
cout << " Seat Capacity: " << c1.seats << endl;
return 0;
}