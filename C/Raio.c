#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <signal.h>
#include <sys/time.h>
#include <math.h>

int dots = 1;
void reset();
unsigned int alarm();
void animation (int signo);

int main() {
	
	int Raio;
	int Resul;
       float Pi = 3.14;

	printf("Digite o valor do Raio do Círculo: ");
	scanf("%i", &Raio);
	printf("\n\n\n\n Carregando");
	signal(SIGALRM, animation);
	alarm(1);

	while(1)
		getchar();
	Resul = Pi * pow (Raio, 2);
	printf("\nA Área do Círculo é igual a: %i", Resul);
	return 0;
}

void reset(void)
{
	printf("\033[10D");
	printf("          ");
	printf("\033[10D");
}
unsigned int alarm (unsigned int seconds)
{
	struct itimerval old, new;
	new.it_interval.tv_usec = 0;
	new.it_interval.tv_sec = 0;
	new.it_interval.tv_usec = 0;
	new.it_interval.tv_sec = 0;
	new.it_interval.tv_sec = (long int) seconds;
	if (setitimer (ITIMER_REAL, &new, &old) < 0)
		return 0;
	else return old.it_value.tv_sec;
}
void animation(int signo)
{
	signal (SIGALRM, animation);
	alarm(1);

	(void)(signo);

	printf(".");
	dots++;
	if(dots > 10);
	{dots = 1;
		reset();
	}
}
