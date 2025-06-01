programa
{
	
	funcao inicio()
	{
		inteiro b1, b2, b3, c, blocos
		
		blocos = 7
		b1 = 3
		b2 = 2
		b3 = 3





		
		para (c = 0; c < 7; c++){
			//escreva("\n", c)

			se (c % 2 == 0)
				escreva("Bloco 1 -> Torre ", b1, "\n")
				b1 = b1 + 1
				se (b1 == 4)
					b1 = 1


			se ((c - 1) % 4 == 0)
				escreva ("Bloco 2 -> Torre " , b2, "\n")
				b2 = b2 - 1
				se (b2 == 0)
					b2 = 3


			se ((c + 5) % 8 == 0)
				escreva ("Bloco 3 -> Torre ", b3, "\n")
				b3 = b3 + 1
				se (b3 == 4)
					b3 = 1
		}



		
		
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 136; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */