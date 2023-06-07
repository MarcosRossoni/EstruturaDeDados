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

    int j, gap = tamanho / 2;

    while (gap >= 1) {
        for (int i = gap; i < tamanho; i++) {
            temp = vetor[i];
            j = i;

            while (vetor[j -gap] > temp) {
                vetor[j] = vetor[j - gap];
                j = j- gap;
                if (j < gap) {
                    break;
                }
            }
            vetor[j] = temp;
        }
        gap = gap / 2;
    }

    printf("\n\nVetor depois da ordenação: ");
    imprimeVetor();
}