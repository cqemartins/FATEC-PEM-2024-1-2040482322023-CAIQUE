// Aluno: Caique Martins Almeida
// Disciplina: Programação Estruturada e Modular
// Prof° Veríssimo
// FATEC IPIRANGA - São Paulo. 31/05/2024

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Capacidade_inicial 10

typedef struct {
    int id;
    char nome[50];
    char descricao[200];
    double preco;
    int quantidade;
} Produto;

int proximoID = 1;

// Funções de manipulação de produtos
void inserirProduto(Produto **produtos, int *numProdutos, int *capacidade);
void simularCompra(Produto *produtos, int numProdutos);
void listarProdutos(Produto *produtos, int numProdutos);
void ordenarProdutos(Produto *produtos, int numProdutos);

int main() {
    int capacidade = Capacidade_inicial;
    Produto *produtos = malloc(capacidade * sizeof(Produto));
    int numProdutos = 0;
    int opcao;

    if (produtos == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    do {
        printf("\n============MENU=============\n");
        printf("\nLoja de Produtos Eletrônicos\n");
        printf("1. Inserir Produto\n");
        printf("2. Simular Compra\n");
        printf("3. Listar Produtos\n");
        printf("4. Sair\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                inserirProduto(&produtos, &numProdutos, &capacidade);
                break;
            case 2:
                simularCompra(produtos, numProdutos);
                break;
            case 3:
                listarProdutos(produtos, numProdutos);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("\nPor favor, escolha entre 1 e 4.\n");
                break;
        }
    } while(opcao != 4);
  
    free(produtos);
    return 0;
}

// Função para inserir um produto no array
void inserirProduto(Produto **produtos, int *numProdutos, int *capacidade) {
    if (*numProdutos >= *capacidade) {
        *capacidade *= 2;
        *produtos = realloc(*produtos, *capacidade * sizeof(Produto));
        if (*produtos == NULL) {
            printf("Erro ao alocar memória!\n");
            exit(1);
        }
    }

    Produto *p = &(*produtos)[*numProdutos];
    p->id = proximoID++;

    printf("Inserir novo produto\n");
    printf("Nome: ");
    scanf(" %[^\n]s", p->nome);
    printf("Descrição: ");
    scanf(" %[^\n]s", p->descricao);
    printf("Preço: ");
    while (scanf("%lf", &p->preco) != 1) {
        printf("Por favor, insira um preço válido: ");
        while (getchar() != '\n'); // Limpar buffer
    }
    printf("Quantidade: ");
    while (scanf("%d", &p->quantidade) != 1) {
        printf("Por favor, insira uma quantidade válida: ");
        while (getchar() != '\n'); // Limpar buffer
    }

    (*numProdutos)++;

    printf("\nProduto inserido com sucesso!\n");
    printf("ID: %d\n", p->id);
    printf("Nome: %s\n", p->nome);
    printf("Descrição: %s\n", p->descricao);
    printf("Preço: %.2f\n", p->preco);
    printf("Quantidade: %d\n", p->quantidade);
}

// Função para simular uma compra de um produto
void simularCompra(Produto *produtos, int numProdutos) {

    // Mostrar os produtos disponíveis
    printf("\n============================\n");
    printf("\nProdutos disponíveis:\n");
    listarProdutos(produtos, numProdutos);
    printf("============================\n");
  
    int id, quantidade;
    printf("\nSimular Compra\n");
    printf("Digite o ID do produto: ");
    scanf("%d", &id);

    Produto *produto = NULL;
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].id == id) {
            produto = &produtos[i];
            break;
        }
    }

    if (produto == NULL) {
        printf("Produto inexistente!\n");
        return;
    }

    printf("Produto selecionado: %s\n", produto->nome);
    printf("Digite a quantidade desejada: ");
    while (scanf("%d", &quantidade) != 1) {
        printf("Por favor, insira uma quantidade válida: ");
        while (getchar() != '\n'); // Limpar buffer
    }

    if (quantidade > produto->quantidade) {
        printf("Quantidade insuficiente em estoque!\n");
    } else {
        produto->quantidade -= quantidade;
        float precoTotal = quantidade * produto->preco;
        printf("Preço total: R$ %.2f\n", precoTotal);
        printf("Compra realizada com sucesso!\n");
    }
}

// Função para listar os produtos ordenados por nome
void listarProdutos(Produto *produtos, int numProdutos) {
    ordenarProdutos(produtos, numProdutos);

    printf("\nLista de Produtos:\n");
    for (int i = 0; i < numProdutos; i++) {
        printf("ID: %d\n", produtos[i].id);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Descrição: %s\n", produtos[i].descricao);
        printf("Preço: %.2f\n", produtos[i].preco);
        printf("Quantidade: %d\n\n", produtos[i].quantidade);
    }
}

// Função para ordenar os produtos por nome usando Bubble Sort
void ordenarProdutos(Produto *produtos, int numProdutos) {
    for (int i = 0; i < numProdutos - 1; i++) {
        for (int j = 0; j < numProdutos - i - 1; j++) {
            if (strcmp(produtos[j].nome, produtos[j + 1].nome) > 0) {
                Produto temp = produtos[j];
                produtos[j] = produtos[j + 1];
                produtos[j + 1] = temp;
            }
        }
    }
}