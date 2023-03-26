#include <iostream>

using namespace std;

main(){
    long *Z;
    long Y;

    Z=&Y;

    Y=50; //Mengisikna nilai 10 ke dalma variabel Y

    cout<<"Nilai Y  : "<<Y<<endl;
    cout<<"Nilai *Z : "<<*Z<<endl;
    cout<<"Nilai Z  : "<<Z<<endl;
    cout<<"Nilai &Y : "<<&Y<<endl;

    *Z=200; //Mengisikan nilai 200 ke dalam *Z

    cout<<"Nilai Y  : "<<Y<<endl;
    cout<<"Nilai *Z : "<<*Z<<endl;
    cout<<"Nilai Z  : "<<Z<<endl;
    cout<<"Nilai &Y : "<<&Y<<endl;

    return 0;
}
