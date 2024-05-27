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
  if (fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin) == NULL) {
    printf("Erro ao ler o nome do aluno.\n");
    alunos[i].notaFinal = -1;
    return;
  }

    // Remover o caractere de nova linha deixado por fgets
  size_t len = strlen(alunos[i].nome);
  if (len > 0 && alunos[i].nome[len - 1] == '\n') {
    alunos[i].nome[len - 1] = '\0';
  }

  printf("Digite a Nota Final do Aluno: ");
  if (scanf("%lf", &alunos[i].notaFinal) != 1) {
    printf("Erro ao ler a nota final do aluno.\n");
    alunos[i].notaFinal = -1;
    while (getchar() != '\n');  // Limpar buffer de entrada
    return;
  }

  // Consumir a nova linha deixada pelo scanf
  while (getchar() != '\n');
}

// Paradigma de classificação do BubbleSort para a ordenação dos alunos
void bubbleSort(Aluno alunos[MAX], int n) {
  int i, j;
  Aluno add;

  // Loop externo para percorrer o vetor
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (strcmp(alunos[j].nome, alunos[j + 1].nome) > 0) {
        add = alunos[j];
        alunos[j] = alunos[j + 1];
        alunos[j + 1] = add;
      }
    }
  }
}

// Função para listar todos os alunos
void listarAlunos(Aluno alunos[MAX], int count) {
  // Ordenar os nomes em ordem ascendente
  bubbleSort(alunos, count);

  // Exibir a ordem de alunos
  printf("\nAlunos ordenados por nome em ordem ascendente:\n");

  for (int i = 0; i < count; i++) {
    printf("\nAluno %d - Nome: %s, Nota Final: %.2f, Situação: ", i + 1, alunos[i].nome, alunos[i].notaFinal);
  if (alunos[i].notaFinal >= 6.0) {
    printf("Aprovado\n");
  } else {
        printf("Reprovado\n");
    }
  }
}

int main() {
  int count = 0;
  Aluno alunos[MAX];
  int opcao;

  do {
    printf("\nMenu:\n");
    printf("1. Incluir aluno\n");
    printf("2. Listar alunos\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    // Consumir a nova linha deixada pelo scanf
    while (getchar() != '\n');

    switch (opcao) {
      case 1:
        if (count < MAX) {
          Sala(alunos, count);
          if (alunos[count].notaFinal != -1) {
          count++;
          }
        } else {
            printf("Limite de alunos atingido.\n");
          }
          break;
     case 2:
        if (count > 0) {
          listarAlunos(alunos, count);
        } else {
            printf("Nenhum aluno cadastrado.\n");
          }
          break;
      case 3:
        printf("Saindo do programa.\n");
        break;
        default:
        printf("Opcao invalida. Tente novamente.\n");
        break;
    }
  } while (opcao != 3);

  return 0;
}
