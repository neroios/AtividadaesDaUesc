#include <stdio.h>
#include <stdlib.h>

int mySoma(int a, int b);



int main(int argc, char *argv[]){

    printf("%i\n", mySoma (atoi(argv[1]), atoi(argv[2])));
    
   return 0;
}


int mySoma(int a, int b){
	return a + b;
}

