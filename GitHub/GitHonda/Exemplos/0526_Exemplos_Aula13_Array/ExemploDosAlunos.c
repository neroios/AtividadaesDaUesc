#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int alunos = 20;
    int notas[alunos], total = 0;
    int verifica[alunos];
    int duplicadas;
    int pegueiSlide[6] = {0};

    srand(time(NULL));

    // Gera valores de notas aleatorios para o total de alunos. Intervalo de 1 a 5
    for(int i = 0; i < alunos; i++){
        notas[i] = rand() % 6;

    }

    // Confere o total de duplicatas
    for (int j = 0; j < alunos; j++) {
        for(int k = 0; k < alunos; k++) {
            if (notas[j] == notas[k]) {
                total += 1;
            }
        }
        verifica[j] = total;
        total = 0;
    }

    //Printa a lista dos alunos
    printf("\n");printf("Aqui foi o que consegui fazer\n");printf("\n");
    printf("Lista dos alunos\n");
    for(int i = 0; i < alunos; i++){
        printf("[%d] ", notas[i]);
    }

    printf("\n");
    printf("\n");


    // Se o numero ja apareceu antes, continue, caso n tenha, printa na tela quantas vezes ele repetiu
    for(int i = 0; i < alunos; i++) {
        duplicadas = 0;
        for(int k = 0; k < i; k++) {
            if (notas[i] == notas[k]) {
                duplicadas = 1;
            }
        }
        if (duplicadas == 1) {
            continue;
        }
       printf("O numero [%d] apareceu [%d] vezes\n", notas[i], verifica[i]);

    }



    printf("\n");printf("\n");printf("\n");





    printf("Aqui peguei do slide pq n soube como fazer o histograma\n");
    // No indice do valor da nota soma mais 1, ent ele add sempre no valor certo
    for (int i = 0; i < alunos; i++) {
        ++pegueiSlide[notas[i]];
    }

    // Aqui ele vai printar o numero na esquerda e logo em seguida o for do J
    // vai add a quantia de [*] para simbolizar o histograma
    // Quebra a linha e sobre para o proximo valor
    printf("\n");
    for (int i = 0 ; i < 6 ; i++) {
        printf("%d    ", i);
        for (int j=0; j<pegueiSlide[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}








