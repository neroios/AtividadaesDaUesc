#include <time.h>
#include <stdio.h>
#include <stdlib.h>

// Fazer um imput de quantos tiros vai querer
// Fazer um rand para sortear os tiros e ver quantos estariam dentro do quadrado adicioanando num contos dentro
// Tava no videdo que x^2 + y^2 <= r^2 para saber se esta dentro
// Fazer quantos 4* (caiu fora / quantos no total)
// 1000000000 para 25 segundos

int main() {
    int  lado ;
    double pi, dentro = 0, x, y,raio,tiros, cordX, cordY;

    srand(time(NULL));

    printf("Tamanho do Lado: ");
    scanf("%d", &lado);
    printf("\nQuantos tiros: ");
    scanf("%lf", &tiros);

    clock_t inicio = clock();
    for (int i = 0; i < tiros; i++) {
        x = ((float)rand() / RAND_MAX) * lado - raio ;
        y = ((float)rand() / RAND_MAX) * lado - raio;

        cordX = x*x;
        cordY = y*y;
        raio = lado / 2.0f;

        if (cordX + cordY <= raio*raio){
            dentro++;
        }
    }
    clock_t fim = clock();
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    pi = 4* dentro / tiros;

    printf("Usando o quadrado de lado %d E %.0lf tentativas com %.0lf pontos dentro do circulo\nFoi possivel chegar a essa aproximacao de pi: %f\n", lado, tiros, dentro, pi);
    printf("O programa foi executado em: %.2lf segundos", tempo);
    return 0;
}