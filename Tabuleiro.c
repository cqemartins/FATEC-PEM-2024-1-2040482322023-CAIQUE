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
    strcpy(tabuleiro[0][0], "Bt1");
    strcpy(tabuleiro[0][1], "Bc1");
    strcpy(tabuleiro[0][2], "Bb1");
    strcpy(tabuleiro[0][3], "Bd ");
    strcpy(tabuleiro[0][4], "Br ");
    strcpy(tabuleiro[0][5], "Bb2");
    strcpy(tabuleiro[0][6], "Bc2");
    strcpy(tabuleiro[0][7], "Bt2");

    for (int i = 0; i < 8; i++) 
    {
        char num[2];
        sprintf(num, "%d", i+1);
        strcpy(tabuleiro[1][i], "Bp");
        strcat(tabuleiro[1][i], num);
    }
  
    strcpy(tabuleiro[7][0], "Pt1");
    strcpy(tabuleiro[7][1], "Pc1");
    strcpy(tabuleiro[7][2], "Pb1");
    strcpy(tabuleiro[7][3], "Pd ");
    strcpy(tabuleiro[7][4], "Pr ");
    strcpy(tabuleiro[7][5], "Pb2");
    strcpy(tabuleiro[7][6], "Pc2");
    strcpy(tabuleiro[7][7], "Pt2");

    for (int i = 0; i < 8; i++) 
    {
        char num[2];
        sprintf(num, "%d", i+1);
        strcpy(tabuleiro[6][i], "Pp");
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
