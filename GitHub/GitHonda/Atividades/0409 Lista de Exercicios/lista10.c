#include <math.h>
#include <stdio.h>

int main(){
    float lado, area, perimetro, diag;

    printf("Digite o valor do lado: ");
    scanf("%f", &lado);

    area = (lado*lado);
    perimetro = (lado*4);
    diag = (lado*sqrt(2));
    printf("O valor da area do lado: %.2f \n", area);
    printf("O perimetro do lado: %.2f \n", perimetro);
    printf("O diagonal do lado: %.2f \n", diag);
}