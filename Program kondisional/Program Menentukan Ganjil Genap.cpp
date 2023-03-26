#include <iostream>
 
using namespace std;
 
int main()
{
  int x;
 
  cout << "Input sebuah bilangan : ";
  cin >> x;
 
  if (x % 2 == 0) {
    cout << x << " adalah bilangan genap";
    
  }else {
    cout << x << " adalah bilangan ganjil" << endl;
  }

  return 0;
}
