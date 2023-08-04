#include <stdio.h>
#include <cmath>

int main(){
	
	float lado;
	float Resul;
	float Dobro;

	printf("Valor do Lado do Quadrado: ");
	scanf("%f", &lado);

	Resul = pow(lado, 2);
	Dobro = Resul * 2;

	printf("\nO Dobro da área do Lado de um Quadrado de %2.f é %2.f", lado, Dobro);
	return 0;
}	


