#include <iostream>
using namespace std;

struct data1(){
    string user;
    string pass;
    string validUser;
    string validPass;
};

void display(){
    data1 dt;
    
    cout <<"Masukkan user: ";
    cout <<dt.user;
}
