#include <stdio.h>
#include <time.h>

    
int main() {
    int tamanho = 100000;
    int randNum = 100000;
    int arr[tamanho];
    int n = sizeof(arr) / sizeof(arr[0]);
    clock_t inicio = clock();
    srand(time(NULL));
    int tries = 2;

    for (int k = 0; k < tries; k++){
            
        for (int i = 0; i < tamanho; i++){
        arr[i] = rand() % randNum;
    }

    printf("\n");
    printf("Lista baguncada:\n");


    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }

    
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Trocar arr[j] e arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    printf("\n");
    printf("\n");
    printf("Lista ordenada:\n");
   
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("\n");

    printf("\nFim do programa\n");


    }

    
    clock_t fim = clock();
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nElapsed time: %f seconds\n", tempo/ tries);
    
    return 0;
}

/*

tamanho = 100000
randNum = 100;
Elapsed time: 27.259423 seconds

*/
