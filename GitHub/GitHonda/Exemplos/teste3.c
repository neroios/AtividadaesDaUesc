#include <stdio.h>
#include <stdlib.h>

void mySoma(int a, int b);

int resp = 1213491;

int main(int argc, char *argv[]){
    
    printf("%i\n", resp);
    mySoma (atoi(argv[1]), atoi(argv[2]));
    printf("%i\n", resp);
    return 0;
}


void mySoma(int a, int b){
	resp = a + b;
}

