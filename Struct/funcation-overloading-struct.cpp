#include <iostream>
using namespace std;
 
struct Calculator {
 
    int add(int num1, int num2) {
        return num1 + num2;
    }
 
    int add(int num1, int num2, int num3) {
        return num1 + num2 + num3;
    }
};
 
int main() {
    Calculator calculator;
 
    cout << calculator.add(5, 7) << endl;
    cout << calculator.add(9, 2, 5) << endl;
}