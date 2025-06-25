#include <stdio.h>
// Colocar dentro do array algum valor
// total de vezes, array usado
void encheArray(int tot1, int array1[]) {
    for (int i = 0; i < tot1; i++) {
        array1[i] = i;
    }
}

// Mostar o array na tela
//array usado, contador, colunas, linhas
void printaArray(int array1[], int cont, int col, int lin) {
    cont = 0;
    printf("\n");
    for (int i = 0; i < lin; i++) {
        for (int j = cont; j < cont + col; j++) {
            printf("%d ", array1[j]);
        }
        cont += col;
        printf("\n");
    }
    printf("\n");
}

int main (){

    int cont = 0;

    //Primeira Matriz

    int linha1 = 2;
    int col1 = 3;
    int tot1 = col1 * linha1;
    int array1[tot1];

    //Segunda Matriz

    int linha2 = 3;
    int col2 = 2;
    int tot2 = col2 * linha2;
    int array2[tot2];

   // if (col1 != linha2)
      //  return 1;

    // Terceira Matriz (Resultados)
    int linha3 = linha1;
    int col3 = col2;
    int tot3 = linha3 * col3;
    int array3[tot3];


    // total de vezes, array usado
    encheArray(tot1, array1);

    encheArray(tot2, array2);

    //array usado, contador, colunas, linhas
    printaArray(array1, cont, col1, linha1 );

    printaArray(array2, cont, col2, linha2 );


    int resp = 0;
    cont = 0;
    int timer = 0;

    for (int i = 0; i < tot3; i++) {
        for (int j = cont; j < cont + col3; j++) {
            resp += array1[j] * array2[j * col3 + i];
        }
        printf("\n%d", resp);
        cont += col3;
    }


//https://imgur.com/a/nTr8BWJ  A ideia e essa ai, so botar em pratica







    return 0;
}