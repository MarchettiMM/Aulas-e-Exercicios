programa
{
	funcao inicio()
	{
	real p,a,imc


    	escreva("INFORME O PESO (kg): ")
   	leia(p)
   	
   	escreva("INFORME A ALTURA: ")
   	leia(a)

  	 imc=p/(a*a)

   	se(imc<18.5){
    	escreva("Abaixo do peso")
   }
     senao
   	se((imc>=18.5)e(imc<=24.9)){
    	escreva("Peso normal")
   }
   	senao
   	se((imc>=25)e(imc<=29.9)){
    	escreva("Acima do peso")
   }
   	senao
   	se(imc>=30){
     escreva("Obesidade")
   }
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 76; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */