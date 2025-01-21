# Repositório de Atividades

## Propósito

Este repositório é dedicado à submissão de atividades universitárias para a disciplina de Programação Estruturada e Modular.

## Organização

Cada atividade possui sua própria pasta dentro do repositório, e essas pastas contêm os arquivos de código-fonte.

## Estrutura de Pastas

ATIVIDADE-B1-1/
calculadora.c

ATIVIDADE-B1-2/
palindromo.c

ATIVIDADE-B1-3/
jogoXadrez.c

ATIVIDADE-B2-1/
calculadora.c

ATIVIDADE-B2-3/
gerenciarAlunos.c

ATIVIDADE-B2-4/
simuladorCompras.c

ATIVIDADE-B2-5/
refatoracao.c


## Descrições das Atividades
### Atividade B1-1: Praticando Acesso a Vetores

Descrição: Uma empresa de TI realiza uma seleção para estagiários anualmente. No processo, 20 candidatos fazem uma prova final que abrange testes de raciocínio lógico, conceitos de gerenciamento de projetos, língua inglesa, metodologias ágeis e JavaScript.

Cada teste recebe N notas variando de 0,0 a 10,0. A nota final de cada candidato é a soma das notas centrais, excluindo a maior e a menor entre as N notas.

A entrada é composta por vários conjuntos de teste de um mesmo candidato. A primeira linha contém um inteiro N (N > 2), representando a quantidade de notas a serem lidas. A linha seguinte contém as N notas separadas por espaço. A entrada termina quando N = 0.

Código Fonte: O arquivo de código fonte para esta atividade pode ser encontrado na pasta ATIVIDADE-B1-1 como calculadora.c.

### Atividade B1-2: Identificação de Palíndromos

Descrição: Um professor de português deseja criar uma questão para uma prova online, onde os alunos devem escrever uma frase contendo apenas palavras que são palíndromos, desconsiderando artigos e preposições.

### Requisitos:

O programa deve permitir que o usuário insira uma frase.
O programa deve identificar e excluir os artigos e preposições da frase.
O programa deve verificar se as palavras restantes são palíndromos.
O programa deve exibir as palavras palíndromos encontradas.
Código Fonte: O arquivo de código fonte para esta atividade pode ser encontrado na pasta ATIVIDADE-B1-2 como palindromo.c.

### Atividade B1-3: Tabuleiro de Xadrez

Descrição: Desenvolver um programa em C que demonstre a ocupação de um tabuleiro de xadrez, identificando as peças com o prefixo "B" para peças brancas e "P" para peças pretas, seguido pelo número sequencial das peças (de 1 a 8). Os espaços não ocupados por peças devem ser representados pelo caractere "X".

### Requisitos Funcionais:

O tabuleiro possui 64 casas distribuídas em 8 colunas e 8 fileiras.
A primeira casa no extremo esquerdo é preta e a última no extremo direito é branca.
O programa deve criar e exibir um tabuleiro padrão (8x8).
Cada peça é identificada com um prefixo (B para brancas, P para pretas) seguido pelo tipo da peça e um número sequencial para peças repetidas.
As colunas são designadas por letras (a a h) e as fileiras por números (1 a 8).
Os espaços não ocupados são representados por "X".
Os peões são numerados de 1 a 8 (ex: BP1, BP2... BP8 para brancas e PP1, PP2... PP8 para pretas).
O rei branco deve estar em uma casa preta e o rei preto em uma casa branca.
Código Fonte: O arquivo de código fonte para esta atividade pode ser encontrado na pasta ATIVIDADE-B1-3 como jogoXadrez.c.

### Atividade B2-1: Implementar Modularização - Calculadora

Descrição: Desenvolver uma solução em C, utilizando modularização, para criar uma calculadora que realize as 4 operações básicas (+, -, * e /).

Regras de Negócio:

Solicitar ao usuário a operação desejada.
Prever "S" para sair.
Prever apenas 2 operandos por operação.
Aplicar as regras básicas da matemática para cada operação.
Informar o resultado e esperar a próxima ação do usuário.
Requisitos Técnicos:

Utilizar o paradigma da modularização.
Aplicar elementos aprendidos na disciplina: vetores, tratamento de strings, entrada de dados, diretriz #define e controle de repetição.
Código Fonte: O arquivo de código fonte para esta atividade pode ser encontrado na pasta ATIVIDADE-B2-1 como calculadora.c.

### Atividade B2-3: Struct - BubbleSort

Descrição: Desenvolver um programa que utilize Struct em C para combinar diferentes tipos de dados. O programa deve:

Apresentar um menu com as opções: Incluir aluno, Listar alunos, Sair.
Permitir incluir nome do aluno e nota final no semestre.
Armazenar nome (caracter com 50 bytes) e nota (double com 2 decimais).
Listar alunos em ordem ascendente pelo nome, mostrando nome, nota e situação (Aprovado/Reprovado).
Requisitos Técnicos:

Utilizar BubbleSort para ordenar por nome.
Utilizar Struct (array de 50 alunos).
Não usar ponteiros.
Aplicar programação modular.
Código Fonte: O arquivo de código fonte para esta atividade pode ser encontrado na pasta ATIVIDADE-B2-3 como gerenciarAlunos.c.

### Atividade B2-4: Praticando Struct/Ponteiro

Descrição: Desenvolver um programa em C que utilize ponteiros para manipular variáveis e funções. O programa deve gerenciar uma lista de produtos eletrônicos.

Cenário:

Armazenar lista de produtos com ID, nome, descrição, preço unitário e quantidade em estoque.
Inserir produtos.
Simular compras online.
Selecionar produto por código.
Verificar e atualizar estoque.
Mostrar lista de produtos em ordem alfabética.
Requisitos Técnicos:

Aplicar programação modular.
Utilizar BubbleSort para ordenar por nome do produto.
Usar ponteiros para manipulação de dados.
Utilizar Struct.
Código Fonte: O arquivo de código fonte para esta atividade pode ser encontrado na pasta ATIVIDADE-B2-4 como simuladorCompras.c.

### Atividade B2-5: Refatorando para Modularizar Código

Descrição: Refatorar um programa anterior para modularização. O programa deve ser dividido em módulos independentes, cada um responsável por uma funcionalidade bem definida, melhorando a qualidade e o gerenciamento do código.

Código Fonte: O arquivo de código fonte para esta atividade pode ser encontrado na pasta ATIVIDADE-B2-5 como refatoracao.c.
