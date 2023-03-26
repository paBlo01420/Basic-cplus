#include <iostream>

using namespace std;

main(){
    int jam,menit,detik;
    cout<<" Masukan Jumlah detik yang mau dihitung : ";
    cin>>detik;
    
    jam = detik /(60*60);
    detik = detik-((60*60)*jam);
    menit = detik / 60;
    detik = detik -(60*menit);
    cout<<" Maka Waktunya Adalah : "<<endl;
    cout<<" Jam : "<<jam<<endl;
    cout<<" Menit : "<<menit<<endl;
    cout<<" Detik : "<<detik;
    
    return 0;
}
