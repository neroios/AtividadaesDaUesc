// Simular Arrays bidimensionais utilizando arrays uni dimensionais

// Fazer o mesmo em 3 dimensoes

// Ordenacao -> Gerar valores randomicos e depois print ordenando e faca uma medida do tempo
// Tamanho do vetor N (10 por exemplo) e vai escalando (10 -> 100 -> 1000) Comforme o array cresce
// O tempo tambem cresce

// Multiplicacao de Matrizes para matrizes 2D e 3D
//  Usando arrays no lugar de 2D e 3D tambem

#include <stdio.h>


// Funcao para printar o array
// linha, coluna, contador, coluna, array
void printaArray(int lin, int cont, int col, int meuArray[]) {

	for(int j = 0; j < lin; j++){
		for (int i = cont; i < cont + col; i++) {
			printf("%d ", meuArray[i]);
		}
		cont += col;
		printf("\n");
	}
}


	// Funcao para mostrar qual o indice foi escolhido e qual item corresponde
	// indice da linha, indice da coluna, pega linha, pega coluna, array
void printTarget(int indice_lin, int indice_col, int pega_lin, int col, int array[]) {
	printf("O valor no indice Linha %d e Coluna %d -> %d", pega_lin, indice_col, array[(indice_lin + indice_col - col - 1)]);

}

int main(){
    int lin;
    int col;

	int n = lin * col; // Conta para saber o total de itens aqui
	int meuArray[n];
	int cont = 0;
	int indice_col;

	printf("Quantas linhas: ");
	scanf("%d", &lin);

	printf("\nQuantas colunas: ");
	scanf("%d", &col);



	int pega_lin;
	printf("Qual linha: ");
	scanf("%d", &pega_lin);
	printf("\nQual coluna: ");
	scanf("%d", &indice_col);


	// Linha 3 coluna 2 -> 11
	// Fazer um caca indice, pegando linha e coluna desejada

	// Arruma o indice
	int indice_lin = col*pega_lin;

	// Coloca indices dentro do array
    for (int i = 0; i < n; i++){
        meuArray[i] = i;
    }


	// Caso o usuario digite um indice fora do limite
	if (pega_lin > lin)
		return 1;

	if (indice_col > col)
		return 1;

	// linha, coluna, contador, coluna, array
	printaArray(lin, cont, col, meuArray);


	// indice da linha, indice da coluna, pega linha, coluna, array
	printTarget(indice_lin, indice_col, pega_lin, col, meuArray);

	printf("\n");
	return 0;
}
