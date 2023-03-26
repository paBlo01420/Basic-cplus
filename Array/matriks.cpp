#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    // int arr[5][3] = {
    //     {0,1,0},
    //     {1,1,1},
    //     {0,1,0},
    //     {0,1,0},
    //     {1,1,1}
    // };

    int a = 3;
    int b = 2;

    int arr[a][b];
    int arr2[a][b];

    for (int i=0; i < a; i++) {
        for (int j=0; j < b; j++) {
            printf("Input element [%d][%d] : ", i, j);
            cin >> arr[i][j];
        }
    }

    for (int i=0; i < a; i++) {
        for (int j=0; j < b; j++) {
            printf("Input element [%d][%d] : ", i, j);
            cin >> arr2[i][j];
        }
    }
    

    printf("\n");
    for (int i=0; i < a; i++) {
        printf("| ");
        for (int j=0; j < b; j++) {
            printf("%d ", arr[i][j]+arr2[i][j]);
        }
        printf("|\n");
    }
}
