programa
{
	funcao inicio()
	{
		inteiro num[15], cont = 0

		faca
		{
			escreva("Digite o ",cont, "º número: ")
			leia(num[cont])
			cont = cont+1
			
		}enquanto(cont<=14){
			escreva("Os números fornecidos são: ")
			cont = 0
			faca
			{
				escreva(num[cont],"; ")
				cont = cont+1
			}
		}
	}
}
/* $$$ Portugol Studio $$$
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 214; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */