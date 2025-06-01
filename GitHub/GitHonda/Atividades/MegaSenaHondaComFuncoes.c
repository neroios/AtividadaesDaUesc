#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


void printList();

int  tam_max = 6, numbers[6];


int main(){
    
    int input1;
    bool verifica, max;
    
    verifica = true;
    max = true;
    printf("Digite quantos numeros quer sortear[Ate no max 6]: ");
    scanf("%d", &tam_max) ;
    // imputs do user
    for (int i = 0; i < tam_max; i++){
        verifica = true;
        printf("Digite o numero para entrar na posicao %d -> " ,i+1);
        printf("\n");
        while (verifica){   
        
        while(true){
            scanf("%d", &input1);
            if(input1 > 60 || input1 < 1){
                printf("Valor invalido! Numeros de apenas 2 casas decimais\n");
            }
            else{
                break;
            }
        }
        
            for(int c = 0; c < tam_max; c++){
               // printf("%d", c);
               
               // Aqui e pra n deixar duplicatas
                if (numbers[c] == input1){
                    printf("Numero duplicado, nao pode\n");
                    input1 = 0;
                    break;
                }
                
                
                // Aqui e pra add dentro da lista
                
                else if(numbers[c] != input1 && c <= tam_max - 1){
                    //printf("Pode seguir \n");
                        //printf("Lista pos %d -> %d\n",n, numbers[n]);
                        if (c == tam_max - 1){
                            //printf("Numero adicionado com sucesso! \n");
                            numbers[i] = input1;
                            verifica = false;
                        }
                    
                }
            }
        }
    }
    
        
        
        
    // printf("O usuario digitou os numeros: ");
    // for (int n = 0; n < 5; n++){
    //     printf("[%d] ", numbers[n]);        
    // }
    
    // printf("\n");   
    // printf("\n");
    
    
    
    
    
    clock_t inicio = clock();
    // Aqui e a parte do randint, por isso n tem mensagem
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    printf("\nO usuario digitou os numeros: ");
    
    
    printList();
    
    
    
    
    printf("\n");
    printf("Voce vai ganhar depois de: ");
    
    int r, sort[tam_max], cont = 0, total = 1;
    while(max){
            for (int i = 0; i < tam_max; i++){
                verifica = true;
                
            
                while(verifica){
                    
                    
                    // Aqui e pra nao deixar duplicatas
                    
                    r = (rand() % 60 + 1);
                    //scanf("%d", &r);
                    for (int c = 0; c < tam_max; c++){
                        if (sort[c] == r){
                            r = 0;
                            break;
                        }
                        
                        
                        
                        // Aqui e pra add dentro da lista
                        
                        else if (sort[c] != r && c <= tam_max - 1){
                            if (c == tam_max - 1){
                                sort[i] = r;
                                verifica = false;
                            }
                        }
                    }
                }
            }
            

        
        
        // Aqui e pra ver se o pc acertou os numeros do user
        for (int i = 0; i < tam_max; i++){
            for (int j = 0; j < tam_max; j++){
                if (sort[j] == numbers[i]){
                    cont += 1;
                }
            }
        }
            
            if(cont != tam_max){
                cont = 0;
                total += 1;
                max = true;
            }
            
            else if(cont == tam_max){
                max = false;
                break;
            }
    }            
            
            
    clock_t fim = clock();
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    
    printf("%d tentativas", total);
    printf("\n");
    printf("O tempo de execucao foi: %.2f segundos\n", tempo);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
        
    // 4 12 25 45 36 5
    // 2 3  45 6  7  8
    
    return 0;
} 


void printList(){
    for (int n = 0; n < tam_max; n++){
        printf("[%d] ", numbers[n]);
    }
    
    
}
