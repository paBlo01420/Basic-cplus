#include <iostream>

using namespace std;

int main() {
    int min, max;
    int sum = 0;

    printf("Program Sum Number hanya Genap\n");
    printf("Masukkan angka minimal : ");
    cin >> min;
    printf("Masukkan angka maksimal : ");
    cin >> max;

    while (min < max) {
        if (!(min % 2) != 0) {
            sum += min;
            printf("%d", min);
            if (min < max - 2) {
                printf(" + ");
            }
        }
        min++;
    }
    printf(" = %d", sum);
}
