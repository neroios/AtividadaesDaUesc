#include <stdio.h>
#include <ctype.h>

int main() {
    char ch1, ch2 = "Q", ch3;

    scanf("%c", &ch1);
    //printf("%c\n", ch1);
    (isupper(ch1)) ? printf("O caractere esta em MAIUSCULO\n") :
    (isdigit(ch1)) ? printf("O caractere e um numero\n") :
    (isalpha(ch1)) ? printf("O caractere esta em minusculo\n") :
    printf("O caractere e outro\n");

    printf("\nNa base Decimal -> 81\n");
    printf("Na base Octa -> 121\n");
    printf("Na base Hexa -> 51\n");
    printf("O caractere em si -> Q\n");





    return 0;
}