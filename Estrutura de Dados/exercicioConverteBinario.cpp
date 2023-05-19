#include <stdio.h>
#include <stdlib.h>

main() {
    int x = 42;
    int y = -42;
    char b[100];
    printf("%d\n", sizeof(int));
    printf("%s --> %d\n", itoa(x,b,2), x);
    printf("%s --> %d\n", itoa(y,b,2), y);
}