programa
{
	funcao inicio()
	{
		real salario, emprestimo, porcento

		escreva("DIGITE O SALARIO: ")
		leia(salario)

		escreva("DIGITE O VALOR DA PARCELA DO EMPRESTIMO: ")
		leia(emprestimo)

		porcento=emprestimo*100/salario

		se(porcento<30 ){
		escreva("Emprestimo concedido.")
		}
		senao 
		escreva("Emprestimo não concedido")
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