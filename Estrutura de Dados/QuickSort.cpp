#include <stdio.h>
#include <locale.h>

const int tamanho = 6;
char vetor[tamanho] = {'U', 'N',  'I', 'P', 'A', 'R'};

void imprimeVetor() {
    for (int i = 0; i <= tamanho - 1; i++) {
        printf("%c", vetor[i]);
    }
}

void quickSort(char vet[], int inicio, int fim) {
    if (inicio < fim) {
        char pivot = vet[inicio];
        char temp;
        int i = inicio;
        int f = fim;
        while (true){
            while (pivot < vet[f]) {
                f--;
            }
            while (pivot > vet[i]) {
                i++;
            }
            if (i >= f) {
                break;
            }
            temp = vet[i];
            vet[i] = vet[f];
            vet[f] = temp;
        }
        quickSort(vet, inicio, f);
        quickSort(vet, f +1, fim);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Vetor antes da ordenação: ");
    imprimeVetor();
    quickSort(vetor, 0, tamanho -1);

    printf("\n\nVetor depois da ordenação: ");
    imprimeVetor();
}
