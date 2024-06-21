#include <stdio.h>
#include <string.h>

float op1, op2, resultado;
char operacao[2];

void funcSoma() {
    resultado = op1 + op2;    
}

void funcSub() {
    resultado = op1 - op2;    
}

void funcDiv() {
    resultado = op1 / op2;    
}

void funcMult() {
    resultado = op1 * op2;    
}

int main() {
    printf("Insira os valores da operação...\n \n -> operando (1): ");
    scanf("%f", &op1);

    printf(" -> operando (2): ");
    scanf("%f", &op2);

    printf("Escolha entre as funções básicas (+, -, *, /): ");
    scanf("%1s", operacao); // Use %1s para ler apenas um caractere

    if (!(operacao[0] == '+' || operacao[0] == '-' || operacao[0] == '*' || operacao[0] == '/')) {
        printf("\nOperação inválida.\n\n");
        return main();
    }

    if (operacao[0] == '+') { 
        funcSoma();
        printf("\nResultado da soma: %.2f", resultado);
    } else if (operacao[0] == '-') {
        funcSub();
        printf("\nResultado da subtração: %.2f", resultado);
    } else if (operacao[0] == '/') {
        while (op2 == 0) {
            printf("\nO divisor não pode ser 0\nescolha outro número divisor para efetuar a operação: ");
            scanf("%f", &op2);
        }
        funcDiv();
        printf("\nResultado da divisão: %.2f", resultado);
    } else if (operacao[0] == '*') {
        funcMult();
        printf("\nResultado da multiplicação: %.2f", resultado);
    }

    char resposta[2]; // Tamanho 2 para a resposta e o caractere nulo

    printf("\n\nDeseja parar de fazer os cálculos? (S/N): ");
    scanf("%1s", resposta); // Lê apenas um caractere

    if (resposta[0] == 's' || resposta[0] == 'S') {
        return 0;
    } 
    
    return main();
}
