#include <stdio.h>
#include <stdlib.h>

main() {
    int x = 2147483647;
    char b[100];
    printf("%11d --> %s\n",x, itoa(x,b,2));
    x++;
    printf("%11d --> %s\n",x, itoa(x,b,2));
}
