#include <stdio.h>

int main() {
    int x[5] = {10, 20, 30, 40, 50};
    printf("x inicia em %X\n", &x);
    printf("x[0] incia em %X e tem valor %d\n", &x[0], x[0]);
    printf("x[1] incia em %X e tem valor %d\n", &x[1], x[1]);
    printf("x[2] incia em %X e tem valor %d\n", &x[2], x[2]);
    printf("x[3] incia em %X e tem valor %d\n", &x[3], x[3]);
    printf("x[4] incia em %X e tem valor %d\n", &x[4], x[4]);
}
