#include <iostream>

using namespace std;

main()
{
    int c;      float r, f;
    cout << "--------------------";
    cout << "\n";
    cout << "Celcius \t Reamur \t Fahrenheit \n";
    for (c = 1; c < 30; c++)
        cout << "-"; /*dikerjakan dalam perulangan c*/
        cout << "\n";
    for (c = 1; c < 100; c++)
    {
        r = c * 10;
        f = c + 32;
        cout << c << " t " << r << " t " << f << " \n ";
    }
    for (c = 1; c < 30; c++)
         cout << "-"; /*dikerjakan dalam perulangan c*/

    return 0;
}
