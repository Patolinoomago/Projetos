#include <stdio.h> 
#include <stdlib.h>
int main(void) {
	float Primeiro_Bimestre; //Criando uma variável para a nota do Primeiro Bimestre//
	float Segundo_Bimestre; //Criando uma variável para a nota do Segudno Bimestre//
	float Terceiro_Bimestre; //Criando uma variável para a nota do Terceiro Bimestre//
	float Quarto_Bimestre; //Criando uma Variável para a nota do Quarto Bimestre//
	char Nome_Aluno [30]; //Criando uma Variável para o Nome do Aluno//
	float Resul; //Criando uma Variável para o Resultado//
	

	printf("Nome do Aluno: ");
	scanf("%s", &Nome_Aluno);
	printf("Nota do Primeiro Bimestre: "); //Pede a nota do Primeiro Bimestre//
	scanf("%f%", &Primeiro_Bimestre); //Armazena o valor Digitado Anteriormente e Guarda na Variável "Primeiro_Bimestre"//
	printf("Nota do Segundo Bimestre: "); //Pede a nota do Segundo Bimestre//
	scanf("%f%", &Segundo_Bimestre); //Armazena o valor Digitado Anteriormente e Guarda na Variável "Segundo_Bimestre"//
	printf("Nota do Terceiro Bimestre: "); //Pede a nota do Terceiro Bimestre//
	scanf("%f", &Terceiro_Bimestre); //Armazena o Valor Digitado Anteriormente e Guarda na Variável "Terceiro_Bimestre"//
	printf("Nota do Quarto Bimestre: "); //Pede a nota do Quarto Bimestre//
	scanf("%f", &Quarto_Bimestre); //Armazena o Valor Digitado Anteriormente e Guarda na Variável "Quarto_Bimestre"//

	Resul = (Primeiro_Bimestre + Segundo_Bimestre + Terceiro_Bimestre + Quarto_Bimestre) / 4; //Soma as Notas e Divide pela Quantidade de Bimestres

	printf("\nA Média Anual do Aluno %s é: %.1f", Nome_Aluno, Resul); //Média Final do Aluno//
	if (Resul >= 6) {
		printf("\nStatus: Aprovado");
	}
	else {
		printf("\nStatus: Reprovado");
	}
	return 0;
}

