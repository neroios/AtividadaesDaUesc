#include <limits.h>
#include <stdio.h>

int main() {
    unsigned int num;

    printf("Digite um numero: ");
    scanf("%u", &num);

    (num < UINT_MAX) ? printf("este valor pertence ao intervalo dos int") : printf("e maior que um int");

    return 0;
}