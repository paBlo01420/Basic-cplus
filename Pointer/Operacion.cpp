#include <iostream>

using namespace std;

main(){
    float nilai, *x1, *x2;
    nilai=90;
    cout<<"Nilai    = "<<nilai<<", alamatnya "<<&nilai;
    x1=&nilai;
    x2;x1; //operasi pemberian nilai, berarti alamat x2 sama dengan x1

    cout<<"\nNilai x1 = "<<*x2<<", x1 menunjuk alamat "<<x1;
    cout<<"\n";
    //pada awalnya x2 masih dangling pointer
    cout<<"\nMula-mula nilai x2 = "<<*x1<<", x2 menunjuk alamat "<<x2;
    cout<<"\nSekarang nilai x2  = "<<*x1<<", x2 menunjuk alamat "<<x2;
    cout<<endl;
    
    return 0;
}
