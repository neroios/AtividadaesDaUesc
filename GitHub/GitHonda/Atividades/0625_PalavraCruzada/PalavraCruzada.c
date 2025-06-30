#include <ctype.h>
#include <stdio.h>
#include <string.h>


int main(){
    char Original[9];
    char minuscula[9];
    char salsicha[] = {'s','a','l','s','i','c','h','a','\0'};
    char lua[] = {'l','u','a','\0'};
    char amor[] = {'a','m','o','r','\0'};

    int tam, k = 0;
    int contador;
    tam = strlen(salsicha); // Pega o tamanho da maior palavra, nesse caso, salsicha
    int auxLua = 0, auxAmor = 0, aux_salsicha = 0;

    while(1) { // Seta um loop infinito, pois o User tem que ficar fazendo ate acertar
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-Palavra cruzada=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        if (aux_salsicha == 0) // Mostra as dicas, e caso o user tenha acertado, a dica some
            printf("\nEmbutido de carne (8 Letras)\n");
        if (auxAmor == 0)
            printf("Essencial entre amantes (4 letras)\n");
        if (auxLua == 0)
            printf("Satelite natural (3 letras)\n");
        printf("Digite a palavra (MAX 8 LETRAS) ->  ");
        gets(Original);
        for (int i = 0; i < tam; i++)
            minuscula[i] = tolower((Original)[i]);

        if (strcmp(minuscula, salsicha) == 0){ // Realiza a comparacao entre o Imput e a palavra certa
            aux_salsicha = 1; // Caso acerte, a variavel auxiliar recebe 1 permitindo interacoes abaixo
        }
        if (strcmp(minuscula, amor) == 0){
            auxAmor = 1;
        }
        if (strcmp(minuscula, lua) == 0){
            auxLua = 1;
        }

        k = 0;
        contador = 0;

        for (int i = 0; i < tam; i++) { // For que vai manter o print na tela atualizado da palavra revelada ou censurada

          if (aux_salsicha == 0) { // Caso o user nao acertou a maior palavra entra no if
              if (contador == 2 && auxLua == 1 && aux_salsicha == 0) { // Contador para checar em qual letra esta a impressao e verifica o acerto da "lua"
                  printf("\n%c ", salsicha[i]);
              }
              else
                printf("\n*"); // Se nao printa cencurado e adiciona no contador
              contador++;
          }
            if(aux_salsicha == 1){ // Se acertou printa salsicha
                printf("\n%c", salsicha[i]);
            }
            if (i == 2 && auxLua == 1 && auxAmor == 0) { // Faz as combinacoes de palavras acertadas para saber o que revelar na tela
                for (int u = 1; u <= i; u++) { // Utiliza-se um for pois a palabra lua tem que aparecer na mesma linha
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
                    k++; // Contador novo para printar a palavra amor junto a palavra salsicha
                    continue;
                }
                printf("%5c",amor[k]);
                k++;
            }
            }
        if (aux_salsicha == 1 && auxLua == 1 && auxAmor == 1) { // Caso o user acertou todas, encerra o programa apos printar todas
            break;
        }
        }
    printf("\n\nParabens! Voce Ganhou!");
    return 0;
    }


