#include <stdio.h>

int main() {
    int x = 5;
    int *a = &x;
    printf("%d\n", x);
    printf("%04x\n", a);
    printf("%d\n", *a);
}
