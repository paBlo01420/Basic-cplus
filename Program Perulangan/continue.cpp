#include <iostream>

using namespace std;

int main() {
    int i;

    for (i = 1; i < 10; i++) {
        if (i > 8) {
            break;
        }

        if ((i % 2) != 0) { 
            continue;
        }

        printf("%d\n", i);
    }
}
