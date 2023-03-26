#include <iostream>

using namespace std;

struct tv {
    int berat;
    float inci;
};

int main() {
    tv *ptr, d;

    ptr = &d;
    
    cout << "Jumlah tv: ";
    cin >> (*ptr).berat;
    cout << "Ukuran: ";
    cin >> (*ptr).inci;
 
    cout << "iNFORMASI TV" << endl;
    cout << "Jumlah TV : " << (*ptr).berat << " buah &  " << (*ptr).inci << "Inci";

    return 0;
}
