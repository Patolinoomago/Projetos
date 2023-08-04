#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main() {

	float raio, area;

	printf("Digite o valor do Raio do Círculo: ");
	scanf("%f", &raio);
	area = M_PI * pow(raio, 2);
	printf("A Área do Raio é igual a %f", area);
	return 0;
}
