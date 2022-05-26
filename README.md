# Simple Genetic Aldorithm
Genetic Algorithm code in C language

---

### Autores

Lucas Greff - 13671615;

João Victor Dionizio - 12543912;

---

Este projeto é um projeto realizado por estudantes da USP, o intuito do projeto é fazer um algoritmo genético simples, com objetivo de promover os conhecimentos adquiridos em aula.

A ideia é que pessoa usuária possa digitar número máximo de gerações, tamanho da população, taxa de mutação e uma equação a ser resolvida, então o programa retorna a melhor solução para aquela equação.

Aqui você vai encontrar os detalhes sobre o desenvolvimento do projeto, habilidades envolvidas no desenvolvimento e lições aprendidas durante o processo.

---

## SUMÁRIO

- [Instruções para acessar o projeto e executar o projeto](#instruções-para-acessar-e-executar-o-projeto)
- [Habilidades](#habilidades)
  - [Hard Skills](#hard-skills)
  - [Soft Skills](#soft-skills)
- [Objetivos](#objetivos)
- [Desenvolvimento](#desenvolvimento)
  - [Escolha da API's](#escolha-das-apis)
  - [Etapas](#etapas)
- [Funcionalidade](#funcionalidade)
- [Lições Aprendidas](#lições-aprendidas)

---

# Instruções para acessar e executar o projeto

1. Clone o repositório

- `git clone git@github.com:jvdionizio/c-genetic-algorithm.git`
- Entre na pasta que você a acabou de clonar:
  - `cd group-14-project-online-store`

2. Execute o programa

- `gcc genetic-algorithm.c -o`
- `./genetic-algorithm`

3. Durante a execução

- Digite o tamanho da população
- Digite a taxa de mutação
- Digite número máximo de gerações
- Selecione uma das equações disponíveis

---

## Habilidades

### Hard Skills

- Estruturas condicionais;
- Estruturas de Repetição;
- Operadores bit a bit;
- Vetores e Matrizes;

### Soft Skills

- Escuta Ativa
- Comunicação Assertiva
- Criatividade

---

## Objetivos

- Entregar a melhor solução para a equação dada.

---

# Desenvolvimento

### Escolha das API's

### Etapas

- Fluxograma para ilustrar as estruturas de repetição
- Definir uma equação simples
- Estruturar o código definindo as primeiras variáveis
- Testar código com equação simples
- Adaptar para equações complexas

### Fluxograma

<p align="center"><img src="" alt="floxograma"></p>

## Funcionalidade

 A pessoa usuária digita o tamanho da população, a taxa de mutação e o número máximo de gerações e depois seleciona uma equação a ser resolvida. O logo são declaradas algumas variáveis que serão necessárias para o funcionamento do código.
 O primeiro passo então é popular a primeira coluna da matriz responsável por guardar a população de números, e então criamos um laço que processará as gerações, dentro do laço preenchemos a segunda coluna da matriz com o a distância entre cada um dos números presentes na primeira coluna e o resultado. Os números são ordenados por ordem crescente de acordo com suas distâncias, o número com a menor distância é guardado em uma variável que sobrevive a mudança de gerações.
 Assim podemos selecionar uma quantidade de números para criar a próxima geração, escolhamos separar uma quantidade igual a metade do tamanho da população original para criar uma matriz de selecionados dando chance a todos os números da matriz original de serem selecionados para sofrerem o cruzamento.
 No cruzamento os selecionados sofrem alteração nos 8 bit's menos significativos se forem maiores que 16 e caso contrário nos 4 bit's menos significativos e então existe um chance de que os números sofram mutação, definida pela taxa de mutação que dada pela pessoa usuária, se o número for para o processo de mutação ele sofrera alteração em um bit dos 8 menos significativos e será guardado para a popular a próxima geração, caso não for para o processo de mutação o número será imediatamente guardado para popular próxima geração.
 Após serem processadas todas as gerações o programa retorna o melhor resultado dentre todas as gerações para aquela equação.

## Lições Aprendidas

- Manipular melhor números binários.
- Fazer brainstorms;
- Organizar reuniões periódicas;
- Organizar melhor branch's e commits.
