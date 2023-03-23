programa
{
	funcao inicio()
	{
		real a,s,m,h

		escreva("INFORME SUA ALTURA: ")
		leia(a)

		escreva("SE FOR MULHER, DIGITE 1; SE FOR HOMEM, DIGITE 2: ")
		leia(s)

		h=(72.7*a)/58
          m=(62.1*a)/44.7

          se(s==1){
          escreva("O PESO IDEAL É: ", m)
          }

          se(s==2){
          escreva("O PESO IDEAL É: ", h)
          }
         
          
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 371; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */