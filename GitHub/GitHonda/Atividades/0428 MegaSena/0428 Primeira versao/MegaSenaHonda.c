#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
int main(){
    
    int input1, numbers[6] = {0,0,0,0,0,0};
    bool verifica, max;
    
    verifica = true;
    max = true;
     
    // imputs do user
    for (int i = 0; i < 6; i++){
        verifica = true;
        printf("Digite o numero para entrar na posicao %d -> " ,i+1);
        printf("\n");
        while (verifica){   
        
        while(true){
            scanf("%d", &input1);
            if(input1 > 60 || input1 < 1){ // verifica se o valor esta dentro do aceito pela mega sena
                printf("Valor invalido! Numeros de apenas 2 casas decimais\n");
            }
            else{
                break;
            }
        }
        
            for(int c = 0; c < 6; c++){
               
               // Aqui e pra n deixar duplicatas
                if (numbers[c] == input1){
                    printf("Numero duplicado, nao pode\n");
                    input1 = 0;
                    break;
                }
                
                
                // Aqui e pra add dentro da lista
                    if(numbers[c] != input1 && c <= 5){
                        if (c == 5){
                            numbers[i] = input1;
                            verifica = false;
                        }
                    
                }
            }
        }
    }

    clock_t inicio = clock();


    // Aqui e a parte do randint, por isso n tem mensagem
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    printf("\nO usuario digitou os numeros: ");
    for (int n = 0; n < 6; n++){
        printf("[%d] ", numbers[n]);        
    }
    printf("\n");
    printf("Voce vai ganhar depois de: ");



    int r, sort[6] = {0,0,0,0,0,0}, cont = 0, total = 1;
    while(max){
            for (int i = 0; i < 6; i++){
                verifica = true;
                while(verifica){
                    
                    // Aqui e pra nao deixar duplicatas
                    
                    r = (rand() % 60 + 1);
                    for (int c = 0; c < 6; c++){
                        if (sort[c] == r){
                            r = 0;
                            break;
                        }

                        // Aqui e pra add dentro da lista
                        if (sort[c] != r && c <= 5){
                            if (c == 5){
                                sort[i] = r;
                                verifica = false;
                            }
                        }
                    }
                }
            }
        
        // Aqui e pra ver se o pc acertou os numeros do user, adicionando 1 no contador caso o numero seja igual
        for (int i = 0; i < 6; i++){
            for (int j = 0; j < 6; j++){
                if (sort[j] == numbers[i]){
                    cont += 1;
                }
            }
        }
            // caso o for termine e o contador nao seja igual o total de numeros no array (6) ele 0 o contador, adiciona um no total e repete
            if(cont != 6){
                cont = 0;
                total += 1;
                max = true;
            }

        // caso o contador seja 6, ou seja todos os numeros sao iguais, ele sai do loop
            else if(cont == 6){
                max = false;
                break;
            }
    }            
            
            
    clock_t fim = clock();
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    
    printf("%d tentativas", total);
    printf("\n");
    printf("O tempo de execução foi: %f segundos\n", tempo);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    
    return 0;
  
} 