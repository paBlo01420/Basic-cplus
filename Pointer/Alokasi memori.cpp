#include <iostream>

using namespace std;

int main(){
    // Mendeklarasikan var
    int *P, n;

    // Dialokasikan 5 blok memori int

    printf("Ukuran array input: ");
    cin >> n;

    if (n >= 6) {
        printf("Mencapai ukuran maks!");
        return 0;
    }

    for (int i = 0; i < n; i ++) {
        printf("Masukan P[%d] --> %-#16p : ", i, &P);
        cin >> P[i];
    }

    printf("\n Sebelum dibatalkan alokasinya\n");
    for (int i = 0; i < n; i ++) {
        printf("P[%d] : %-6d alamat: %-#16p \n", i, P[i], &P);
    }

    printf("\n Setelah dibatalkan alokasi\n");
    delete [] P;
    for (int i = 0; i < n; i ++) {
        printf("P[%d] : %-6d alamat: %-#16p \n", i, P[i], &P);
    }
}
