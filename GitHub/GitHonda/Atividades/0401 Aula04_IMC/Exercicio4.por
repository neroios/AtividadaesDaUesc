programa
{
	
	funcao inicio()
	{
		real peso = .0, altura = .0, imc = .0

		escreva("Entre com seu peso ")
		leia(peso)

		escreva("Entre com sua altura em metros ")
		leia(altura)

		escreva("Seu peso = ", peso, " e sua altura = ", altura, "\n")

		imc = peso / (altura * altura)
		escreva("Seu IMC = ", imc, "\n")


		se ( imc < 18.5){
			escreva("Classificacao IMC = Magreza\n")
		}
		

		senao se (imc >= 18.5 e imc < 25){
			escreva("Classificacao IMC = Normal\n")
			}

		senao se (imc >= 25 e imc < 30){
			escreva("Classificacao IMC = Sobrepeso\n")
			}

		senao se (imc >= 30 e imc < 40){
        escreva("Classificacao IMC = Obesidade\n")
   			}


		senao{
        escreva("Classificacao IMC = Obesidade Grave\n")
    			}


		
		
		 
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 250; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */