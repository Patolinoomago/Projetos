#include <stdio.h>

int main() 
{
	float metros, centimetros;
	printf("Digite a medida em Metros: ");
	scanf("%f", &metros);
	centimetros = metros * 100;
	printf("%2.fm correspondem a %2.fcm", metros, centimetros);
	return 0;
}
