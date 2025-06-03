#include <stdio.h>
#include <time.h>



int main(){

    clock_t inicio = clock();
    int soma = 0;
    int x = 10, y = 500;
    int myArray[x][y];
    double tempo = 0;
    int k = 100000;

    for (int l = 0; l < k; l++){
            printf("Lenght = %ld", sizeof(myArray));
            printf("\n");
            for(int i = 0; i < x; i++){
                for(int j = 0; j < y; j++)
                    myArray[i][j] = i + j;
            }
            printf("\n");

             for(int i = 0; i < x; i++){
               for(int j = 0; j < y; j++)
                     printf("%d ", myArray[i][j]);

                 printf("\n");
             }

            for(int i = 0; i < x; i++){
                for(int j = 0; j < y; j++)
                    soma += myArray[i][j];
            }
            printf("\n");
            printf("%d", soma);
            printf("\n");
    }

    clock_t fim = clock();
    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("Elapsed time: %f seconds\n", tempo / k);

    return 0;
}

/*
5 tries
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
x = 100, y = 50;
Elapsed time: 0.380000 seconds

x = 50; y = 100;
Elapsed time: 0.365400 seconds
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

20 tries
x = 100; y = 50;
Elapsed time: 0.371450 seconds

x = 50; y = 100;
Elapsed time: 0.361150 seconds

-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

1000 tries
x = 100; y = 50;
Elapsed time: 0.360939 seconds

x = 50; y = 100;
Elapsed time: 0.356667 seconds

-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
*/