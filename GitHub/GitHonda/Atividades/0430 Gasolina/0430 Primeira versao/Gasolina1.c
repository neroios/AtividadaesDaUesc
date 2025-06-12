#include <stdio.h>

int main(){

    float gas, eta;

    printf("Fale o preco da gasoso por L: ");
    scanf("%f", &gas);
    printf("Fale o preco do etanol por L: ");
    scanf("%f", &eta);


    if(eta / gas <= 0.7){ // caso esse calculo seja menor ou igual a porcentagem e mais vantajoso utilizar etanol

        printf("Use etanol\n");

    }

    else{
        printf("Use Gasosa\n");
    }


    return 0;
}