#include <iostream>
#include <math.h>

using namespace std; 

int main()
{
    double x;
    cout << "Masukkan bilangan positif = ";
    cin >> x;

    while (x > 0)
    {
        cout << "sqrt (" << x << ") = " << sqrt (x) <<endl;
        cout << "Masukkan bilangan positif lainnya (atau masukkan 0 untuk keluar) : ";
        cin >> x;
    }

    return 0;
    
}