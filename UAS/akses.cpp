#include <iostream>
using namespace std;

int main ()
{
    offstream simpanFile ("UAS MDI.txt", ios::app);

    simpanFile <<"Aku sedang UAS" <<endl;

    simpanFile.close();
}