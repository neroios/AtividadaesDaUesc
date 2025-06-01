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
    while(true){
        printf("Escreva o seu salario sem acrescimos: ");
        salario_base = 0;
        scanf("%f", &salario_base);
        if (salario_base < 1518){
            printf("Valor abaixo de um Salario minimo!\n");
        }
        else{
            break;
        }
    }
    
    
    
    
    
    vt = salario_base * 6 / 100; //vale transporte
    va = 464; // vale alimentacao
    
    
    while(true){
         afirmacao = 0;
        printf("\nQuer receber o vale transporte? \n");
        printf("[1] Para sim\n");
        printf("[2] Para não\n");
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
        printf("[2] Para não\n");
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
    
    
    // Inss
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
   
   // irpf
   
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
    
    printf("\n");
    
    printf("Salario liquido: %.2f\n", salario_liquido);

    printf("\n");
    printf(" =-=-=--=-=-=-=-=-=-=-=-=-= Parte da Empresa pro funcionario -=-=-=-=-=-=--=-=-=-=-=-");
    printf("\n");

// =-=-=--=-=-=-=-=-=-=-=-=-= Parte da Empresa pro funcionario -=-=-=-=-=-=--=-=-=-=-=-
// Inss Patronal -> 20% do salario bruto
// RAT -> 1 a 3% do salario a depender do risco (vamos assumir 2)
// FAP -> Multiplica o Rat entre 0.5 e 2 com base no historico da empresa (Vamos assumir 0.8) = 1.6%
// FGTS -> 8% do salario bruto
// 13° salario -> 1/12 do salario bruto
// Ferias + 1/3 constitucional -> 11.11%
// Multa de 40% FGTS por recisão -> 3.2% algumas empresas preferem fazer 3.2 ao mes pra n tomar susto
// Vale alimentacão -> 464


    float Inss_Patronal, rat, fap, fgts, decimo13, ferias, multa_fgts, gastos_totais, empresa;
    
    printf("Valor bruto recebido pela empresa anualmente. Ex [180000]: ");
    scanf("%f", &empresa); 
    
    
    
    
    
    Inss_Patronal = salario_base * 0.2;
    rat = salario_base * 0.02;
    fap = salario_base * 0.016;
    fgts = salario_base * 0.08;
    decimo13 = salario_base * 0.0833;
    ferias = salario_base * 0.1111;
    multa_fgts = salario_base * 0.032;
    gastos_totais = salario_base + Inss_Patronal + rat + fap + fgts + decimo13 + ferias + multa_fgts + va;
    printf("Inss Patronal: %.2f\n", Inss_Patronal);
    printf("Riscos Ambientais de Trabalho: %.2f\n", rat);
    printf("Fatores Acidentario de Prevencao: %.2f\n", fap);
    printf("Fgts: %.2f\n", fgts);
    printf("Decimo Terceiro Salario: %.2f\n", decimo13);
    printf("Ferias e 1/3 Condicional: %.2f\n", ferias);
    printf("Multa de FGTS: %.2f\n", multa_fgts);
    printf("Vale alimentacao condedido ao funcionario: %.2f\n", va);
    printf("\n");
    printf("Total de gastos mensais com o funcionario: %.2f\n", gastos_totais);
    
    printf("\n");
    printf(" =-=-=--=-=-=-=-=-=-=-=-=-= Parte da Empresa e suas taxas -=-=-=-=-=-=--=-=-=-=-=-");
    printf("\n");


// =-=-=--=-=-=-=-=-=-=-=-=-= Parte da Empresa e suas taxas -=-=-=-=-=-=--=-=-=-=-=-
// Simples Nacional (Ja incluem o Abaixo)
        // ISS -> Varia entre 2 e 5 mas em ilhéus é 5
        // ICMS -> Imposto sobre Circulação de Mercadorias e Serviços 20.5%

    float simples_nacional;


    // Simples nacional considerando a empresa de comercio (uma loja em geral)
    if(empresa <= 180000){
        simples_nacional = empresa * 0.04;
    }
    
    if (empresa > 180000 && empresa <= 360000){
        simples_nacional = (empresa * 0.073) - 5940;
    }
    
    if (empresa > 360000 && empresa <= 720000){
        simples_nacional = (empresa * 0.095) - 13860;
    }
    
    if (empresa > 720000 && empresa <= 1800000){
        simples_nacional = (empresa * 0.107) - 22500;
    }
    
    if (empresa > 1800000 && empresa <= 3600000){
        simples_nacional = (empresa * 0.143) - 87300;
    }
    
    if (empresa > 3600000 && empresa <= 4800000){
        simples_nacional = (empresa * 0.19) - 378000;
    }
    ;
    printf("Simples Nacional: %.2f\n", simples_nacional);
    printf("    Aqui ja inclusos o ISS e o ICMS");
    

    
    return 0;

}