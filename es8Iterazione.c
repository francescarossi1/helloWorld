/*Dato N un numero intero positivo, generare e visualizzare in ordine
decrescente i primi N numeri interi positivi.*/

#include <stdio.h>

int main(int argc, char *argv[])
{

	int num, i;

	do
	{
		printf("Scrivi un numero: ");
		scanf("%d", &num);
	} while (num < 0);

	i = num;
	do
	{
		printf("%d\n", i);
		i = i - 1;
	} while (i > 0);

	return 0;
}