#include <stdio.h>
#include <string.h>

#define caracteres 4

void addTabuleiro(char tabuleiro[8][8][caracteres]) 
{
    for (int i = 0; i < 8; i++) 
    {
        for (int j = 0; j < 8; j++) 
        {
            strcpy(tabuleiro[i][j], "   ");
        }
    }
}

void addPecas(char tabuleiro[8][8][caracteres]) 
{
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

void Tabuleiro(char tabuleiro[8][8][caracteres]) 
{
    printf("  -a- -b- -c- -d- -e- -f- -g- -h-\n");
    for (int i = 0; i < 8; i++) 
    {
          printf("%d|", i+1);
        for (int j = 0; j < 8; j++) 
        {
            printf("%s ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void Jogada1(char tabuleiro[8][8][caracteres])
{

  printf("\n---------------------------------");
  printf("\n           Jogada #1\n");
  printf("---------------------------------\n\n");
  printf("---------Brancas jogam e4--------\n");

  for (int i = 0; i < 8; i++)
  {
      printf("%d|", i+1);
    for (int j = 0; j < 8; j++) 
    {
        printf("%s ", tabuleiro[i][j]);

      char num[2];
      if(i==4)
      {
      sprintf(num, "%d", i+1);
      strcpy(tabuleiro[6][i], "...");
      strcpy(tabuleiro[1][i], "...");
      strcpy(tabuleiro[3][i], "pP");
      strcpy(tabuleiro[4][i], "PB");
      strcat(tabuleiro[4][i], num);
      strcat(tabuleiro[3][i], num);
      }
    }
    printf("\n");
  }
  printf("\n");

  printf("---------Pretas jogam e5---------\n");

  for (int i = 0; i < 8; i++)
  {
      printf("%d|", i+1);
    for (int j = 0; j < 8; j++) 
    {
      printf("%s ", tabuleiro[i][j]);
    }
  printf("\n");
  }
}

void Jogada2(char tabuleiro[8][8][caracteres])
{
  printf("\n---------------------------------");
  printf("\n            Jogada #2\n");
  printf("---------------------------------\n\n");
  printf("--------Brancas jogam Bc4--------\n");

  for (int i = 0; i < 8; i++)
  {
      printf("%d|", i+1);
    for (int j = 0; j < 8; j++) 
    {
        printf("%s ", tabuleiro[i][j]);

      char num[2];
      if(i==5)
      {
      strcpy(tabuleiro[7][i], "...");
      }
      if(i==2)
      {
        strcpy(tabuleiro[4][i], "BB6");
      }
    }
    printf("\n");
  }
  printf("\n");

  printf("--------Pretas jogam Cc6---------\n");

  for (int i = 0; i < 8; i++)
  {
      printf("%d|", i+1);
    for (int j = 0; j < 8; j++) 
    {
      strcpy(tabuleiro[0][1], "...");
      strcpy(tabuleiro[2][2], "cP2"); 
      printf("%s ", tabuleiro[i][j]);
    }
  printf("\n");
  }
}

void Jogada3(char tabuleiro[8][8][caracteres])
{
  printf("\n---------------------------------");
  printf("\n          Jogada #3\n");
  printf("---------------------------------\n\n");
  printf("--------Brancas jogam Dh5--------\n");

  for (int i = 0; i < 8; i++)
  {
      printf("%d|", i+1);
    for (int j = 0; j < 8; j++) 
    {
        printf("%s ", tabuleiro[i][j]);

      char num[2];
        strcpy(tabuleiro[7][3], "...");
        strcpy(tabuleiro[3][7], "DB4");
    }
    printf("\n");
  }
  printf("\n");

  printf("--------Pretas jogam Cf6---------\n");

  for (int i = 0; i < 8; i++)
  {
      printf("%d|", i+1);
    for (int j = 0; j < 8; j++) 
    {
      strcpy(tabuleiro[0][6], "...");
      strcpy(tabuleiro[2][5], "cP7");
      printf("%s ", tabuleiro[i][j]);
    }
  printf("\n");
  }
}

void Xeque(char tabuleiro[8][8][caracteres])
{
  printf("\n---------------------------------");
  printf("\n    Jogada #4 (Xeque Mate)\n");
  printf("---------------------------------\n\n");
  printf("-------Brancas capturam Peao PP6 em f7 e Xeque MATE (Dxf7#)-------\n");
  printf("\n  -a- -b- -c- -d- -e- -f- -g- -h-\n");

  for (int i = 0; i < 8; i++)
  {
      printf("%d|", i+1);
    for (int j = 0; j < 8; j++) 
    {
        printf("%s ", tabuleiro[i][j]);

      char num[2];
      if(i==7)
      {
      strcpy(tabuleiro[3][i], "...");
      }
      strcpy(tabuleiro[3][7], "...");
      strcpy(tabuleiro[1][5], "DB4");
    }
    printf("\n");
  }
  printf("\n");
}

int main() 
{
  printf("---------------------------------\n");
  printf("\n   POSIÇÃO INICIAL DO TABULEIRO\n");
  printf("\n---------------------------------\n");
    char tabuleiro[8][8][caracteres];

    addTabuleiro(tabuleiro);
    addPecas(tabuleiro);
    Tabuleiro(tabuleiro);

    Jogada1(tabuleiro);
    Jogada2(tabuleiro);
    Jogada3(tabuleiro);
    Xeque(tabuleiro);

    return 0;
}