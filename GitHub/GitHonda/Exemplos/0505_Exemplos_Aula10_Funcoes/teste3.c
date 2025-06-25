#include <stdio.h>
#include <stdlib.h>

void mySoma(int a, int b);// funcao para somar 2 numeros

int resp = 1213491;

int main(int argc, char *argv[]){
    
    printf("%i\n", resp); // resp vale um numero gigante
    mySoma (atoi(argv[1]), atoi(argv[2]));
    printf("%i\n", resp); // apos a chamada da funcao vale o valor dela
    return 0;
}


void mySoma(int a, int b){
	resp = a + b;
}

