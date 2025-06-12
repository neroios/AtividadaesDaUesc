#include <stdio.h>

        // Funcao para printar o array tri dimensional
void printaArray(int tam_array, int linhas, int contador, int coluna, int Array[]) {

    for (int k = 0; k < tam_array; k++ ) {
        for (int i = 0; i < linhas; i++) {
            for (int j = contador; j < coluna + contador ; j++) {
                printf("%d ", Array[j]);
            }
            contador += coluna;
            printf("\n");
        }
        printf("\n");
    }
}



int main() {
    int tam_array = 3, lin = 4, col = 5;
    int cont = 0;

    printf("Quantas linhas: ");
    scanf("%d", &lin);

    printf("\nQuantas colunas: ");
    scanf("%d", &col);


    printf("\nQuantos array: ");
    scanf("%d", &tam_array);

    int x = tam_array * lin * col;
    int Array[x];

    // Colocar os itens dentro do Array
    for (int i = 0; i < x; i++) {
        Array[i] = i;
    }


    printf("\n");printf("\n");


    // tamanho do array, linhas, contador, coluna, array
    printaArray(tam_array, lin, cont, col, Array);


    int pega_linha;
    int pega_coluna;
    int pega_array;

    printf("\n");printf("\n");
            //    -=-=-=-=-=-=--=-=-=-=-=-=--=-=-=-=-=-=-
    printf("-=-=-=-=-=-=- Pega indice -=-=-=-=-=-=-");
    printf("\nQual linha quer: ");
    scanf("%d", &pega_linha);
    printf("\nQual coluna quer:");
    scanf("%d", &pega_coluna);
    printf("\nQual array voce quer: ");
    scanf("%d", &pega_array);

    // Caso o user digite um valor fora do permitido
    if (pega_linha > lin || pega_linha < 1)
        return 1;
    if (pega_coluna > col || pega_coluna < 1)
        return 1;
    if (pega_array > tam_array || pega_array < 1)
        return 1;

    // Formula para Expandir para o array desejado + para pegar no indice escolhido
    int result = ((lin*col*(pega_array - 1) + (pega_linha * col - 1) - col + pega_coluna));
    printf("\nO valor no indice Linha %d e Coluna %d e Array %d -> %d", pega_linha, pega_coluna, pega_array ,Array[result]);
    printf("\n-=-=-=-=-=-=--=-=-=-=-=-=--=-=-=-=-=-=-");
    return 0;
}

