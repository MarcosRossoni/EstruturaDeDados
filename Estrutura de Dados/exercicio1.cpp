#include <stdio.h>
#include <locale.h>

int valor;
main() {
	setlocale(LC_ALL, "Portuguese");
    scanf("%d", &valor);
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	printf("a = %d, b = %d, c = %d, d = %d, e = %d", a, b, c, d, e);
    printf("\n");
    printf("%d", valor);
}
