#include <iostream>

using namespace std;

int main(){
    void *P;   

    int X;
    long Y;
    double Z;

    P=&X;
    X=10;  

    cout<<"Nilai X  : "<<X<<endl;
    cout<<"Nilai P  : "<<P<<endl;
    cout<<"Nilai &X : "<<&X<<endl;
    cout<<endl;

    P=&Y;
    Y=2000; 

    cout<<"Nilai Y  : "<<Y<<endl;
    cout<<"Nilai P  : "<<P<<endl;
    cout<<"Nilai &Y : "<<&Y<<endl;
    cout<<endl;

    P=&Z;
    Z=50.000; 

    cout<<"Nilai Z  : "<<Z<<endl;
    cout<<"Nilai P  : "<<P<<endl;
    cout<<"Nilai &Z : "<<&Z<<endl;
    cout<<endl;

    return 0;
}
