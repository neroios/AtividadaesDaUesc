#include <stdio.h>
#include <string.h>


int main(){
    char tentativa[9];
    char salsicha[] = {'s','a','l','s','i','c','h','a','\0'};
    char lua[] = {'l','u','a','\0'};
    char amor[] = {'a','m','o','r','\0'};

    int tam, k = 0;
    int contador;
    tam = strlen(salsicha);
    int auxLua = 0, auxAmor = 0, aux_salsicha = 0;


    while(1) {
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-Palavra cruzada=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        if (aux_salsicha == 0)
            printf("\nEmbutido de carne (8 Letras)\n");
        if (auxAmor == 0)
            printf("Essencial entre amantes (4 letras)\n");
        if (auxLua == 0)
            printf("Satelite natural (3 letras)\n");
        printf("Digite a palavra (MAX 8 LETRAS) ->  ");
        gets(tentativa);

        if (strcmp(tentativa, salsicha) == 0){
            aux_salsicha = 1;
        }
        if (strcmp(tentativa, amor) == 0){
            auxAmor = 1;
        }
        if (strcmp(tentativa, lua) == 0){
            auxLua = 1;
        }

        k = 0;
        contador = 0;

        for (int i = 0; i < tam; i++) {
          if (aux_salsicha == 0) {
              if (contador == 2 && auxLua == 1 && aux_salsicha == 0) {
                  printf("\n%c ", salsicha[i]);
              }
              else
                printf("\n*");
              contador++;
          }
            if(aux_salsicha == 1){
                printf("\n%c", salsicha[i]);
            }
            if (i == 2 && auxLua == 1 && auxAmor == 0) {
                for (int u = 1; u <= i; u++) {
                    printf("%c ", lua[u]);
                }
            }
            if (i == 2 && auxLua == 1 && auxAmor == 1) {
                for (int u = 1; u < i; u++) {
                    printf(" %c", lua[u]);
                }
            }
            if (i == 2 && auxLua == 0 && auxAmor == 0){
                for (int u = 1; u <= i; u++){
                    printf(" *");
                }
            }
            else if(i == 2 && auxLua == 0 && auxAmor == 1){
                for (int u = 1; u <= i-1; u++){
                    printf(" *");
                }
            }
            if (i >= 3 && i <= 5 && auxAmor == 0){
                printf("   *");
            }
            else if (i > 1 && i <= 5 && auxAmor == 1){
                if(k == 0){
                    printf("%3c",amor[k]);
                    k++;
                    continue;
                }
                printf("%5c",amor[k]);
                k++;
            }
            }
        if (aux_salsicha == 1 && auxLua == 1 && auxAmor == 1) {
            break;
        }
        }
    printf("\n\nParabens! Voce Ganhou!");
    return 0;
    }


