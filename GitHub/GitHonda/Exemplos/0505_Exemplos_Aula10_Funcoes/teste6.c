#include <stdio.h>
#include <stdlib.h>

int mySoma(int a, int b); // funcao para fazer a soma de dois numeros



int main(int argc, char *argv[]){

    if (mySoma (atoi(argv[1]), atoi(argv[2])) <= 100) // Mostra a se a soma e >< que x
    	printf("Menor ou igual a 100\n");
    
    else
    	printf("Maior que 100\n");
    
    
    
   return 0;
}


int mySoma(int a, int b){
	return a + b;
}

