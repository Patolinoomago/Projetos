#include <stdio.h>
int main (){
	int idade, ano;
	float altura;
	char nome[60];
	printf("Digite seu nome: "); //Mensagem ao Usuário//
	scanf("%s", nome); //Leitura do nome//
	printf("Digite sua Idade: "); //Mensagem ao Usuário//
	scanf("%d", &idade); //Leitura da Idade// 
	printf("Digite a altura: "); //Mensagem ao Usuário//
	scanf("%f", &altura); //Leitura da Altura// 
	
	//Processamento//

	ano = 2023 - idade; //Cálculo do ano do Nascimento//
	
	//Saída//

	printf("\nO nome é: %s", nome);
	printf("\nA Altura é: %f", altura);
	printf("\nA idade é: %d", idade);
	printf("\nO Ano de Nascimento é: %d", ano);
	return 0;
}
