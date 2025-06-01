#include <stdio.h>
#include <stdlib.h>

int mySoma(int a, int b);



int main(int argc, char *argv[]){
    int resp = 1213491;
    printf("%i\n", resp);
    resp = mySoma (atoi(argv[1]), atoi(argv[2]));
    printf("%i\n", resp);
    return 0;
}


int mySoma(int a, int b){
	int resp = 0;
	resp = a + b;
	return resp;
}

