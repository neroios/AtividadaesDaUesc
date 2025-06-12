#include <stdio.h>
#include <stdbool.h>
// X reais

// auxilio alimentacao 464
// vale transporte 6%

// Qual o salario base e fazer todas as receitas e despesas

// Nunca arredondar pra baixo e NUNCA menor que um salario minimo

int main(){
    
    float base_irpf, salario_liquido, inss, irpf, c_sindicato, salario_base, vt, va, base_calc;
    
    int afirmacao;
    
    printf("Escreva o seu salario sem acrescimos: ");
    salario_base = 4500;
    scanf("%f", &salario_base);
    vt = salario_base * 6 / 100; //vale transporte
    va = 464; // vale alimentacao
    

    // perimite o usuario falar se tem ou nao o vale transporte
    while(true){
         afirmacao = 0;
        printf("\nQuer receber o vale transporte? \n");
        printf("[1] Para sim\n");
        printf("[2] Para nao\n");
        scanf("%d", &afirmacao);
        if (afirmacao == 1){
            break;
        }    
        if (afirmacao == 2){
            vt = 0;
            break;
        }
        else{
        printf("Opcao inválida! Tente novamente\n");
        }
    }
    
    // sindicato com opção para o usuário contribuir ou não
    while (true){
        c_sindicato = 0;
        afirmacao = 0;
        printf("\nGostaria de contribuir com o sindicato?\n");
        printf("[1] Para sim\n");
        printf("[2] Para nao\n");
        scanf("%d", &afirmacao);
        if (afirmacao == 1){
            c_sindicato = salario_base / 30;
            break;
        }    
        if (afirmacao == 2){
            break;
        }
        else{
        printf("Opcao inválida! Tente novamente\n");
        }
    }  
 
 
 
    salario_liquido = 0;
 
    printf("\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=");
    printf("\n");
    
    
    // calculo do Inss
    if (salario_base <= 1518){
        inss = salario_base * 7.5 / 100;
    }
    
    
    if (salario_base > 1518 && salario_base <= 2793.88){
        inss = (salario_base * 9 / 100) - 22.77;
    }
    
    
    if (salario_base > 2793.88 && salario_base <= 4190.83){
        inss = (salario_base * 12 / 100) - 106.59;
    }
    
    if (salario_base > 4190.86){
        inss = (salario_base * 14 / 100) - 190.40;
    }
   
   // calculo do Irpf
   
   base_irpf = salario_base - inss;
   
   if (base_irpf > 2259.80 && base_irpf <= 2826.65){
        irpf =  (base_irpf* 7.5 / 100) - 169.44 ;
   }
   
   if (base_irpf > 2826.65 && base_irpf <= 3751.05){
       irpf = (base_irpf* 15 / 100) - 381.44;
   }
   
   if (base_irpf > 3751.05 && base_irpf <= 4664.68){
       irpf = (base_irpf* 22.5 / 100) - 662.77;
   }
    
   if (base_irpf > 4664.68){
       irpf = (base_irpf * 27.5 / 100) - 896.00;
   }


    //Calculo final
  salario_liquido = salario_base - vt - inss - irpf - c_sindicato;
  if(salario_liquido < 1518.00){
      salario_liquido = 1518;
  }
    
    
    
    printf("Salario Bruto: %.2f\n", salario_base);
    printf("Vale Alimentacao em forma de cartao: %.2f\n", va);
    
    if (vt == 0){
        printf("Voce nao recebe Vale Transporte\n");
    }
    else{
        printf("Vale Transporte: %.2f\n", vt);
    }
    
    printf("Inss: %.2f\n", inss);
    printf("irpf: %.2f\n", irpf);
    
    if (c_sindicato == 0){
        printf("Voce Nao contribui para o Sindicato! \n");
    }
    else{
    printf("A sua contribuicao com o Sindicato: %.2f\n", c_sindicato);
    }
    
    
    printf("Salario liquido: %.2f\n", salario_liquido);
    return 0;
}