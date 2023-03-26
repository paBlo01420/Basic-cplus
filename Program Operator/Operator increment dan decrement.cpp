#include <iostream>
using namespace std;

int main()
{
	//Pre Increment//
	int a, b, c, d;
	a = 10;
	b = ++a;
	cout << "a:" << a <<endl;
	cout << "b:" << b <<endl;
	
	//Post Increment//
	c = 5;
	d = c++;
	cout << "c:" << c <<endl;
	cout << "d:" << d <<endl;
}
