programa
{
	funcao inicio()
	{
		real comprimento, largura, grama,m,n
		
		escreva("Digite o comprimento do terreno: ")
		leia(comprimento)
		escreva("Digite a largura do terreno: ")
		leia(largura)
		escreva("Digite o preço da grama: ")
		leia(grama)
		
		m=largura*comprimento
		n=m*grama

		escreva("O preço da grama será: ", n)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 331; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */