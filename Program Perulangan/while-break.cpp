#include <iostream>

using namespace std;

int main()
{
    int n, i =1;
    cout << "Masukkan bilangan positif = ";
    cin >> n;
    long total = 0;
    while (true)
    {
        if (i > n)
        break;
        total += i++;
    }
    cout << "Jumlah dari " << n << " Bilangan pertama adalah " << total;

    return 0;
}