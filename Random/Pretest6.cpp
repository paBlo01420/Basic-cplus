#include <iostream>

using namespace std;

int main()
{
    int i,j;
    int n = 6;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++) {
        printf(" ", j);
        }
        cout << endl;
    }
}          
