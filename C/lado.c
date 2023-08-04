#include <stdio.h>
#include <cmath>

int main(){
	
	float lado_a;
	float lado_b;
	int Resul;
	float Dobro;

	printf("Valor do Lado A: ");
	scanf("%f", &lado_a);
	printf("Valor do Lado B: ");
	scanf("%f", &lado_b);

	Resul = lado_a * lado_b;
	Dobro = pow(Resul, 2);

	printf("\nO Dobro da área é %1.f", Dobro);
	return 0;
}	


