/*Su una somma di denaro (relativa all'acquito di un prodotto) si vuole applicare uno sconto in base all'importo inserito seguendo il seguente schema:
da 0 a 500€ sconto del 10%;
da 501 a 1000 sconto del 20%;
oltre i 1001 sconto 30%;
Il programma dopo aver calcolato e visualizzato a video lo sconto ed il prezzo netto deve permettere di re-inserire
ulteriori somme di denaro.*/
#include <stdio.h>
void main()
{
    float denaro, sconto, sconto1 = 0.1, sconto2 = 0.2, sconto3 = 0.3, prezzoScontato = 0;
    do
    {
        printf("Scrivi l'importo del denaro sull'acquisto di un prodotto");
        scanf("%f", &denaro);
        if (denaro >= 0 && denaro <= 500)
        {
            printf("Hai uno sconto del 10 percento");
            sconto = denaro * sconto1;
            prezzoScontato = denaro - sconto;
            printf("Il prezzo scontato è %f", prezzoScontato);
        }
        if (denaro >= 501 && denaro <= 1000)
        {
            printf("Hai uno sconto del 20 percento");
            sconto = denaro * sconto2;
            prezzoScontato = denaro - sconto;
            printf("Il prezzo scontato è %f", prezzoScontato);
        }
        if (denaro >= 1000)
        {
            printf("Hai uno sconto del 30 percento");
            sconto = denaro * sconto3;
            prezzoScontato = denaro - sconto;
            printf("Il prezzo scontato è %f", prezzoScontato);
        }
        printf("Vuoi inserire un altro importo?");
    } while (denaro >= 0);
}