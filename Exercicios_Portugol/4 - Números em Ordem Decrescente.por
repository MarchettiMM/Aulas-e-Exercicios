programa
{
	funcao inicio()
	{
		inteiro n[5], i, j, aux

		para(i=0; i<=4; i++){
			escreva("Digite um valor: ")
			leia(n[i])
		}
		para(i=0; i<=4; i++){
			para(j=i; j<=4; j++){
				se(n[j] > n[i]){
					aux = n[j]
					n[j] = n[i]
					n[i] = aux
				}
			}
		}
		para(i=0; i<=4; i++){
			escreva(n[i], "  ")
		}
	}
}
/* $$$ Portugol Studio $$$
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 194; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */