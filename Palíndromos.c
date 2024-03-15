#include <string.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    char frase[100];
    int tamanho, comeco, final, Iguais;
    int pld = 1;
    printf("Escreva uma frase:");
    
    fgets(frase, sizeof(frase), stdin);
    final = strlen(frase) - 2;
    
    bool art_e_prep(const char *word) {
    const char *art_prep[] = {"o", "a", "os", "as", "um", "uma", "uns", "umas",
                                           "de", "do", "da", "dos", "das", "em", "no", "na",
                                           "nos", "nas", "por", "pelo", "pela", "pelos", "pelas",
                                           "com", NULL};
    for (int i = 0; art_prep[i] != NULL; i++) {
        if (strcasecmp(word, art_prep[i]) == 0) {
            return true;
        }
    }
    return false;
}

void conct_words(const char *frase, char *result) {
    char buffer[256];
    strcpy(buffer, frase);
    char *token = strtok(buffer, " ");
    result[0] = '\0'; // Inicializa a string de resultado como vazia
 
    while (token != NULL) {
        if (!art_e_prep(token)) {
            strcat(result, token);
        }
        token = strtok(NULL, " ");
    }
}
    
    for(comeco = 0; comeco < final; comeco++)
    {
        if(frase[comeco] == ' '){
            comeco++;
        }
        
        if(frase[final] == ' ' || frase[final] == '\n'){
            final--;
        }
        
        if(frase[comeco] != frase[final]){
            pld = 0;
            break;
        }
        final--;
    }
    if(pld == 1){
     printf("A frase inteira sem artigos e preposiçoes é um palíndromo: %s", frase);
    } else {
    printf("A frase sem artigos e preposiçoes não é um palíndromo.\n");
    }
    
    
    
    return 0;
}