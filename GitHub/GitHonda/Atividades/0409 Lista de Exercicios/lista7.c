#include <stdio.h>

int main() {
    int num;
    printf("digita ai: ");
    scanf("%d", &num);

    num = num % 2;

    // while (num > 6) {
    //     num = num % 2;
    // }

    printf("Resto de divisao -> %d", num);
    return 0;
}