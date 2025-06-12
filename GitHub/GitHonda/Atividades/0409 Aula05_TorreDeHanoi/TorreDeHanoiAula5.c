#include <stdio.h>
#include <math.h>

// Só fiz até 5, Qualquer Número acima disso precisaria de muitas correções

// Não conheco um jeito mais otimizado de fazer disso

// Fiz em Python 3 e passei pra C

int main(){
    int v1 ,v2 ,v3 ,v4, v5, passos, c, blocos;
    
    printf("As opcoes sao 1, 2, 3, 4 e 5: ");
    blocos = 0;
    scanf("%d", &blocos);
    
    passos = pow(2, blocos) - 1; // Formula pra achar o mov minimo
    
    
    //Blocos são nomeados pelo seu tamnho, sendo 1 o menor e max(N) o maior
    
    
    v1 = 3; // Primeiro movimento do Bloco 1
    v2 = 2; // Primeiro movimento do Bloco 2
    v3 = 3; // Primeiro movimento do Bloco 3
    v4 = 2; // Primeiro movimento do Bloco 4
    v5 = 3; // Primeiro movimento do Bloco 5
    

        for (c = 0; c < passos; c++){
            
            printf("%d Movimento = ", c);
            
            
            if (c % 2 == 0){                         // Caso o resto seja 0, imprime o mov do bloco 
                printf("Bloco 1 -> Torre %d\n", v1); // 1, Mesma logica para os outros
                v1--;
                if (v1 == 0){
                    v1 = 3;
                }
            }
            
            if ((c - 1) % 4 == 0){                  // Como comeca em 0, foi pra ficar melhor
                printf("Bloco 2 -> Torre %d\n", v2); // E tambem, subtraindo 1 vira Multiplo de 4
                v2 = v2 + 1;                        // O que deixa facil a conta e nao conflita com
                if (v2 == 4){                       // O if de cima
                     v2 = 1;
                }
            }
            
            
            if ((c + 5) % 8 == 0){                  // Pra virar multiplo de 8
                printf("Bloco 3 -> Torre %d\n", v3);
                v3 = v3 - 1;
                if (v3 == 0){
                    v3 = 3;
                }    
            }
            
            
                                                            // Aqui eu coloquei como multiplo de 9
            if ((c + 2) % 9 == 0 && c != 16 && c != 25 && c != 34 && c != 43 && c != 52  && c != 61 && c != 70 && c != 79 && c != 88 && c != 97  && c != 106  && c != 115  && c != 124){ 
                printf("Bloco 4 -> Torre %d\n", v4);        // Mas ainda assim deu conflito
                v4 = v4 + 1;                            // Então precisei colocar E lógico pra dar
                if (v4 == 4){                           // Verdadeiro
                    v4 = 1;
                }
            }
            
           
            
            if  (c == 23 || c == 39 || c == 55 || c == 71 || c == 87 || c == 103 || c == 119){                              // Precisava de um Bloco 4 nesses passos, mas
                printf("Bloco 4 -> Torre %d\n", v4);                                                                        // Pela conta que fiz, não daria certo
                v4 = v4 + 1;
                if (v4 == 4){
                    v4 = 1;
                }
            }
            
            
            
            
            
            if ((c + 5) % 20 == 0 && c != 35 && c != 55 && c != 75 && c != 95 && c != 115){                     // Coloquei Multiplo de 20 pq fica facil de
                printf("Bloco 5 -> Torre %d\n", v5);                                                            // Tirar o resto e demoraria para conflitar
                v5 = v5 - 1;
                if (v5 == 0){
                    v5 = 3;
                }
            
            
            
            if(c == 47 ||  c == 79 ||  c == 111){
                printf("Bloco 5 -> Torre %d\n", v5);
                v5 = v5 - 1;
                if (v5 == 0){
                    v5 = 3;
            }
            }
            }
    }
    
}

            

            // Em C só consegui fazer até 5 blocos, em Python fiz até 7
            

            
            
            
            
           