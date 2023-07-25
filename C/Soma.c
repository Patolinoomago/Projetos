#include <stdio.h>
int main (void){
	int A,B;
	int resultado;
	
	printf("Digite um valor: "); //Imprime o Texto na Tela//
	scanf("%d", &A); //Essa Linha pega o valor inserido pelo Usuário e atribui a variável A//
	printf("Digite outro valor: "); //Imprime o texto na Tela//
	scanf("%d", &B); //Pega o Valor digitado pelo Usuário e atribui a Variável B//

	resultado = A + B; //A variável resultado pega o dois valores e soma//
	printf("O valor da soma entre os dois números é igual a: " "%d\n", resultado); //Imprime o valor da variável resultado//
	return 0; //esse retorno mostra que não teve erro//
}

//OBS: toda vez que tiver um cálculo entre Variáveis assim, sempre lembrar de colocar o "&" na Variável que o valor vai ser atribuido//
