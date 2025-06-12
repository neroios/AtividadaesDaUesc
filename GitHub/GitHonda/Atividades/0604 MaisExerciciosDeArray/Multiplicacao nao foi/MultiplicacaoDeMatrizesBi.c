#include <stdio.h>

// Colocar dentro do array algum valor
// total de vezes, array usado, linha, coluna


int main() {
    // Primeiro array
    int linha1 = 4;
    int col1 = 4;
    int array1[linha1][col1];

    // Segundo array
    int linha2 = 4;
    int col2 = 4;
    int array2[linha2][col2];

    // Deixar apenas matrizes que podem ser multiplicadas
    if (col1 != linha2)
            return 0;
    int cont = 0;

    // enche e printa a matriz 1
    for (int i = 0; i < linha1; i++) {
        for (int j = 0; j <col1; j++) {
            array1[i][j] = cont += 3;
        }
        printf("\n");
    }


    for (int i = 0; i < linha1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("%d ", array1[i][j]);
        } printf("\n");
    }

    cont = 0;

    // enche e printa a matriz 2
    for (int i = 0; i < linha2; i++) {
        for (int j = 0; j <col2; j++) {
            array2[i][j] = cont;
            cont += 2;
        }
        printf("\n");
    }

    printf("\n");
    for (int i = 0; i < linha2; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", array2[i][j]);
        } printf("\n");
    }

    printf("\n");printf("\n");printf("\n");

    // Resultado da matriz

    int resp = 0;
    for (int i = 0; i < linha1; i++) {
        for (int j = 0; j < col2; j++) {
            resp += array1[i][j] * array2[i][j];


        }
        printf("%d ", resp);
        printf("\n");
        resp = 0;
    }


    return 0;
}