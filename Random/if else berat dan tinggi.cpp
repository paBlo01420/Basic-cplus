#include<iostream>
using namespace std;

main()
{
 int beratBadan;
 float tinggiBadan;
 cout << "Berat Badan = ";
 cin >> beratBadan;
 cout << "Tinggi Badan = ";
 cin >> tinggiBadan;
 
 if (beratBadan == (tinggiBadan-110))
  cout << "Ideal";
 else if (beratBadan <= (tinggiBadan-110))
  cout << "Kurus";
 else if (beratBadan >= (tinggiBadan-110))
  cout << "gemuk";
  
 return 0;
}

