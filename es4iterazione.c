/*Dato N un numero intero positivo, generare e visualizzare in ordine
crescente i numeri pari minori o uguali a N.*/
#include <stdio.h>

int main(int argc, char *argv[])
{

	int i=0; 
	int num; 

	do
	{										   
		printf("Inserisci un numero positivo "); 
		scanf("%d", &num);					   
	} while (n < 0);						  

	do
	{									   
		printf("il numero vale: %d\n", i); 
		i = i + 2;						   
	} while (i <= num);					   

	return 0; 
}