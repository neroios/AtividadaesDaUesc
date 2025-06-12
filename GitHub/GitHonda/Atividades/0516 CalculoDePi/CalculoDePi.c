#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int  lado ;
    double pi, dentro = 0, x, y,raio,tentativas, cordX, cordY;

    srand(time(NULL));

    printf("Tamanho do Lado: ");
    scanf("%d", &lado);
    printf("\nQuantos tiros: ");
    scanf("%lf", &tentativas);

    clock_t inicio = clock();
    for (int i = 0; i < tentativas; i++) {   // Dentre o total de tentativas, sao colocados pontos aleatorios dentro de um quadrado
        x = ((float)rand() / RAND_MAX) * lado - raio ; // Gera um numero entre 0 e 1 e depois expande para o intervalo do quadrado
        y = ((float)rand() / RAND_MAX) * lado - raio;  // Gera um numero entre 0 e 1 e depois expande para o intervalo do quadrado

        cordX = x*x;
        cordY = y*y;
        raio = lado / 2.0f;

        if (cordX + cordY <= raio*raio){
            dentro++;   // Se a soma do quadrado dos pontos for menor do que o quadrado do raio, o ponto esta dentro do circulo
        }
    }
    clock_t fim = clock();
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    pi = 4* dentro / tentativas; // faz o calculo do pi

    printf("Usando o quadrado de lado %d E %.0lf tentativas com %.0lf pontos dentro do circulo\nFoi possivel chegar a essa aproximacao de pi: %f\n", lado, tentativas, dentro, pi);
    printf("O programa foi executado em: %.2lf segundos", tempo);
    return 0;
}