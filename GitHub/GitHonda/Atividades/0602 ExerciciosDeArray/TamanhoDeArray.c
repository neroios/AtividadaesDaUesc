#include <stdio.h>
#include <time.h>
#include <stdint.h>


int main(){

    clock_t inicio = clock();
    double tempo = 0;
    int tamanho;

    printf("Qual o tamanho: ");
    scanf("%d", &tamanho);

    // Deu tudo em torno de 2mb de memoria, acho que meu compilador so aguenta isso

    switch (tamanho) {
        case 1:// 2070000. mesmo quando o compilador da erro se eu insisto alguma hora ele roda e retorna 0 ou um numero estranho
            int Array[517500];
                printf("%d ", sizeof(Array));

            break;

        case 2:
                //tamanho maximo em 2 dimensoes 2070720 bytes
            int meuArray[720][719];

                    printf("%d ", sizeof(meuArray));

            break;

        case 3:
            //tamanho maximo em 3 dimensoes 2060400 bytes
            int minhaArray[51][101][100] = {0};
            printf("%d", sizeof(minhaArray));

           break;
    }


    clock_t fim = clock();
    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nElapsed time: %f seconds\n", tempo);

    return 0;
}
