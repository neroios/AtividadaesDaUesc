// Simular Arrays bidimensionais utilizando arrays uni dimensionais

// Fazer o mesmo em 3 dimensoes

// Ordenacao -> Gerar valores randomicos e depois print ordenando e faca uma medida do tempo
// Tamanho do vetor N (10 por exemplo) e vai escalando (10 -> 100 -> 1000) Comforme o array cresce
// O tempo tambem cresce

// Multiplicacao de Matrizes para matrizes 2D e 3D
//  Usando arrays no lugar de 2D e 3D tambem

#include <stdio.h>

int main(){
    int col = 10;
    int lin = 10;
	int n = lin * col;
	int meuArray[n];
	int cont = 0;
  
    for (int i = 0; i < n; i++){
        meuArray[i] = i;
    }
        for(int j = 0; j < n/col; j++){
		    for (int i = cont; i < cont + col; i++) {
                    printf("%d ", meuArray[i]);
            }
            cont += col;
            printf("\n");
        }
	printf("\n");
	return 0;
}
