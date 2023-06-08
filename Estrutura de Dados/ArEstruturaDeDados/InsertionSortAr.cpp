#include <iostream>

void insertionSort(int vetor[], int n) {
    for (int i = 1; i < n; ++i) {
        int chave = vetor[i];
        int j = i - 1;

        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j--;
        }

        vetor[j + 1] = chave;
    }
}

int main() {
    int vetor[] = {5, 9, 2, 1, 7, 4, 10, 6, 3, 8};
    int n = sizeof(vetor) / sizeof(vetor[0]);

    std::cout << "Lista original: ";
    for (int i = 0; i < n; ++i) {
        std::cout << vetor[i] << " ";
    }

    insertionSort(vetor, n);

    std::cout << "\nLista ordenada: ";
    for (int i = 0; i < n; ++i) {
        std::cout << vetor[i] << " ";
    }

    return 0;
}

