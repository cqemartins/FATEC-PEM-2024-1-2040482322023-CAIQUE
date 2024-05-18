#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

float pos[MAX]; // Vetor para armazenar os elementos da pilha
int top = 0; // Índice do topo da pilha

// Função para empilhar um valor
void push(float valor) 
{
    if (top < MAX) 
    {
        pos[top++] = valor;
        printf("|%.2f\n", valor);
    } 
    else 
    {
        printf("Erro: pilha cheia\n");
    }
}

// Função para desempilhar um valor
float pop() 
{
    if (top > 0) 
    {
        return pos[--top];
    } 
    else 
    {
        printf("Erro: pilha vazia\n");
        return 0;
    }
}

// Função principal
int main() 
{
    char input[MAX];
    float op1, op2, result;
    int i, len;

    printf("Calculadora (hp12c)\n\n");

    while (1) 
    {
        printf("Digite a expressao (ou 'S' para sair): ");
        fgets(input, sizeof(input), stdin);

        if (input[0] == 'S' || input[0] == 's')
        {
            printf("\nAs operacoes se encerraram...\n");
            break;
        }

        len = strlen(input);
        for (i = 0; i < len; i++) 
        {
            // Ignorar espaços em branco
            if (input[i] == ' ' || input[i] == '\n') 
            {
                continue;
            }

            // Verificar se é um número
            if (isdigit(input[i]) || (input[i] == '-' && isdigit(input[i + 1]))) 
            {
                char buffer[MAX];
                int j = 0;

                // Coletar o número inteiro ou decimal
                while (i < len && (isdigit(input[i]) || input[i] == '.' || (input[i] == '-' && j == 0))) 
                {
                    buffer[j++] = input[i++];
                }
                buffer[j] = '\0';
                i--; // Ajustar o índice

                float num;
                sscanf(buffer, "%f", &num);
                push(num);
            } 
            else if (strchr("+-*/", input[i]) && (i == len - 1 || input[i + 1] == ' ' || input[i + 1] == '\n')) 
            {
                if (top < 2) 
                {
                    printf("Erro: operacao invalida, elementos insuficientes na pilha\n");
                    break;
                }

                op2 = pop();
                op1 = pop();

                switch (input[i]) 
                {
                    case '+':
                        result = op1 + op2;
                        printf("\nsoma entre %.2f e %.2f = %.2f\n", op1, op2, result);
                        break;
                    case '-':
                        result = op1 - op2;
                        printf("\nsubtracao entre %.2f e %.2f = %.2f\n", op1, op2, result);
                        break;
                    case '*':
                        result = op1 * op2;
                        printf("\nmultiplicacao entre %.2f e %.2f = %.2f\n", op1, op2, result);
                        break;
                    case '/':
                        if (op2 == 0) 
                        {
                            printf("\nErro: divisao por zero\n");
                            push(op1);
                            push(op2);
                            continue;
                        }
                        result = op1 / op2;
                        printf("\ndivisao entre %.2f e %.2f = %.2f\n", op1, op2, result);
                        break;
                }
                push(result);
            } 
            else 
            {
                printf("Entrada invalida: %c\n", input[i]);
                break;
            }
        }
        if (top > 0) 
        {
            printf("\nResultado: %.2f\n\n", pos[top - 1]);
        }
    }
    return 0;
}
