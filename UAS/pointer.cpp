#include <iostream> 

using namespace std;

int main()
{
    int *p;
    int x;

    p = &x;
    x = 10;

    cout <<"nilai x adalah : " << x <<endl;
    cout <<"Nilai *p : " << *p <<endl;
    cout <<"Nilai &x : " << &x <<endl;
    cout <<"Nilai p : " << p <<endl;

    *p = 100;
    cout <<"nilai x adalah : " << x <<endl;
    cout <<"Nilai *p : " << *p <<endl;
    cout <<"Nilai &x : " << &x <<endl;
    cout <<"Nilai p : " << p <<endl;

}