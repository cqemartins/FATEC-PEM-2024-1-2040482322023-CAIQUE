#include <stdio.h>
#include <string.h>

#define MAX 50

// Estrutura para armazenar os dados do aluno
typedef struct {
  char nome[50];
  double notaFinal;
} Aluno;

// Função para ler os dados de cada aluno
void Sala(Aluno alunos[MAX], int i) {
  printf("\nNome do Aluno: ");
  fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

  // Remover o caractere de nova linha deixado por fgets
  size_t len = strlen(alunos[i].nome);
  if (len > 0 && alunos[i].nome[len - 1] == '\n') {
    alunos[i].nome[len - 1] = '\0';
  }

  // Verificar se o usuário digitou "Sair"
  if (strcmp(alunos[i].nome, "Sair") == 0) {
    alunos[i].notaFinal = -1;  // Usar uma nota especial para indicar a saída
    return;
  }

  printf("\nDigite a Nota Final do Aluno: ");
  scanf("%lf", &alunos[i].notaFinal);

  // Consumir a nova linha deixada pelo scanf
  while (getchar() != '\n');
}

// Paradigma de classificação do BubbleSort para a ordenação dos alunos
void bubbleSort(Aluno alunos[MAX], int n) {
  int i, j;
  Aluno add;

  // Loop externo para percorrer o vetor
  for (i = 0; i < n; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (strcmp(alunos[j].nome, alunos[j + 1].nome) > 0) {
        add = alunos[j];
        alunos[j] = alunos[j + 1];
        alunos[j + 1] = add;
      }
    }
  }
}

int main() {
  int i, count = 0;
  Aluno alunos[MAX];

  printf("Digite os dados dos alunos (ou digite 'Sair' para encerrar):\n");

  // Loop para ler os dados do aluno
  for (i = 0; i < MAX; i++) {
    printf("\nAluno %d\n", i + 1);
    Sala(alunos, i);
    if (alunos[i].notaFinal == -1) {
      break;  // Sair do loop se o usuário digitar "Sair"
    }
      count++;
    }

    // Ordenar os nomes em ordem ascendente
    bubbleSort(alunos, count);

    // Exibir a ordem de alunos
    printf("\nAlunos ordenados por nome em ordem ascendente:\n");

    for (i = 0; i < count; i++) {
      printf("\nAluno %d - Nome: %s, Nota Final: %.2f, Situação: ", i + 1, alunos[i].nome, alunos[i].notaFinal);
      if (alunos[i].notaFinal >= 6.0) {
        printf("Aprovado\n");
      } else {
        printf("Reprovado\n");
      }
    }

    return 0;
}
