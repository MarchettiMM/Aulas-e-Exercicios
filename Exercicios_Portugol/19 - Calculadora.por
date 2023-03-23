programa
{
	funcao inicio()
	{
		real n1, n2
		inteiro n

	escreva("\t\tCalculadora\n\n")
	escreva("\t\t1 - Soma de 2 números ('+')\n")
	escreva("\t\t2 - Diferença de 2 números ('-')\n")
	escreva("\t\t3 - Produto de 2 números ('*')\n")
	escreva("\t\t4 - Divisão de 2 números ('/')\n")
	escreva("\t\tEscolha uma opção: ")
	leia(n)

	se(n==1){
		escreva("DIGITE 2 NUMEROS: ")
		leia(n1,n2)

		n1=n1+n2

		escreva("A soma dos 2 numeros, �: ", n1)
		
	}
	se(n==2){
		escreva "DIGITE 2 NÚMEROS: ")
		leia(n1,n2)

		n1=n1-n2

		escreva("A diferença dos dois números, é: ", n1)
	}
	se(n==3){
		escreva("DIGITE 2 NÚMEROS: ")
		leia(n1,n2)

		n1= n1*n2

		escreva("A divisão dos 2 números, é: ", n1)
	}
	se(n==4){
		escreva("DIGITE 2 NÚMEROS: ")
		leia(n1,n2)

		n1=n1/n2

		escreva("A divisão dos 2 números, é: ", n1)
	}
	senao
	se((n>5)ou(n<0))
	escreva("COMANDO INVÁLIDO")
		
		
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 0; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */