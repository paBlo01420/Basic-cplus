#include <iostream>

using namespace std;

main(){
    int *de, *dc, e=100, c=10;

    de=&e;
    dc=&c;
    if(*de<*dc)
    {
        cout<<"de menunjuk ke memori lebih RENDAH dari dc\n";
    }else if(*de==*dc)
    {
        cout<<"de menunjuk ke memori yang SAMA dengan dc\n";
    }else if (*de>*dc)
    {
        cout<<"de menunjuk ke memori lebih Tinggi dari dc\n";
    }else{
        cout <<"de memori tidak ditemukan";
    }
}
