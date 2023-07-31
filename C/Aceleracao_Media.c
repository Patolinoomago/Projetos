#include <stdio.h>
	int main() {
		int Deslocamento, Tempo, Acele_Med;

		printf("Valor do Deslocamento: ");
		scanf("%e", &Deslocamento);
		printf("Valor do Tempo:  ");
		scanf("%e", &Tempo);

		Acele_Med = Deslocamento / Tempo;
		printf("O Valor da Aceleração Média é: %e\n Km", Acele_Med);
		return 0;
}

