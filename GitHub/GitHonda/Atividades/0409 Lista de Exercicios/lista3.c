#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    c = a + b;
    printf("Soma em Hex -> %x\n", c);
    printf("Soma em Octa -> %o\n", c);

}