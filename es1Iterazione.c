/*Dato N un numero intero positivo, generare e visualizzare il numero 
successivo.*/
#include <stdio.h>

int main(int argc, char *argv[])
{

	int num, succ; 

	do
	{									   
		printf("inserisci un numero: \n"); 
		scanf("%d", &num);				   
	} while (num <= 0);					  

	succ = num ++;
	printf("il successivo vale: %d\n\n", succ); 

	return 0; 
}