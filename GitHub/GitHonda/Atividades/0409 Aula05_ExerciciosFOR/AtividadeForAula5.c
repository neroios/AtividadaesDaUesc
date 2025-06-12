#include <stdio.h>

// A)

// Varios for de tamanho n e diferentes incrementos e pontos de partida
int main(){
    
    int i;
    for (i = 0; i <= 10000; i++){
        printf("Contagem -> %d\n", i);
    }
    return 0;
}


// B)

int main(){
    
    int i;
    for (i = -10000; i <= 10000; i++){
        printf("Contagem -> %d\n", i);
    }
    
    return 0;
}



// C)

int main(){
    
    int i;
    
    for (i = 0; i <= 10000; i += 2){
        printf("Contagem -> %d\n", i);
    }
    return 0;
}



// D)


int main(){
    
    int  i;
    
    for (i = 1; i <= 10000; i += 2){
        printf("Contagem -> %d\n", i);
    }
    
    return 0;
}




// E)

int main(){
    
    int i;
    
    for(i = -100000; i <= 100000; i+= 3){
        printf("Contagem -> %d\n", i);
    }
    return 0;    
}