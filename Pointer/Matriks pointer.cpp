#include <iostream>

using namespace std;

const int array =6;

main(){
    int A [array];
    const int *pInt=A;
    for (int i=0; i<array; i++)
    {
        cout<<"Input array : ";cin>>A[i];
    }
    for (int n=0; n<array; n++)
    {
        cout<<"Element ["<<n<<"] = "<<*(pInt)<<endl;
        pInt++;
    }
}
