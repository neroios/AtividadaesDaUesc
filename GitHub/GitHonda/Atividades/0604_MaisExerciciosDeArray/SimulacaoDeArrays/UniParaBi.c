#include <stdio.h>


// Funcao para printar o array
// linha, coluna, contador, coluna, array


/**
 *
 * @param lin
 * @param cont
 * @param col
 * @param meuArray
 */
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
/**
 * @brief indice da linha, indice da coluna, pega linha, pega coluna, array, Funcao para mostrar qual o indice foi escolhido e qual item corresponde
 * @param indice_lin
 * @param indice_col
 * @param pega_lin
 * @param col
 * @param array
 */
void printTarget(int indice_lin, int indice_col, int pega_lin, int col, int array[]) {
	printf("O valor no indice Linha %d e Coluna %d -> %d", pega_lin, indice_col, array[(indice_lin + indice_col - col - 1)]);

}


int main(){
    int lin;
    int col;

	int cont = 0;
	int indice_col;

	printf("Quantas linhas: ");
	scanf("%d", &lin);

	printf("\nQuantas colunas: ");
	scanf("%d", &col);

	int n = lin * col; // Conta para saber o total de itens aqui
	int meuArray[n];

	// Deixa os users escolher qual indice quer pegar
	int pega_lin;
	printf("\nQual linha: ");
	scanf("%d", &pega_lin);
	printf("\nQual coluna: ");
	scanf("%d", &indice_col);



	// Arruma o indice
	int indice_lin = col*pega_lin;

	// Coloca valores dentro do array
    for (int i = 0; i < n; i++){
        meuArray[i] = i;
    }
	printf("\n");

	// Caso o usuario digite um indice fora do limite
	if (pega_lin > lin || pega_lin < 1)
		return 1;

	if (indice_col > col || indice_col < 1)
		return 1;
	printf("\n");


	// linha, coluna, contador, coluna, array
	printaArray(lin, cont, col, meuArray);


	// indice da linha, indice da coluna, pega linha, coluna, array
	printTarget(indice_lin, indice_col, pega_lin, col, meuArray);

	printf("\n");
	return 0;
}
