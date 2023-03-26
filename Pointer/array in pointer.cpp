#include <iostream>

using namespace std;

int main(){
    char array[5];
    char* a;
    a=array;
    *a='a';
    a++;
    *a='b';
    a=&array[2]; *a='c';
    a=array+3; *a='d';
    a=array;*(a+4) ='e';
    for (int n=0; n<6; n++)
        cout<<array[n]<<" ";
    cout<<endl;
}

