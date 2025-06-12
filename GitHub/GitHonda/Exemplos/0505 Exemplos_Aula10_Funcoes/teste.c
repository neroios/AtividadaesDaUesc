#include <stdio.h>
#include <stdlib.h>

int localFor(int n){        // Printa cada item separado de 0 ate n-1 numeros
	for (int i = 0; i < n; i++){
    	printf("%i \t", i);
    }
    
    return 99;
}

int main(int argc, char *argv[]){
    
    printf("%i\n", argc);
    if (argc <= 1) {
        printf("Sem argumentos...\n");
        return -1;
    }
    

    
    int tmp = localFor( atoi(argv[1]));
    printf("\n%i\n", tmp);
    

    return 0;
}

