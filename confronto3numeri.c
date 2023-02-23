#include <stdio.h>
int main()
// dati due numeri in input confrontarli e dire quale è il minore e quale il maggiore
{
    int num1, num2, num3;
    printf("inserisci il  1° numero\n");
    scanf("%d", &num1);
    printf("inserisci il  2° numero\n");
    scanf("%d", &num2);
    printf("inserisci il  3° numero\n");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3)
        printf("il numero 1 è maggiore del secondo e del terzo inserito");
    else if (num2 > num1 && num2 > num3)
        printf("il numero 2 è maggiore del primo e del terzo inserito");
    else if (num3 > num1 && num3 > num1)
        printf("il numero 3 è maggiore del primo e del secondo inserito");
    else
        printf("i tre numeri sono uguali");
}
