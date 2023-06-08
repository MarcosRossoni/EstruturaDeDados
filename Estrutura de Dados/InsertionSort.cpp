#include <stdio.h>
#include <locale.h>

const int tamanho = 6;
char vetor[tamanho] = {'U', 'N',  'I', 'P', 'A', 'R'};
char temp;
int ii;

int imprimeVetor() {
    for (int i = 0; i <= tamanho - 1; i++) {
        printf("%c", vetor[i]);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Vetor antes da ordenação: ");
    imprimeVetor();

    for (int i = 1; i <= tamanho - 1; i++) {
        temp = vetor[i];
        ii = i - 1;
        while (ii >= 0 & temp < vetor[ii]) {
            vetor[ii + 1] = vetor[ii];
            ii--;
        }
        vetor[ii + 1] = temp;
    }

    printf("\n\nVetor depois da ordenação: ");
    imprimeVetor();
}