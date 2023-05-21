#include <conio.h>
#include <locale.h>
#include <stdlib.h>

struct elemento {
    char conteudo;
    elemento *proximo;
};

elemento *inicio = NULL;
int numeroElementos = 0;

elemento *criarNovo();
void insereFim();
void insereInicio();
void inserePosicao();
void limpaLista();
void mensagem(const char* mensagem);
void mostrarLista();
void retiraIncio();
void retiraFim();
void retiraPosicao();

main (void) {
    setlocale(LC_ALL, "Portuguese");
    char opcao;
    do {
        mostrarLista();
        printf("\n\n\n              Menu\n");
        printf("----------------------------\n");
        printf("0 - Sair\n");
        printf("1 - Limpa a lista\n");
        printf("2 - Incluir no inicio\n");
        printf("3 - Incluir no fim\n");
        printf("4 - Incluir na posição\n");
        printf("5 - Excluir do inicio\n");
        printf("6 - Excluir do fim\n");
        printf("7 - Excluir na posição\n\n");
        printf("Opção: [ ]%c%c", 8, 8);
        opcao = getche();
        switch (opcao) {
            case '0':
                break;
            case '1': limpaLista();
                break;
            case '2': insereInicio();
                break;
            case '3': insereFim();
                break;
            case '4': inserePosicao();
                break;
            case '5': retiraIncio();
                break;
            case '6': retiraFim();
                break;
            case '7': retiraPosicao();
                break;
            default:
                mensagem("Opção inválido !!!");
        }
    } while (opcao != 0);
    mensagem("Saindo do programa !!!");
    limpaLista();
}

elemento *criarNovo() {
    elemento *novo = (elemento *) malloc(sizeof (elemento));
    if (!novo) {
        mensagem("Sem memória disponível !!!");
        exit(1);
    } else {
        printf("\n\nNovo elemento: ");
        novo->conteudo = getche();
        novo->proximo = NULL;
        return novo;
    }
}

void insereFim() {
    elemento *novo = criarNovo();
    if (inicio == NULL) {
        inicio = novo;
    } else {
        elemento *temp = inicio;
        while (temp->proximo != NULL) {
            temp = temp->proximo;
        }
        temp->proximo = novo;
    }
    numeroElementos++;
}

void insereInicio() {
    elemento *novo = criarNovo();
    elemento *inicioAnterior = inicio;
    inicio = novo;
    novo->proximo = inicioAnterior;
    numeroElementos++;
}

void inserePosicao() {
    int posicao;
    printf("\n\nEm qual posição deseja inserir? ");
    scanf("%d", &posicao);
    if (posicao >= 1 && posicao <= numeroElementos) {
        if (posicao == 1) {
            insereInicio();
        } else {
            elemento *temp = inicio, *tempAnterior;
            elemento *novo = criarNovo();
            for (int i = 1; i < posicao; i++) {
                tempAnterior = temp;
                temp = temp->proximo;
            }
            tempAnterior->proximo = novo;
            novo->proximo = temp;
            numeroElementos++;
        }
    }
}

void limpaLista() {
    if (inicio != NULL){
        elemento *temp;
        while (inicio != NULL) {
            temp = inicio;
            inicio = inicio->proximo;
            free(temp);
            numeroElementos--;
        }
    }
}

void mensagem(const char* mensagem) {
    printf("\n\n%s", mensagem);
    _sleep(1000);
}

void mostrarLista() {
    system("cls");
    if (inicio == NULL){
        printf("Lista vazia !!!");
        return;
    }
    printf("Dados:   ");
    elemento *temp = inicio;
    while (temp != NULL){
        printf(" %c ", temp->conteudo);
        temp = temp->proximo;
    }
    printf("\n         ");
    for (int i = 1; i <= numeroElementos; ++i) {
        printf(" |  ");
    }
    printf("\nPosição:");
    for (int i = 1; i <= numeroElementos; ++i) {
        printf("%4d", i);
    }
    printf("\n\n");
}

void retiraIncio() {
    if (inicio == NULL) {
        mensagem("Não existe informação a ser retirada !!!");
        return;
    }
    elemento *temp = inicio;
    inicio = inicio->proximo;
    free(temp);
    numeroElementos--;
}

void retiraFim() {
    if (inicio == NULL) {
        mensagem("Não existe informação a ser retirada !!!");
        return;
    }
    elemento *temp = inicio, *tempAnterior = inicio;
    while (temp->proximo != NULL) {
        tempAnterior = temp;
        temp = temp->proximo;
    }
    if (inicio == temp){
        inicio = NULL;
    } else {
        tempAnterior->proximo = NULL;
    }
    free(temp);
    numeroElementos--;
}

void retiraPosicao() {
    if (inicio == NULL) {
        mensagem("Não existe informação a ser retirada !!!");
        return;
    }
    int posicao;
    printf("\n\nDe qual posição deseja retirar? ");
    scanf("%d", &posicao);
    if (posicao >1 && posicao >= numeroElementos) {
        if (posicao == 1){
            return retiraIncio();
        } else {
            elemento *temp = inicio, *tempAnterior;
            for (int i = 1; i < posicao; ++i) {
                tempAnterior = temp;
                temp = temp->proximo;
            }
            tempAnterior->proximo = temp->proximo;
            free(temp);
            numeroElementos--;
        }
    } else {
        mensagem("Posição invalida !!!");
    }
}