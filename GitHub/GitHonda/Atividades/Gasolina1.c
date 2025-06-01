#include <stdio.h>

int main(){

    float gas, eta, media, porcent, litros, litrosGas, litrosEta;
    int test = 0;

    printf("Fale o preco da gasoso por L: ");
    scanf("%f", &gas);
    printf("Fale o preco do etanol por L: ");
    scanf("%f", &eta);


    if(eta / gas <= 0.7){

        printf("Use etanol\n");

    }

    else{
        printf("Use Gasosa\n");
    }


    return 0;
}