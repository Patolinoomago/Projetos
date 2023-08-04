#include <stdio.h>
#include <cmath>

int main()
{	
	float hora;
	int Dia;
	int Dias_Horas;
	float salario;

	printf("\nQuanto você ganha por hora? ");
	scanf("%f", &hora);
	printf("\nQuantos dias Você trabahou esse mês? ");
	scanf("%d", &Dia);

	Dias_Horas = Dia * 8;
	salario = Dias_Horas * hora;

	printf("O Seu Salário é no Valor de %2.f", salario);
	return 0;
}
		
