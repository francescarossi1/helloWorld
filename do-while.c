// scrivere un programma in C: richiedere all'utente il numero dei valori da inserire,
// calcolare la somma e la media solo dei numeri maggiori di cinque, visualizzare il risultato.

#include <stdio.h>
void main()
{

    float num, somma = 0, media = 0;
    int val, i = 1;

    printf("INSERIRE NUMERO DI VALORI.");
    scanf("%d", &val); // %d se si riferisce a int, quindi un valore intero

    do
    {
        printf("INSERIRE VALORE.");
        scanf("%f", &num); // %f se si riferisce a float, quindi un valore reale
        val--;
        somma = somma + num;

    } while (val > 0);

    if (num > 5)
    {

        media = somma / (i - 1);
        printf("\n"); // caporiga
        printf("LA SOMMA E' UGUALE A %f\n", somma);
        printf("LA MEDIA E' UGUALE A %2f\n", media);
    }
}

// Ctrl + Maiusc + I --> formatta automaticamente il codice
