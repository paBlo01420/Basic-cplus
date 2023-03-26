#include <iostream>

using namespace std;

int umur[4] = {18, 19, 20, 21};
int n, hasil=0;
int main ()
{
for ( n=0 ; n<4 ; n++)
{
hasil+= umur[n];
}
cout << hasil;
return 0;
}
