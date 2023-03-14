/*Dati due numeri interi e positivi N1 e N2 con N2>N1, generare e
visualizzare in ordine decrescente i numeri compresi tra N1 e N2. */

#include <stdio.h>

int main(int argc, char *argv[])
{

	int num1, num2, i;
	do
	{

		do
		{
			printf("Scrivi il primo numero ");
			scanf("%d", &num1);
		} while (num1 < 0);

		do
		{
			printf("Scrivi il secondo numero");
			scanf("%d", &num2);
		} while (num2 < 0);
		printf("\n\n");
	} while (num2 <= num1);

	i = num1;
	do
	{
		printf("%d\n", i);
		i = i + 1;
	} while (i < num2);

	return 0;
}