/*Dati due numeri interi positivi N1 e N2 con N2>N1, generare e
visualizzare in ordine crescente i numeri interi compresi
nell'intervallo chiuso [N1,N2]. 
*/
#include <stdio.h>

int main(int argc, char *argv[])
{

	int num1, num2;
	do
	{
		do
		{
			printf("inserisci primo numero\n");
			scanf("%d", &num1);
		} while (num1 < 0);

		do
		{
			printf("inserisci secondo numero\n");
			scanf("%d", &num2);
		} while (num2 < 0);
	} while (num2 <= num1);

	do
	{
		printf("%d\n", num1);
		num1++;
	} while (num1 <= num2);
    return 0;
}