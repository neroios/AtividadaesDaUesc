#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

int main(){

    int tira_espacos = 0;
    char ch[100];
    
    // Receber uma string
    printf("Digite seu nome: ");
    gets(ch);

    // Pega a quantidade de espacos e subtrai posteriormente
    for(int i = 0; i < strlen(ch); i++) {
        if (isspace(ch[i])) {
            tira_espacos++;
        }
    }

    // Mostrar o tamanho dela
    printf("\nTamanho -> %d\n", strlen(ch) - tira_espacos);


    // Apresentando na tela
    printf("\n\nSeu nome -> %s\n", ch);


    // Palavras individualmente
    for(int i = 0; i < strlen(ch); i++) {
        if (isspace(ch[i])) // Se for espaco, quebra a linha
            printf("\n");
        else
        printf("%c", ch[i]); // Se nao for imprime
    }


    //string invertida

    // Imprime os caracteres de tras para frente
    printf("\n\nString invertida -> ");
    for (int i = strlen(ch); i >= 0; i--) {
        printf("%c", ch[i]);
    }

    // string na vertical

    // Imprime o caracter e quebre linha
    printf("\n\nString na vertical ->\n");
    for (int i = 0; i < strlen(ch); i++) {
        printf("%c\n", ch[i]);
    }


    return 0;
}
