#include <iostream>
using namespace std;
 
struct Pasangan {
    int x, y;
 
    void print() {
        cout << "(" << x << "," << y << ")\n";
    }
 
    Pasangan operator+ (Pasangan &p2) {
        Pasangan temp;
        temp.x = x + p2.x;
        temp.y = y + p2.y;
        return temp;
    }
};
 
int main() {
    Pasangan p1 = {5, 3};
    Pasangan p2 = {1, 2};
 
    Pasangan p3 = p1 + p2;
    p3.print();
}
