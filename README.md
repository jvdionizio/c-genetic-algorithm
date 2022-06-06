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

### Etapas

- Fluxograma para ilustrar as estruturas de repetição
- Definir uma equação simples
- Estruturar o código definindo as primeiras variáveis
- Testar código com equação simples
- Adaptar para equações complexas

### Fluxograma

<p align="center"><img src="" alt="floxograma"></p>

---
## Funcionalidade

A pessoa usuária digita o tamanho da população, a taxa de mutação e o número máximo de gerações e depois seleciona uma equação a ser resolvida. Logo são declaradas algumas variáveis que serão necessárias para o funcionamento do código. O primeiro passo então é popular a primeira coluna da matriz responsável por guardar a população de números, e então criamos um laço que processará as gerações, dentro do laço preenchemos a segunda coluna da matriz com a distância entre cada um dos números presentes na primeira coluna e o resultado. Os números são ordenados por ordem crescente de acordo com suas distâncias, o número com a menor distância é guardado em uma variável que sobrevive a mudança de gerações. Assim podemos selecionar uma quantidade de números para criar a próxima geração, escolhemos separar uma quantidade igual a metade do tamanho da população original para criar uma matriz de selecionados dando chance a todos os números da matriz original de serem selecionados para sofrerem o cruzamento. No cruzamento os selecionados sofrem alteração nos 8 bits menos significativos se forem maiores que 16 e caso contrário nos 4 bits menos significativos e então existe um chance de que os números sofram mutação, definida pela taxa de mutação que dada pela pessoa usuária, se o número for para o processo de mutação ele sofrerá alteração em um bit dos 8 menos significativos e será guardado para a popular a próxima geração, caso não for para o processo de mutação o número será imediatamente guardado para popular próxima geração. Após serem processadas todas as gerações, o programa retorna o melhor resultado dentre todas as gerações para aquela equação.

