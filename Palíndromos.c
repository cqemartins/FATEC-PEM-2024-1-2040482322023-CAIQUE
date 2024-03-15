#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char frase[100], copia[100];
    int i, j, palavras = 0, tamanho, iguais = 0, diferentes;

    printf("Digite uma frase ou palavra: ");
    scanf("%s", frase); //FUNCIONOU

    //-------------QUANTIDADE DE PALAVRAS---------------//
    
    for (i = 0; i < strlen(frase) ; i++) 
    {
        if (frase[i] != '!' && frase[i] != '?' && frase[i] != ' ' && frase[i] != ',' && frase[i] != '.'){
            copia[j++] = frase[i];
        }
    }
    
    copia[j] = '\0';
    
    tamanho = strlen(copia);
    tamanho--;
    
    for(i = 0; i < strlen(copia); i++)
    {
        if(copia[i] != copia[tamanho])
            diferentes++;
        tamanho--;
    }
    
    printf("Frase digitada : %s\n", frase);
    tamanho = strlen(frase);
    
    //-------------COPIA----------------//
    
    for(i = 0; i < strlen(frase); i++) 
    {
        copia[i] = frase[tamanho - 1];
            tamanho--;
    }
    
    copia[j] = '\0';
    tamanho = strlen(frase);
    
    //---------------IGUAIS----------------//
    
    for(i = 0; i < strlen(frase); i++)
    {
        if(frase[i] == copia[i])
            iguais++;
    }
    //-------------------TESTE DE LÓGICA-----------------//
    
    printf("Original: %s\nCopia: %s\n", frase, copia);
    
    //-------------------------------------------------//
    
        if(diferentes == 0)
        printf("\nÉ palíndroma... \n");
    else
        printf("\nNão é palíndroma... \n");

return 0;

}
