#include <iostream>
using namespace std;
 
struct People {
    string nama;
    int umur;
    char jenisKelamin;
 
    void print() {
        cout << umur << " - ";
        cout << nama << " - ";
        cout << jenisKelamin;
    }
};
 
int main() {
    People p1 = { "Bob", 15, 'M' };
    cout <<"\n";
    People p2 = { "Margaret", 17, 'F' };
 
    p1.print();
    p2.print();
}