### Casos de Teste

  <details>
    <summary><strong>Caso 1</strong></summary>

    Tamanho da População: 20

    Taxa de Mutação(%): 7

    Número Máximo de Gerações: 4

    Selecione a Equação:
    1 -> x-7 = 0 (Raiz: 7)

    2 -> x^2 - 2x + 1 (Raiz: 1)

    3 -> x^2 + x - 6 (Raízes: -3 e 2)

    4 -> x^2 - 4x + 5 (Raízes: não possui raiz real)

    5 -> x^5 + 2x^4 + 3x^3 + 4x^2 + 5x + 6 (Raízes: a descobrir)
    1
    População Original: 63 68 11 177 127 97 244 219 32 79 182 61 7 117 104 66 100 216 182 215
    Geração: 1
    (número/distância)

    (7/0)(11/4)(32/25)(61/54)(63/56)(66/59)(68/61)(79/72)(97/90)(100/93)(104/97)(117/110)(127/120)(177/170)(182/175)(182/175)(215/208)(216/209)(219/212)(244/237)

    Selecionados:
    (7/0)(11/4)(11/4)(11/4)(11/4)(11/4)(11/4)(11/4)(32/25)(32/25)

    Melhor de todos: (7/0)
    Nova população pré-mutação: 7 11 11 11 11 11 11 11 11 11 11 11 11 11 8 3 32 32 3 4
    Nova população: 7 11 27 75 11 11 11 11 11 11 11 11 11 11 8 3 32 32 3 4
    --------------------
    Geração: 2
    (número/distância)

    (3/-4)(3/-4)(4/-3)(7/0)(8/1)(11/4)(11/4)(11/4)(11/4)(11/4)(11/4)(11/4)(11/4)(11/4)(11/4)(11/4)(27/20)(32/25)(32/25)(75/68)

    Selecionados:
    (3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)

    Melhor de todos: (7/0)
    Nova população pré-mutação: 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3
    Nova população: 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3
    --------------------
    Geração: 3
    (número/distância)

    (3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)

    Selecionados:
    (3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)

    Melhor de todos: (7/0)
    Nova população pré-mutação: 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3
    Nova população: 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3
    --------------------
    Geração: 4
    (número/distância)

    (3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)

    Selecionados:
    (3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)(3/-4)

    Melhor de todos: (7/0)
    Nova população pré-mutação: 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3
    Nova população: 3 3 7 3 3 3 3 3 3 3 3 3 1 3 3 3 3 3 3 3

  </details>

  <details>
    <summary><strong>Caso 2</strong></summary>

    Tamanho da População: 30

    Taxa de Mutação(%): 7

    Número Máximo de Gerações: 5

    Selecione a Equação:
    1 -> x-7 = 0 (Raiz: 7)

    2 -> x^2 - 2x + 1 (Raiz: 1)

    3 -> x^2 + x - 6 (Raízes: -3 e 2)

    4 -> x^2 - 4x + 5 (Raízes: não possui raiz real)

    5 -> x^5 + 2x^4 + 3x^3 + 4x^2 + 5x + 6 (Raízes: a descobrir)
    2
    População Original: 64 11 62 207 110 181 163 233 176 237 172 118 129 60 127 98 211 218 189 131 5 15 5 196 135 134 36 105 4 230
    Geração: 1
    (número/distância)

    (4/9)(5/16)(5/16)(11/100)(15/196)(36/1225)(60/3481)(62/3721)(64/3969)(98/9409)(105/10816)(110/11881)(118/13689)(127/15876)(129/16384)(131/16900)(134/17689)(135/17956)(163/26244)(172/29241)(176/30625)(181/32400)(189/35344)(196/38025)(207/42436)(211/44100)(218/47089)(230/52441)(233/53824)(237/55696)

    Selecionados:
    (4/9)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)

    Melhor de todos: (4/9)
    Nova população pré-mutação: 5 4 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 4 5
    Nova população: 5 4 5 5 5 5 5 4 5 5 5 5 5 5 69 5 5 5 7 5 5 5 5 5 5 5 5 5 4 5
    --------------------
    Geração: 2
    (número/distância)

    (4/9)(4/9)(4/9)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(5/16)(7/36)(69/4624)

    Selecionados:
    (4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)

    Melhor de todos: (4/9)
    Nova população pré-mutação: 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4
    Nova população: 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 36 4 4 4 4 4 4 4 4
    --------------------
    Geração: 3
    (número/distância)

    (4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(36/1225)

    Selecionados:
    (4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)

    Melhor de todos: (4/9)
    Nova população pré-mutação: 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4
    Nova população: 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 68 4 4 4 4 4 4 4 4 4 4 4 4
    --------------------
    Geração: 4
    (número/distância)

    (4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(68/4489)

    Selecionados:
    (4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)

    Melhor de todos: (4/9)
    Nova população pré-mutação: 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4
    Nova população: 4 4 4 4 4 4 4 4 4 4 0 20 4 4 6 4 4 68 4 4 4 4 4 4 4 4 4 4 4 36
    --------------------
    Geração: 5
    (número/distância)

    (0/1)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(6/25)(20/361)(36/1225)(68/4489)

    Selecionados:
    (0/1)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)(4/9)

    Melhor de todos: (0/1)
    Nova população pré-mutação: 0 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 0
    Nova população: 0 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 0
    --------------------

  </details>

  <details>
    <summary><strong>Caso 3</strong></summary>

    Tamanho da População: 30

    Taxa de Mutação(%): 7

    Número Máximo de Gerações: 5

    Selecione a Equação:
    1 -> x-7 = 0 (Raiz: 7)

    2 -> x^2 - 2x + 1 (Raiz: 1)

    3 -> x^2 + x - 6 (Raízes: -3 e 2)

    4 -> x^2 - 4x + 5 (Raízes: não possui raiz real)

    5 -> x^5 + 2x^4 + 3x^3 + 4x^2 + 5x + 6 (Raízes: a descobrir)
    3
    População Original: 223 44 89 97 48 7 86 84 114 104 106 37 218 77 9 131 7 101 146 134 191 180 36 52 116 89 116 65 243 184
    Geração: 1
    (número/distância)

    (7/50)(7/50)(9/84)(36/1326)(37/1400)(44/1974)(48/2346)(52/2750)(65/4284)(77/6000)(84/7134)(86/7476)(89/8004)(89/8004)(97/9500)(101/10296)(104/10914)(106/11336)(114/13104)(116/13566)(116/13566)(131/17286)(134/18084)(146/21456)(180/32574)(184/34034)(191/36666)(218/47736)(223/49946)(243/59286)

    Selecionados:
    (7/50)(7/50)(7/50)(7/50)(9/84)(9/84)(9/84)(9/84)(9/84)(9/84)(9/84)(9/84)(9/84)(9/84)(9/84)

    Melhor de todos: (7/50)
    Nova população pré-mutação: 7 7 7 7 7 7 5 11 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 11 5
    Nova população: 7 7 7 7 7 7 37 11 9 9 9 9 9 9 9 9 9 9 8 9 9 9 9 9 9 1 9 9 3 5
    --------------------
    Geração: 2
    (número/distância)

    (1/-4)(3/6)(5/24)(7/50)(7/50)(7/50)(7/50)(7/50)(7/50)(8/66)(9/84)(9/84)(9/84)(9/84)(9/84)(9/84)(9/84)(9/84)(9/84)(9/84)(9/84)(9/84)(9/84)(9/84)(9/84)(9/84)(9/84)(9/84)(11/126)(37/1400)

    Selecionados:
    (1/-4)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)

    Melhor de todos: (1/-4)
    Nova população pré-mutação: 3 1 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 1 3
    Nova população: 3 33 3 3 3 3 3 3 3 3 3 3 2 3 3 3 11 3 3 3 3 3 3 3 3 3 3 3 1 3
    --------------------
    Geração: 3
    (número/distância)

    (1/-4)(2/0)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(3/6)(11/126)(33/1116)

    Selecionados:
    (1/-4)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)

    Melhor de todos: (2/0)
    Nova população pré-mutação: 2 1 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 1 2
    Nova população: 3 1 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 3 2 1 2
    --------------------
    Geração: 4
    (número/distância)

    (1/-4)(1/-4)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(3/6)(3/6)

    Selecionados:
    (1/-4)(1/-4)(1/-4)(1/-4)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)

    Melhor de todos: (2/0)
    Nova população pré-mutação: 1 1 1 1 1 1 2 1 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 1 2
    Nova população: 1 1 1 1 1 33 2 1 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 1 2
    --------------------
    Geração: 5
    (número/distância)

    (1/-4)(1/-4)(1/-4)(1/-4)(1/-4)(1/-4)(1/-4)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(2/0)(33/1116)

    Selecionados:
    (1/-4)(1/-4)(1/-4)(1/-4)(1/-4)(1/-4)(1/-4)(1/-4)(1/-4)(1/-4)(1/-4)(1/-4)(1/-4)(1/-4)(1/-4)

    Melhor de todos: (2/0)
    Nova população pré-mutação: 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
    Nova população: 1 1 1 1 1 1 1 1 1 1 1 1 33 33 9 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
    --------------------

  </details>

  <details>
  <summary><strong>Caso 4</strong></summary>

    Tamanho da População: 30

    Taxa de Mutação(%): 7

    Número Máximo de Gerações: 5

    Selecione a Equação:
    1 -> x-7 = 0 (Raiz: 7)

    2 -> x^2 - 2x + 1 (Raiz: 1)

    3 -> x^2 + x - 6 (Raízes: -3 e 2)

    4 -> x^2 - 4x + 5 (Raízes: não possui raiz real)

    5 -> x^5 + 2x^4 + 3x^3 + 4x^2 + 5x + 6 (Raízes: a descobrir)
    4
    População Original: 134 79 151 152 130 86 114 32 63 38 22 13 228 168 144 117 217 145 142 85 153 157 45 187 190 190 106 108 223 167
    Geração: 1
    (número/distância)

    (13/122)(22/401)(32/901)(38/1297)(45/1850)(63/3722)(79/5930)(85/6890)(86/7057)(106/10817)(108/11237)(114/12545)(117/13226)(130/16385)(134/17425)(142/19601)(144/20165)(145/20450)(151/22202)(152/22501)(153/22802)(157/24026)(167/27226)(168/27557)(187/34226)(190/35345)(190/35345)(217/46226)(223/48842)(228/51077)

    Selecionados:
    (13/122)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)

    Melhor de todos: (13/122)
    Nova população pré-mutação: 14 5 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 5 14
    Nova população: 14 5 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 23 22 22 22 22 22 22 22 22 22 22 5 14
    --------------------
    Geração: 2
    (número/distância)

    (5/10)(5/10)(14/145)(14/145)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(22/401)(23/442)

    Selecionados:
    (5/10)(5/10)(5/10)(5/10)(5/10)(14/145)(14/145)(14/145)(14/145)(14/145)(14/145)(14/145)(14/145)(14/145)(14/145)

    Melhor de todos: (5/10)
    Nova população pré-mutação: 5 5 5 5 5 5 5 5 6 13 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 13 6
    Nova população: 5 5 1 1 5 5 5 5 6 13 14 14 14 14 14 30 14 14 14 46 14 14 14 14 14 14 14 14 13 6
    --------------------
    Geração: 3
    (número/distância)

    (1/2)(1/2)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(6/17)(6/17)(13/122)(13/122)(14/145)(14/145)(14/145)(14/145)(14/145)(14/145)(14/145)(14/145)(14/145)(14/145)(14/145)(14/145)(14/145)(14/145)(14/145)(14/145)(30/785)(46/1937)

    Selecionados:
    (1/2)(1/2)(1/2)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)

    Melhor de todos: (1/2)
    Nova população pré-mutação: 1 1 1 1 1 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 1
    Nova população: 1 1 1 1 1 5 5 5 69 5 5 5 5 5 5 5 5 69 5 5 5 5 5 5 5 5 5 5 5 1
    --------------------
    Geração: 4
    (número/distância)

    (1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(5/10)(69/4490)(69/4490)

    Selecionados:
    (1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)

    Melhor de todos: (1/2)
    Nova população pré-mutação: 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
    Nova população: 65 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 33 1 1 1 1 1 1 33
    --------------------
    Geração: 5
    (número/distância)

    (1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(33/962)(33/962)(65/3970)

    Selecionados:
    (1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)(1/2)

    Melhor de todos: (1/2)
    Nova população pré-mutação: 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
    Nova população: 1 65 1 1 1 1 1 1 17 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
    --------------------

  </details>
  

  <details>
    <summary><strong>Caso 5</strong></summary>

    Tamanho da População: 30

    Taxa de Mutação(%): 7

    Número Máximo de Gerações: 5

    Selecione a Equação:
    1 -> x-7 = 0 (Raiz: 7)

    2 -> x^2 - 2x + 1 (Raiz: 1)

    3 -> x^2 + x - 6 (Raízes: -3 e 2)

    4 -> x^2 - 4x + 5 (Raízes: não possui raiz real)

    5 -> x^5 - 2x^4 + 3x^3 - 4x^2 + 5x - 6 (Raízes: a descobrir)
    5
    População Original: 139 3 172 70 111 190 239 45 32 156 186 124 188 168 70 146 135 176 35 19 89 214 168 83 104 75 83 87 153 201
    Geração: 1
    (número/distância)

    (3/135)(19/2234679)(32/31551642)(35/49644519)(45/176592369)(70/1633689744)(70/1633689744)(75/2311009119)(83/3845812215)(83/3845812215)(87/4871575347)(89/5460658629)(104/11935889154)(111/16551021627)(124/28849066854)(135/44183342019)(139/51150222879)(146/65438799132)(153/82755825285)(156/91216390662)(168/132248746050)(168/132248746050)(172/148801367382)(176/166971420522)(186/220245678852)(188/232370684070)(190/245023913544)(201/324840120597)(214/444651225504)(239/773326376379)

    Selecionados:
    (3/135)(19/2234679)(19/2234679)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)

    Melhor de todos: (3/135)
    Nova população pré-mutação: 3 3 19 19 16 35 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 3 0
    Nova população: 3 3 19 19 16 35 32 32 32 32 32 32 32 32 32 32 32 32 32 32 34 32 32 32 32 32 32 32 3 0
    --------------------
    Geração: 2
    (número/distância)

    (0/-6)(3/135)(3/135)(3/135)(16/928842)(19/2234679)(19/2234679)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(32/31551642)(34/42876204)(35/49644519)

    Selecionados:
    (0/-6)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)

    Melhor de todos: (0/-6)
    Nova população pré-mutação: 3 0 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 0 3
    Nova população: 3 0 3 3 3 3 3 3 67 3 3 3 3 3 3 3 3 3 3 3 3 3 3 11 3 3 3 3 0 3
    --------------------
    Geração: 3
    (número/distância)

    (0/-6)(0/-6)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(3/135)(11/135327)(67/1310707527)

    Selecionados:
    (0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)

    Melhor de todos: (0/-6)
    Nova população pré-mutação: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
    Nova população: 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 8
    --------------------
    Geração: 4
    (número/distância)

    (0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(1/-3)(8/25890)

    Selecionados:
    (0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)

    Melhor de todos: (0/-6)
    Nova população pré-mutação: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
    Nova população: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 32 0 0 0 0 0 0 0 0 32 0
    --------------------
    Geração: 5
    (número/distância)

    (0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(32/31551642)(32/31551642)

    Selecionados:
    (0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)(0/-6)

    Melhor de todos: (0/-6)
    Nova população pré-mutação: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
    Nova população: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
    --------------------

  </details>

---
## Lições Aprendidas

- Manipular melhor números binários.
- Fazer brainstorms;
- Organizar reuniões periódicas;
- Organizar melhor branch's e commits.
