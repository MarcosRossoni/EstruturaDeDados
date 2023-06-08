#include <iostream>

void bubbleSort(int vetor[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    int vetor[] = {5, 9, 2, 1, 7, 4, 10, 6, 3, 8};
    int n = sizeof(vetor) / sizeof(vetor[0]);

    std::cout << "Lista original: ";
    for (int i = 0; i < n; ++i) {
        std::cout << vetor[i] << " ";
    }

    bubbleSort(vetor, n);

    std::cout << "\nLista ordenada: ";
    for (int i = 0; i < n; ++i) {
        std::cout << vetor[i] << " ";
    }

    return 0;
}

