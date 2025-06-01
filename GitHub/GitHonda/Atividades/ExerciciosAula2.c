#include <stdio.h>

int main(){
    double a, b, media, media_errada, soma, multiplicacao, multiplicacao2;
    scanf("%lf", &a);
    scanf("%lf", &b);
    media = (a*3.5 + b*7.5) / 11; // Aqui ta certo
    media_errada = (a + b) * 11 / 11; // Ta usando os memos valores, mas em ordem diferente, o que muda a conta
    soma = a + b;
    multiplicacao = (a + 10) *b; // Aqui os parenteses influenciam legal
    multiplicacao2 = a + 1 *b;

    printf("MEDIA = %0.5lf\nMEDIA_ERRADA = %05lf\nSOMA = %0.5lf\nMULTIPLICACAO = %0.5lf\nMULTIPLICACAO2 = %0.5lf\n", media, media_errada, soma, multiplicacao, multiplicacao2);

    return 0;
}
// Nao estava na aula, entao imagino que seja isso que voce pediu