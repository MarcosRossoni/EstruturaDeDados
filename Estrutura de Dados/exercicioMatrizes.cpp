#include <stdio.h>

int notas[3][4];

int main () {
    printf("Informe as notas dos alunos\n\n");
    for (int a = 0; a < 3; a++){
        printf("%do. aluno\n", a+1);
        for (int n = 0; n < 4; n++) {
            printf(" %da. nota: ", n+1);
            scanf("%d", &notas[a][n]);
        }
    }
}
