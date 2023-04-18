#include <stdio.h>
//Leggere in input da tastiera due numeri maggiori di 0 e farne la somma. 

int maggZero(int verificato)
{
	if (verificato > 0)
		return verificato;
	else
		return -1;
}

int calcolo(int n1, int n2)
{
	return n1 + n2;
}

int main(int argc, char *argv[])
{

	int num1, num2, somma;

	do
	{
		printf("Inserisci num1: ");
		scanf("%d", &num1);
	} while (maggZero(num1) < 0);

	do
	{
		printf("Inserisci num2: ");
		scanf("%d", &num2);
	} while (maggZero(num2) < 0);

	somma = calcolo(num1, num2);

	printf("la somma è: %d\n", somma);

	return 0;
}