#include <stdio.h>

struct buah{
   int berat;
   char namaBuah[50];
};
 
int main(){
  
    struct buah *buahPtr, data1;
    buahPtr = &data1;   
 
    printf("Input: \n");
    printf("Masukkan Berat buah : ");
    scanf("%d", &buahPtr->berat);
    printf("Masukkan Nama buah  : ");
    scanf("%s", &buahPtr->namaBuah);
 
    printf("\nOutput: \n");
    printf("Berat buah : %dkg\n", buahPtr->berat);
    printf("Nama buah  : %s\n", buahPtr->namaBuah);
 
    return 0;
}
