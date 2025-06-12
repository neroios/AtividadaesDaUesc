programa
{
		
	funcao inicio()
	{
		// A)
		inteiro i, retorna1 = 0, retorna2 = 0, retorna3 = 0, retorna4 = 0, retorna5 = 0
		
		enquanto (retorna1 == 0){
			para (i = 0; i <= 10000; i++){
				escreva("Contagem1 -> ", i, "\n")
				se (i == 10000){
					retorna1 = 1 
				}
			}
		
		}

		//B)
		enquanto (retorna2 == 0){
			para (i = -10000; i <= 10000; i++){
				escreva("Contagem2 -> ", i, "\n")
				se (i == 10000){
					retorna2 = 1
				}
			}
		}
		
		//C)


		enquanto (retorna3 == 0){
			para (i = 0; i <= 10000; i += 2){
				escreva("Contagem3 -> ", i, "\n")
				se (i == 10000){
					retorna3 = 1
				}
			}
		}
	


		//D)

		enquanto (retorna4 == 0){
			para (i = 1; i <= 10000; i +=2){
				escreva("Contagem4 -> ", i, "\n")
					se (i == 9999){
						retorna4 = 1
						}
				}
			}



		//E)

		enquanto (retorna5 == 0){
			para (i = -10000; i <= 10000; i += 3){
				escreva("Contagem5 -> ", i, "\n")
				se (i == 9998){
					retorna5 = 1
					}
				}
			}

	
	
	
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 929; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */