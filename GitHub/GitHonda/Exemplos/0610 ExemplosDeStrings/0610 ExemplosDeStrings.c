#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){

    int tam_array = 100;

    //char name[tam_array];   // Para strings

    char name[] = {'j','a','o',' ', 'd','a',' ','s','i','l','v','a'};
    //gets(name);   // Coloca dentro da string


    int total;
    // total = strlen(name) - 1; // Pega o total de caracteres incluindo o espaco mas nao o /0 no final
     total = strlen(name) - 2; // Aqui caso seja declarado como um array de caracteres e nao uma string diretamente

    // Printa o nome em letras minusculas
    printf("\nYour name in lowercase -> ");
    for(int i = 0; i <= total; i++){
        printf("%c", tolower(name[i]));
    }


    // Printa o nome em letras MAIUSCULAS
    printf("\n\nYour name in UPPERCASE -> ");
    for(int i = 0; i <= total; i++){
        printf("%c", toupper(name[i]));
    }



    int cont = 0;
    // primeira letra maiuscula
   printf("\n\nThe first letters uppercase after a space -> ");
   for(int i = 0; i < total + 1; i++){
       if(i == 0){      // Primeira letra e sempre maiuscula
           printf("%c", toupper(name[i]));
       }
       else if(isspace(name[i])){ // Caso tenha um espaco, ele vai quardar essa informacao e vai printar um espaco
           cont++;
           printf(" ");
       }

       else if(cont == 1){ // aqui e usado a informacao do espaco e coloca o caractere maiusculo e depois reinicia o contador
           printf("%c", toupper(name[i]));
           cont = 0;
       }
       else  // Caso nada acima seja feito, ele so imprime o caractere
            printf("%c", name[i]);
   }




    int placehoder;

    // sort the name
    for(int i = 0; i < total ; i++){
        for(int j = 0; j < total - i; j++){
            if (name[j] > name[j+1]){
                placehoder = name[j];
                name[j] = name[j + 1];
                name[j + 1] = placehoder;
            }
        }
    }

    // Name sorted in lowercase
    printf("\n\nYour name in lowercase Alphabethycaly -> ");
    for(int i = 0; i <= total; i++){
        if(isspace(name[i]))
             continue;
        else
        printf("%c", tolower(name[i]));
    }

    // Name sorted in UPPERCASE
    printf("\n\nYour name in UPPERCASE Alphabethycaly -> ");
    for(int i = 0; i <= total; i++){
        if(isspace(name[i]))
             continue;
        else
        printf("%c", toupper(name[i]));
    }

    return 0;
}