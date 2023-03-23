programa
{
	funcao inicio()
	{
		real a,s,m,h

		escreva("Informe sua altura: ")
		leia(a)

		escreva("Se for Mulher, digite 1; Se for Homem, digite 2: ")
		leia(s)

		h = (72.7*a)/58
        m = (62.1*a)/44.7

        se(s==1){
        	escreva("O peso ideal é: ", m)
        }senao{
	        se(s==2){
    		    escreva("O peso ideal é: ", h)
        	}
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