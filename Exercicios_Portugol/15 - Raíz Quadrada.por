programa
{
	inclua biblioteca Matematica --> mat
	funcao inicio()
	{
		real numero, raiz

		escreva("Digite um número positivo: ")
		leia(numero)

		se(numero>0){
			raiz = mat.raiz(numero, 2.0)
			escreva("Sua raiz é: ", raiz)
		}senao{
			escreva(">>Número inválido<<")
		}
	}
}
/* $$$ Portugol Studio $$$
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 276; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */