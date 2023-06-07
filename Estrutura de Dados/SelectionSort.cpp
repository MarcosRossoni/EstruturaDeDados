#include <stdio.h>
#include <locale.h>

const int tamanho = 6;
char vetor[tamanho] = {'U', 'N',  'I', 'P', 'A', 'R'};
char temp;
int ii, posicaoMenor;

imprimeVetor() {
    for (int i = 0; i <= tamanho - 1; i++) {
        printf("%c", vetor[i]);
    }
}

main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Vetor antes da ordenação: ");
    imprimeVetor();

    for (int i = 0; i < tamanho - 1; i++) {
        posicaoMenor = i;
        for (int ii = i; ii <= tamanho - 1; ii++) {
            if (vetor[posicaoMenor] > vetor[ii]){
                posicaoMenor = ii;
            }
        }
        temp = vetor[i];
        vetor[i] = vetor[posicaoMenor];
        vetor[posicaoMenor] = temp;
    }

    printf("\n\nVetor depois da ordenação: ");
    imprimeVetor();
}
