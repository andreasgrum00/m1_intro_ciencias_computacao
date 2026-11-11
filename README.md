# Sistema de Cadastro e Média de Alunos

## Sobre o projeto

Este projeto consiste em um programa desenvolvido em C++ para realizar o cadastro de estudantes, armazenar suas notas, calcular suas médias e apresentar os resultados em uma tabela.

O programa cadastra três estudantes, considerando três notas para cada um, e identifica aquele que obteve a maior média da turma.

## Funcionalidades

- Cadastro de três estudantes.
- Registro de três notas para cada estudante.
- Cálculo da média aritmética das notas.
- Exibição dos resultados em formato de tabela.
- Classificação dos estudantes como aprovados ou reprovados.
- Identificação do estudante com a maior média da turma.

## Estrutura do código

O código foi organizado utilizando estruturas (`struct`), funções e vetores para facilitar o armazenamento e o processamento dos dados.

### Estruturas utilizadas

- **IStudent:** armazena o nome do estudante e um vetor contendo suas três notas.
- **IBestAverage:** armazena o nome do estudante com a maior média e o respectivo valor.

### Funções

| Função | Responsabilidade |
|---|---|
| `calculate_average()` | Calcula a média aritmética das notas recebidas por meio de um vetor. |
| `get_credential()` | Realiza o cadastro de um estudante, solicitando seu nome e suas três notas. |
| `get_best_average()` | Percorre os estudantes cadastrados e identifica aquele com a maior média. |
| `print_table()` | Exibe uma tabela contendo os nomes, as notas, as médias e as situações dos estudantes. |
| `main()` | Controla a execução do programa, realiza os cadastros, calcula a maior média e apresenta os resultados. |

## Lógica de funcionamento

O programa segue uma sequência de execução:

1. Inicializa as configurações de codificação do console para permitir a exibição de caracteres especiais.
2. Cria os vetores e as estruturas responsáveis pelo armazenamento dos dados.
3. Solicita o nome e as três notas de cada estudante, realizando três cadastros por meio de uma estrutura de repetição.
4. Calcula a média individual de cada estudante.
5. Identifica o estudante que obteve a maior média.
6. Exibe uma tabela com todos os resultados.
7. Informa o nome do estudante com a maior média da turma.

## Critério de aprovação

A situação de cada estudante é determinada de acordo com sua média:

- **Aprovado:** média maior ou igual a 7.
- **Reprovado:** média inferior a 7.

## Bibliotecas utilizadas

- `iostream`: utilizada para operações de entrada e saída de dados.
- `vector`: utilizada para armazenar as notas e os dados dos estudantes.
- `iomanip`: utilizada para formatar o espaçamento e a organização da tabela.
- `clocale`: utilizada para configurar a localização e a codificação de caracteres.
- `windows.h`: utilizada para configurar a codificação do console do Windows.
- `string`: utilizada para armazenar os nomes dos estudantes.

## Tecnologias

- Linguagem de programação: C++.
- Ambiente de execução: Windows.
- Biblioteca padrão: STL (Standard Template Library).
