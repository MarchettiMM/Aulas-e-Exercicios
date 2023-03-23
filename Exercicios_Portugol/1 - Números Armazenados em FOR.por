programa
{
	funcao inicio()
	{
		inteiro num[15], cont = 0

		para(cont=0; cont<=14; cont++)
		{
			escreva("Digite o ",cont, "º número: ")
			leia(num[cont])
		}
		escreva("Os números fornecidos são: ")
		para(cont=0; cont<=14; cont++)
		{
			escreva(num[cont],"; ")
		}
	}
}
/* $$$ Portugol Studio $$$
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 235; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */