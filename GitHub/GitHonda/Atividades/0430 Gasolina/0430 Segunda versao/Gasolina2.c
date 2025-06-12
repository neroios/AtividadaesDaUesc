#include <stdio.h>

int main(){
    
    float gas, eta, media, gnv, etaConfirma = 0, gnvConfirma = 0;
    int test = 0, carro = 0;
    
    printf("Valor do gas: ");
    scanf("%f", &gas);
    
    
    
    printf("Valor do etanol: ");
    scanf("%f", &eta);
    
    
    
    while(test != 2 || test != 1){     // Faz uma verificacao para saber se o user quer ou nao utilizar gnv
        printf("Vai querer usar gnv?\n");
        
        printf("[1] Sim\n");
        printf("[2] Nao\n");
        
        scanf("%d", &test);
        if (test == 1){     // Caso ele escolha, pega o valor do GNV
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
    
    while (carro != 1 || carro != 2){ // da ao user opcao de escolher dois modelos de carro
        printf("Qual o modelo do seu carro?\n");
        
        printf("[1] Honda Fit\n");
        printf("[2] Fiat Mobi\n");
        scanf("%d", &carro);
        
        if (carro == 1){     // ajusta os valores para um Honda fit seguindo a tabela Inmetro
            eta = eta * 1.85;
            gas = gas * 1.82;
            gnv = gnv * 2.13;
            break;
        }
        
        else if (carro == 2){     // ajusta os valores para um Honda fit seguindo a tabela Inmetro
            eta = eta * 2.16;
            gas = gas * 2.16;
            gnv = gnv * 2.8;
            break;
        }
        
        else{
            printf("Opcao invalida, tente novamente! \n");
        }
        
    }
    
    
    
    printf("\n");
        // Mostra os limites da porcentagem para fazer valer a pena abastecer
    printf("Limite do Etanol -> [0.70]\n");
    
    if (test == 1){
        printf("Limite do GNV -> [0.83]\n");
    }
    
    printf("\n");
    printf("A razao entre o etanol e a gasosa e de: %.2f\n", eta / gas);
    
    if (test == 1){
        printf("A razao entre o gnv e a gasosa e de: %.2f\n", gnv / gas);
    }
    
    printf("\n");
    
    // Faz a comparacao e atribui a uma variavel
    if(eta / gas <= 0.7){

        etaConfirma = 1;
    }

    if(gnv / gas <= 0.83){

        if (test == 1){
            gnvConfirma = 1;
        }
    }

        // Realiza a comparacao dentre as opcoes possives de abastecer
    if(gnvConfirma == 1 && etaConfirma == 1){
        printf("Etanol e Gnv Estao mais baratos, ve legal ai");
    }
    
    else if(gnvConfirma == 1 &&  etaConfirma == 0){
        printf("Use Gnv pq ta mais barato");
    }
    
    else if(gnvConfirma == 0 && etaConfirma == 1){
        printf("Use Etanol pq ta mais barato");
    }
    
    else{
        printf("Use Gasosa pq e o ta mais em conta\n");
    }

    return 0;
}