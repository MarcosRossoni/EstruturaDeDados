#include <stdio.h>

int numero[5];

main() {
    for (int a = 0; a <= 4; a++){
        numero[a] = a * 2;
        printf("%d - %d\n", a, a * 2);
    }
}
