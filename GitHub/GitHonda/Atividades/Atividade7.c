#include <stdio.h>
#include <math.h>
int main(){

    
 
    printf("Number of byts in Short Int: %ld\n", sizeof(short int));
    printf("Number of byts in Long Int: %ld\n", sizeof(long int));
    printf("Number of byts in Int: %ld\n", sizeof(int));
    printf("\n");

    printf("Number of byts in Long Float(Double): %ld\n", sizeof(double));
    printf("Number of byts in Float: %ld\n", sizeof(float));
    printf("\n");
    printf("Number of bits in Bool 8");
    printf("\n");
    char nome[] = "tome";
    printf("Tamanho de 'Tome' = %li\n", sizeof(nome));
    printf("\n");
    printf("Number of byts in Signed: %ld \n", sizeof(signed));
    printf("Number of byts in Unsigned: %ld  \n", sizeof(unsigned));
    printf("\n");
    printf("Number of byts in Signed Int: %ld \n", sizeof(signed int));
    printf("Number of byts in Unigned Int: %ld \n", sizeof(unsigned int));
    printf("\n");
    printf("Number of byts in Signed Short Int: %ld \n", sizeof(signed short int));
    printf("Number of byts in Unigned Long Int: %ld \n", sizeof(unsigned long int));
    
    printf("\n");
    printf("\n");
    printf("tudo que for declarado como char tem X bits baseado no tamanho to texto\n");
    printf("tudo que for declarado como short tem %.0lf bits positivos e negativos\n", pow(2, 15)  - 1 );
    printf("tudo que for declarado normalmente tem %.0lf bits positivos e negativos\n", pow(2, 31)  - 1);
    printf("tudo que for declarado como long tem %.0lf bits positivos e negativos\n", pow(2, 63) - 1);
    
    
    printf("\n");
    printf("\n");
    
    short int teste = pow(2,15);
    
    printf("%d", teste);
    
    return 0;
    
    // int tem 4
    // float tem 4 igual int
    // Double por ser um long float tem o dobro
    
    
}