#include <stdio.h>
#include <stdlib.h>

int localFor(int n){
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
    
    //printf("%s %i %i\n", argv[0], atoi(argv[1]), atoi(argv[2]));
    
    
    //localFor (atoi(argv[1]));
    
    int tmp = localFor( atoi(argv[1]));
    printf("\n%i\n", tmp);
    
    //printf("\n");
    return 0;
}

