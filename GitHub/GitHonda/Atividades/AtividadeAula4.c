#include <stdio.h>

int main(){
    
    float peso = .0, altura = .0;
    
    printf("Entre com o seu peso: ");
    scanf("%f", &peso);
    
    printf("Entre com o sua altura em metros: ");
    scanf("%f", &altura);
    
    printf("Seu peso = %3.2f e sua altura = %3.2f\n", peso, altura);
    
    float imc = .0;
    imc = peso / (altura * altura);
    printf("Seu IMC = %3.2f\n", imc);
    
    if ( imc < 18.5){
        printf("Classificacao IMC = Magreza\n");
    }
    else if (imc >= 18.5 && imc < 25){
        printf("Classificacao IMC = Normal\n");
    }
    else if (imc >= 25 && imc < 30) {
        printf("Classificacao IMC = Sobrepeso\n");
    }
    else if (imc >= 30 && imc < 40){
        printf("Classificacao IMC = Obesidade\n");
    }
    else{
        printf("Classificacao IMC = Obesidade Grave\n");
    }
    return 0;    

}