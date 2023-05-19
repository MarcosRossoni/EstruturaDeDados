#include <stdio.h>

main() {
    printf("Decimal\t\tHexaDecimal\tCaracter\n");
    for (int i = 0; i <= 255; ++i) {
        printf("%3d\t\t%2x\t\t%c\n", i, i, i);
    }
}
