#include <iostream>

using namespace std;

int main()
{
    int n, i;
    for (n = 0, i = 10; n != i; n++, i--)
    {
        cout << "Nilai n = " << i << " -- ";
        cout << "Nilai i = " << n <<endl;
    }
    return 0;
}