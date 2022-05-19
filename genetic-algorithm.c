#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int tam_pop, tax_mut, nmax_ger, equacao;

    /*Leitura das Variáveis*/
    printf("Tamanho da População: ");
    scanf("%i", &tam_pop);
    printf("\nTaxa de Mutação(%%): ");
    scanf("%i", &tax_mut);
    printf("\nNúmero Máximo de Gerações: ");
    scanf("%i", &nmax_ger);
    printf("\nSelecione a Equação:");
    printf("\n 0 - x-7 = 0 \n");
    scanf("%i", &equacao);

    /*Declarando a população como vetor*/
    int pop[tam_pop][2];
    int pop_melhores[tam_pop/2][2];
    //Coluna 0: o número
    //Coluna 1: sua distância

    /*Enchendo o array da distancia dos melhores com 2.000.000.000*/
    for(int i = 0; i < (tam_pop/2); i++){
        pop_melhores[i][1] = 2000000000;
    }

    /*Preenchendo o vetor com numeros aleatorios*/
    srand(time(NULL));
    for (int i = 0; i < tam_pop; i++){
        pop[i] = rand() % 100; //Aqui os números estão sendo gerados de 1 a 100, o que pode ser alterado
        printf("%i ", pop[i][0]);
    }
    printf("\n");

    // Criando o loop das gerações
    while(nmax_ger > 0){

        //Aplicando a condicional da equacao
        if( equacao == 0){

            // Aplicando os numeros na equação e adicionando o resultado na pop[x][1]
            for(int i = 0; i < tam_pop; i++){
                pop[i][1] = pop[i][0] - 7;
                printf("Distancia no %i : %i \n", i, pop[i][1]); // checagem das distancias
                // Checando se achamos uma raiz
                if(pop [i][1] == 0){
                    printf("Raiz: %i", pop[i][0]);
                    break;
                }
            }

            // Selecionando a metade melhor:
            // Aqui, os numeros são selecionados com base na distancia e adicionados na pop_melhores,
            // que é constantemente ordenada, para que a comparação fique mais simples.
            for(int i = 0; i < tam_pop; i++){
                if(pop[i][1] < pop_melhores[0][1]){
                    pop_melhores[0][0] = pop[0][0];
                }

                //Ordenação da pop_melhores em ordem decrescente
                for(int j = 0; j < tam_pop/2; j++){
                    
                    if(pop_melhores[i][1] < pop_melhores[i + 1][1]){
                        int temp = pop_melhores[]

                    }
                }



            }






                nmax_ger--;
            }

    }



    return 0;
}