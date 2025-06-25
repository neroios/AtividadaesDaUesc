#include <stdio.h>
#include <time.h>

    
int main() {
    int tamanho = 100000;
    int randNum = 100000;
    int arr[tamanho];
    int n = sizeof(arr) / sizeof(arr[0]); // divide o total de bytes do array pelo tamanho de um elemento 40000 / 4 -> 10000 elementos
    clock_t inicio = clock();
    srand(time(NULL));
    int tries = 2;
    int temp;

        // Coloca valores dentro de arrays
    for (int k = 0; k < tries; k++){
        for (int i = 0; i < tamanho; i++){
        arr[i] = rand() % randNum;
    }

    printf("\n");
    printf("Lista baguncada:\n");

    // printa o array
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }

    // Bubble sort para organizar o array inteiro

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
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

        // printa o array ja ordenado
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
