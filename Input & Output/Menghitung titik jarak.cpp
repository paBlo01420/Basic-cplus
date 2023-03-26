#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;


int main(int argc, char*agrv[])
{
float x1,y1,x2,y2,A,B, Jarak;
Jarak=0;
cout <<"menghitung jarak 2 titik"<<endl;
cout <<"masukkan titik A(x1)=";cin>>x1;
cout <<"masukkan titik A(y1)=";cin>>y1;
cout <<"masukkan titik B(x2)=";cin>>x2;
cout <<"masukkan titik B(y2)=";cin>>y2;
A=(y2-x2)*(y2-x2);
B =(x1-y1)*(x1-y1);
Jarak =sqrt(A+B);
cout <<endl;


cout <<"Jarak Titik A ke Titik B="<<Jarak<<endl;
cout <<endl;
system ("PAUSE");
return 0;


}

