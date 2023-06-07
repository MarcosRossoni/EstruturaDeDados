#include <stdio.h>

struct produto {
    char nome[51];
    float valorCompra;
    float valorVenda;
    int quantidade;
};

produto meuProduto;

int main() {
    printf("Informe os dados do Produto\n\n");
    printf("Nome: ");
    gets(meuProduto.nome);
    printf("Valor compra: ");
    scanf("%f", &meuProduto.valorCompra);
    printf("Valor venda: ");
    scanf("%f", &meuProduto.valorVenda);
    printf("Quantidade: ");
    scanf("%d", &meuProduto.quantidade);
}
