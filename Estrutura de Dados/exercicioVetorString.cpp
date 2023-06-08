#include <stdio.h>
#include <string.h>

int main() {
    char nome[7];
    int s = 0;
    strcpy(nome, "UNIPAR");
    for (int i = 0; i < 7; i++){
        printf("nome[%d] inicia em %X e tem o valor %d --> %c\n", i, &nome[i], nome[i], nome[i]);
    }

}
