programa
{
	funcao inicio()
	{
		inteiro at, dn

		escreva("Digite o ano atual: ")
		leia(at)

		escreva("Digite o ano de seu aniversário: ")
		leia(dn)

		at = at-dn

		se(at<=15){
			escreva("Infantil")
		}senao{
			se((at==16) ou (at==17)){
				escreva("Juvenil")
			}senao{
				se((at>=20) ou (at<=23)){
					escreva("Sub-23")
				}senao{
					se(at>=24){
						escreva("Sênior")
					}
				}
			}
		}
	}
}
/* $$$ Portugol Studio $$$
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 297; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */