#include <limits.h>
#include <stdint.h>
#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    (num < INT16_MAX) ? printf("este valor pertence ao intervalo dos short int") : printf("e maior que um short int");

    return 0;
}