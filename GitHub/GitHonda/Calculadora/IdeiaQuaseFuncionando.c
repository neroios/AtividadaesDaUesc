#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    float resp = 0;
    int sum = 0, sub = 0, multi = 0, quo = 0;

    //Aqui e so pra contar quantos operadores tem

    printf("arg: %d\n", argc);
    if (argc > 3) {
        for (int i = 1; i < argc; i++) {
            if (strcmp(argv[i], "+") == 0) {
                sum++;
            } else if (strcmp(argv[i], "-") == 0) {
                sub++;
            } else if (strcmp(argv[i], "x") == 0 || strcmp(argv[i], "X") == 0) {
                multi++;
            } else if (strcmp(argv[i], "/") == 0) {
                quo++;
            }
        }

        printf("\nsum %d\nsub %d\nmulti %d\nquo %d\n", sum, sub, multi, quo);

        // Vai passar lendo a lista toda e skipando o que for NULL, ja que esses ja foram usados
        for (int i = 1; i < argc; i++) {
            if (argv[i] == NULL)
                continue;
            printf("\n%f", resp);

            //Aqui checa a multiplicacao, realiza a conta, guarda na resposta e deixa o operando e os 2 numeros inutilizaveis
            if (strcmp(argv[i], "x") == 0 || strcmp(argv[i], "X") == 0) {
                resp += atof(argv[i - 1]) * atof(argv[i + 1]);
                argv[i - 1] = NULL;
                argv[i] = NULL;
                argv[i + 1] = NULL;
            }

            //Igual em cima, mas estava testando umas ideias mas acabou que resolvou um problema e criou outro
            else if (strcmp(argv[i], "/") == 0) {
                // if (resp == 0 || quo > 1) {
                    resp += atof(argv[i - 1]) / atof(argv[i + 1]);
                    quo--;
                // }
                // else if (quo == 1) {
                //     resp = resp / atof(argv[i + 1]);
                // }
                argv[i - 1] = NULL;
                argv[i] = NULL;
                argv[i + 1] = NULL;
            }
        }

        //Aqui e a parte da soma e subtracao
        for (int i = 1; i < argc; i++) {
            if (argv[i] == NULL)
                continue;
            printf("\n%f", resp);

            if (strcmp(argv[i], "+") == 0) {
                resp += atof(argv[i - 1]) + atof(argv[i + 1]);
                argv[i - 1] = NULL;
                argv[i] = NULL;
                argv[i + 1] = NULL;
            } else if (strcmp(argv[i], "-") == 0) {
                resp += atof(argv[i - 1]) - atof(argv[i + 1]);
                argv[i - 1] = NULL;
                argv[i] = NULL;
                argv[i + 1] = NULL;
            }
        }


        printf("\nresp: %.2f\n", resp);
        return 0;

    } else {
        printf("Operacao invalida, tente novamente!\n");
    }
}
