#include <stdio.h>

int main() {
    int soma, num;

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num > 0) {
            for (int i = 0; i <= num; i++) {
                soma += i;
            }
            break;
        }
        printf("opcao invalida, insira um numero positivo\n");
    }
    printf("\n A soma dos numeros e %d", soma);

    return 0;
}