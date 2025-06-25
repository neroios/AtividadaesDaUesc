#include <stdio.h>
#include <time.h>



int main(){

    clock_t inicio = clock();
    double tempo = 0;
    int tamanho;

    printf("Qual o tamanho: ");
    scanf("%d", &tamanho);

    switch (tamanho) {
        case 1:
            int Array[10];
            for (int i = 0; i < 10; i++) {
                Array[i] = ++i;
            }

            for (int i = 0; i < 10; i++) {
                printf("%d ", Array[i]);
            }
            break;

        case 2:
            int meuArray[10][10];
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    meuArray[i][j] = j+i;
                }
            }

            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    printf("%d ", meuArray[i][j]);
                }printf("\n");
            }
                break;

        case 3:
            int minhaArray[10][10][10];
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    for (int k = 0; k < 10; k++) {
                                minhaArray[i][j][k] = j+k+i;
                    }
                }
            }

            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    for (int k = 0; k < 10; k++) {
                                printf("%d ", minhaArray[i][j][k]);
                    }
                }
            }
            break;

        case 4:
            int mineArray[10][10][10][10];
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    for (int k = 0; k < 10; k++) {
                        for (int l = 0; l < 10; l++) {
                                mineArray[i][j][k][l] = j+k+i+l;
                        }
                    }
                }
            }

            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    for (int k = 0; k < 10; k++) {
                        for (int l = 0; l < 10; l++) {
                                printf("%d ", mineArray[i][j][k][l]);
                        }
                    }
                }
            }
            break;
        case 5:

            int myArray[10][10][10][10][10];

            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    for (int k = 0; k < 10; k++) {
                        for (int l = 0; l < 10; l++) {
                            for (int n = 0; n < 10; n++) {
                                myArray[i][j][k][l][n] = j+k+i+l+n;
                            }

                        }
                    }
                }
            }

            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    for (int k = 0; k < 10; k++) {
                        for (int l = 0; l < 10; l++) {
                            for (int n = 0; n < 10; n++) {
                                printf("%d ", myArray[i][j][k][l][n]);
                            }
                        }
                    }
                }
            }
            break;
            /*
        case 6:
            int array[10][10][10][10][10][10];

            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    for (int k = 0; k < 10; k++) {
                        for (int l = 0; l < 10; l++) {
                            for (int n = 0; n < 10; n++) {
                                for (int o = 0; o< 10; o++) {
                                    array[i][j][k][l][n][o] = j+k+i+l+n+o;
                                }
                            }

                        }
                    }
                }
            }

            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    for (int k = 0; k < 10; k++) {
                        for (int l = 0; l < 10; l++) {
                            for (int n = 0; n < 10; n++) {
                                for (int o = 0; o< 10; o++) {
                                    printf("%d ", array[i][j][k][l][n][o]);
                                }
                            }
                        }
                    }
                }
            }
            break;*/
    }


    clock_t fim = clock();
    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nElapsed time: %f seconds\n", tempo);

    return 0;
}