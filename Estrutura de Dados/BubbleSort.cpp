#include <stdio.h>
#include <locale.h>

const int tamanho = 6;
char vetor[tamanho] = {'U', 'N',  'I', 'P', 'A', 'R'};
char temp;
int trocou;

int imprimeVetor() {
    for (int i = 0; i < tamanho; ++i) {
        printf("%c ", vetor[i]);
    }
}

int main () {
    setlocale(LC_ALL, "Portuguese");
    printf("Vetor antes da ordenação: ");
    imprimeVetor();

    do {
        trocou = 0;
        for (int i = 0; i < tamanho; ++i) {
            if (vetor[i] > vetor[i + 1]) {
                temp = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = temp;
                trocou = 1;
            }
        }
    } while (trocou == 1);

    printf("\n\nVetor depois da ordenação: ");
    imprimeVetor();
}
