programa
{
	funcao inicio()
	{
		real produto, quantidade, desconto,m,n
		escreva("Digite o valor do produto: ", "\n")
		leia(produto)
		escreva("Digite a quantidade de produtos: ", "\n")
		leia(quantidade)
		escreva("Digite o desconto: ", "\n")
		leia(desconto)

		m= produto*quantidade
		n=m*desconto

		se((n>1) e (desconto >= 0)){
			escreva("O valor da compra: ",n)}
			
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 385; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */