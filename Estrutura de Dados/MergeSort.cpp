#include <stdio.h>
#include <locale.h>

const int tamanho = 6;
char vetor[tamanho] = {'U', 'N',  'I', 'P', 'A', 'R'};
char temp;

void imprimeVetor() {
    for (int i = 0; i <= tamanho - 1; i++) {
        printf("%c", vetor[i]);
    }
}


int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Vetor antes da ordenação: ");
    imprimeVetor();

    printf("\n\nVetor depois da ordenação: ");
    imprimeVetor();
}
