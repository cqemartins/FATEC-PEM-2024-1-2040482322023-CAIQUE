#include <stdio.h>
#include <string.h>

#define caracteres 4

void addTabuleiro(char tabuleiro[8][8][caracteres]) {
    for (int i = 0; i < 8; i++) 
    {
        for (int j = 0; j < 8; j++) 
        {
            strcpy(tabuleiro[i][j], " x ");
        }
    }
}

void addPecas(char tabuleiro[8][8][caracteres]) {
    strcpy(tabuleiro[0][0], "tP1");
    strcpy(tabuleiro[0][1], "cP2");
    strcpy(tabuleiro[0][2], "bP3");
    strcpy(tabuleiro[0][3], "dP4");
    strcpy(tabuleiro[0][4], "rP5");
    strcpy(tabuleiro[0][5], "bP6");
    strcpy(tabuleiro[0][6], "cP7");
    strcpy(tabuleiro[0][7], "tP8");

    for (int i = 0; i < 8; i++) 
    {
        char num[2];
        sprintf(num, "%d", i+1);
        strcpy(tabuleiro[1][i], "pP");
        strcat(tabuleiro[1][i], num);
    }
  
    strcpy(tabuleiro[7][0], "TB1");
    strcpy(tabuleiro[7][1], "CB2");
    strcpy(tabuleiro[7][2], "BB3");
    strcpy(tabuleiro[7][3], "DB4");
    strcpy(tabuleiro[7][4], "RB5");
    strcpy(tabuleiro[7][5], "BB6");
    strcpy(tabuleiro[7][6], "CB7");
    strcpy(tabuleiro[7][7], "TB8");

    for (int i = 0; i < 8; i++) 
    {
        char num[2];
        sprintf(num, "%d", i+1);
        strcpy(tabuleiro[6][i], "PB");
        strcat(tabuleiro[6][i], num);
    }
}

void Tabuleiro(char tabuleiro[8][8][caracteres]) {
    for (int i = 0; i < 8; i++) 
    {
        for (int j = 0; j < 8; j++) 
        {
            printf("%s ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char tabuleiro[8][8][caracteres];

    addTabuleiro(tabuleiro);
    addPecas(tabuleiro);
    Tabuleiro(tabuleiro);

    return 0;
}
