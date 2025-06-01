#include <stdio.h>
#include <stdlib.h>

void mySoma(int a, int b){
	int resp = 0;
	resp = a + b;
	printf("%i\n", resp);
}


int main(int argc, char *argv[]){
    
    mySoma (atoi(argv[1]), atoi(argv[2]));
    return 0;
    
}

