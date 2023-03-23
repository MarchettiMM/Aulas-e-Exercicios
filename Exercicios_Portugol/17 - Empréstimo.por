programa
{
	funcao inicio()
	{
		real salario, emprestimo, porcento

		escreva("Digite o salário: ")
		leia(salario)

		escreva("Digite o valor da parcela do empréstimo: ")
		leia(emprestimo)

		porcento = emprestimo*100/salario

		se(porcento < 30 ){
			escreva("Empréstimo concedido.")
		}senao{
			escreva("Empréstimo não concedido")
		}
	}
}
/* $$$ Portugol Studio $$$
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 171; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */