#include <stdio.h>
#include <string.h>


int main(){
    char tentativa[9];
    char palavra[] = {'s','a','l','s','i','c','h','a','\0'};
    char lua[] = {'l','u','a','\0'};
    char amor[] = {'a','m','o','r','\0'};

    int tam, k = 0;
    int contador;
    tam = strlen(palavra);
    int auxLua = 0, auxAmor = 0, auxSalsicha = 0;


    while(1){

        printf("\nDigite a palavra -> ");
        gets(tentativa);


        if (strcmp(tentativa, amor) == 0){
            auxAmor = 1;
        }




        for (int i = 0; i < tam; i++){
            if(auxSalsicha == 0)
                printf("\n*");
            else
                printf("\n%c", palavra[i]);

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

            else{
                if (i >= 2 && i <= 5){
                    if(k == 0){
                        printf("%3c",amor[k]);
                        k++;
                        continue;
                    }
                    printf("%5c",amor[k]);
                    k++;
                }
            }
        }


    }






    return 0;
}

/*
for (int i = 0; i < tam; i++){

    if (i == 2){
        for (int u = 1; u <= i; u++){
            printf(" %c ", lua[u]);
        }
    }

    if (i >= 3 && i <= 5){
        printf("%5c",amor[k]);
        k++;
        }
    }
*/

