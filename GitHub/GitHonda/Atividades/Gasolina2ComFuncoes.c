#include <stdio.h>

float gas = 0, eta = 0, gnv = 0;

float modeloCarro(int n);


int main(){
    
    float media, etaConfirma = 0, gnvConfirma = 0;
    int test = 0, carro = 0;
    

    printf("Valor do gas: ");
    scanf("%f", &gas);
    
    
    
    printf("Valor do etanol: ");
    scanf("%f", &eta);
    
    // Deixar o user escolher se quer usar o Gnv ou nao
    
    while(test != 2 || test != 1){
        printf("Vai querer usar gnv?\n");
        
        printf("[1] Sim\n");
        printf("[2] Nao\n");
        
        scanf("%d", &test);
        if (test == 1){
            printf("Preco do GNV: ");
            scanf("%f", &gnv);
            break;
        }
        
        
        else if(test == 2){
            break;
        }
        
        
        else{
            printf("Opcao invalida, tente novamente! \n");
        }
        
    }

    // Dar ao user opcao de escolher o modelo do carro
    
    while (carro != 1 || carro != 2){
        printf("Qual o modelo do seu carro?\n");
        
        printf("[1] Honda Fit\n");
        printf("[2] Fiat Mobi\n");
        scanf("%d", &carro);
        
        if (carro == 1){
            modeloCarro(1);
            break;
        }
        
        else if (carro == 2){
            modeloCarro(2);
            break;
        }
        
        else{
            printf("Opcao invalida, tente novamente! \n");
        }
        
    }
    
    // Aqui mostra o limite para referencia
    
    printf("\n");
    printf("Limite do Etanol -> [0.70]\n");
    
    if (test == 1){
        printf("Limite do GNV -> [0.83]\n");
    }
    

    // Faz as contas para ver se vale apena
    printf("\n");
    printf("A razao entre o etanol e a gasosa e de: %.2f\n", eta / gas);
    
    if (test == 1){
        printf("A razao entre o gnv e a gasosa e de: %.2f\n", gnv / gas);
    }
    
    printf("\n");
    
    

    // Faz a verificacao se esta funcinando e coloca numa variavel que permite fazer testes em cima delas
    if(eta / gas <= 0.7){
        etaConfirma = 1;
    }
    
    
    
    if(gnv / gas <= 0.83){
        if (test == 1){
            gnvConfirma = 1;
        }
    }
    


    // Realiza as possibilidades para imprimir na tela
    if(gnvConfirma == 1 && etaConfirma == 1){
        printf("Etanol e Gnv Estao mais baratos, ve legal ai\n");
    }
    
    else if(gnvConfirma == 1 &&  etaConfirma == 0){
        printf("Use Gnv pq ta mais barato\n");
    }
    
    else if(gnvConfirma == 0 && etaConfirma == 1){
        printf("Use Etanol pq ta mais barato\n");
    }
    
    else{
        printf("Use Gasosa pq e o ta mais em conta\n");
    }
    
    return 0;
}

// Diferenca de consumo dentre os varios carros
float modeloCarro(int n){
    if (n == 1){
        eta = eta * 1.85;
        gas = gas * 1.82;
        gnv = gnv * 2.13;
        
    }   

    if (n == 2){
        eta = eta * 2.16;
        gas = gas * 2.16;
        gnv = gnv * 2.8;
                
    }

    
}