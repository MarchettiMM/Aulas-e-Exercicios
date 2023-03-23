programa
{
	funcao inicio()
	{
		inteiro n1, n2,n3

		escreva("DIGITE 3 NÚMEROS: \n\n")
		leia(n1,n2,n3)

	se((n3>n1)e(n1>n2))
	escreva("ORDEM CRESCENTE: \n", n2,"\n", n1, "\n", n3)

	senao 
	se(n2<n3)
	escreva("ORDEM CRESCENTE: \n\n", n1, "\n", n2, "\n", n3)
	
	senao
	se((n1 > n2)e(n2 > n3))
      escreva("ORDEM CRESCENTE: ", n3,"\n", n2,"\n", n1)
     
     senao  
     se(n3 < n1)
      escreva("ORDEM CRESCENTE: ", n2,"\n", n3,"\n", n1)
     
     senao
     se((n1 < n2) e (n3 < n1))
      escreva("ORDEM CRESCENTE: \n", n3, "\n", n1, "\n", n2)

     senao
     se(n3 < n2)
      escreva("ORDEM CRESCENTE: \n", n1, "\n",  n3,"\n", n2)
}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 653; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */