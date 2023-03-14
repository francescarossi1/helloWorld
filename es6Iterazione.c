/*Dato N un numero intero positivo, generare e visualizzare in ordine
crescente i numeri compresi maggiori uguali di -N e minori uguali di N.*/

#include <stdio.h>

int main(int argc, char *argv[])
{

	int i, num;

	do
	{
		printf("Scrivi un numero ");
		scanf("%d", &num);
	} while (num < 0);

	i = -n;
	do
	{
		printf("il numero vale %d\n", i);
		i = i + 1;
	} while (i <= num);

	return 0;
}