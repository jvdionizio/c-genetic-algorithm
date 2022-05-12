#include <stdio.h>
#include <stdlib.h>

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
    int pop[tam_pop];
    int distancia[tam_pop];
    int dist_melhores[tam_pop/2];
    int pop_melhores[tam_pop/2];
    /*Enchendo o array da distancia dos melhores com 2.000.000.000*/
    for(int i = 0; i < (tam_pop/2); i++){
        dist_melhores[i] = 2000000000;
    }

    /*Preenchendo o vetor com numeros aleatorios*/
    srand(time(NULL));
    for (int i = 0; i < tam_pop; i++){
        pop[i] = rand() % 100; //Aqui os números estão sendo gerados de 1 a 100, o que pode ser alterado, se
        printf("%i ", pop[i]);
    }
    printf("\n");

    if( equacao == 0){
        /*Aplicando os numeros na equacao (0) e criando o array distancia*/
        for(int i = 0; i < tam_pop; i++){
            distancia[i] = pop[i] - 7;
            printf("Distancia no %i : %i \n", i, distancia[i]);
        }
        /*Enchendo o array melhores com as menores distancias*/
        for(int i = 0; i < tam_pop; i++){
            /*Colocando o array dist_melhores em ordem decrescente*/
            for(int j = 0; j < (tam_pop/2); j++){
                for(int k = 0; k < (tam_pop/2); k++){
                    if(dist_melhores[j] < dist_melhores[k]){
                        int aux;
                        aux = dist_melhores[k];
                        dist_melhores[j] = dist_melhores[k];
                        dist_melhores[k] = aux;
                    }
                }
                printf("dis_melhores no %i : %i \n", j, dist_melhores[j]);
            }
            
        }

    }



    return 0;
}