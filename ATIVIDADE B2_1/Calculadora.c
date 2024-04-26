#include <stdio.h>
#include <string.h>

  int op1, op2, resultado, operacao;

    void funcSoma()
    {
      resultado = op1 + op2;    
    }

    void funcSub()
    {
      resultado = op1 - op2;    
    }

    void funcDiv()
    {
      resultado = op1 / op2;    
    }

    void funcMult()
    {
      resultado = op1 * op2;    
    }

    int main()
    {
         printf("Insira os valores da operação...\n \n -> operando (1): ");
         scanf("%i", &op1);

         printf(" -> operando (2): ");
         scanf("%i", &op2);

        printf("\nAgora selecione a operação:\n \n| (1) = +\n| (2) = -\n| (3) = op1/op2\n| (4) = *\n\nDigite: ");
        scanf("%i", &operacao);

        if(operacao == 1){
            funcSoma();
            printf("\nResultado da soma: %i", resultado);
        }

        if(operacao == 2){
            funcSub();
            printf("\nResultado da subtração: %i", resultado);
        }

        if(operacao == 3){
            while(op2 == 0){
                printf("\nO divisor não pode ser 0\nescolha outro número divisor para efetuar a operação: ");
                scanf("%i", &op2);
            }
            funcDiv();
            printf("\nResultado da divisão: %i", resultado);
        }

        if(operacao == 4){
            funcMult();
            printf("\nResultado da multiplicação: %i", resultado);
        }

        char resposta[1];

        printf("\n\nDeseja parar de fazer os calculos? (S/N): ");
        scanf("%s", resposta);

        while(strcmp(resposta, "N") == 0){
        main();
          return 0;
        }
        while(strcmp(resposta, "n") == 0){
        main();
          return 0;
        }

        return 0;
    }