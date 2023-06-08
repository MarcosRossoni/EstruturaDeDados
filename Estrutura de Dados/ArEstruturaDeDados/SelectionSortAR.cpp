#include <iostream>

void selectionSort(int vetor[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int menorIndex = i;

        for (int j = i + 1; j < n; ++j) {
            if (vetor[j] < vetor[menorIndex]) {
                menorIndex = j;
            }
        }
        int temp = vetor[menorIndex];
        vetor[menorIndex] = vetor[i];
        vetor[i] = temp;
    }
}

int main() {
    int vetor[] = {5, 9, 2, 1, 7, 4, 10, 6, 3, 8};
    int n = sizeof(vetor) / sizeof(vetor[0]);

    std::cout << "Lista original: ";
    for (int i = 0; i < n; ++i) {
        std::cout << vetor[i] << " ";
    }

    selectionSort(vetor, n);

    std::cout << "\nLista ordenada: ";
    for (int i = 0; i < n; ++i) {
        std::cout << vetor[i] << " ";
    }

    return 0;
}

