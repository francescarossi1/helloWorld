#include <stdio.h>
int main()
// dati due numeri in input confrontarli e dire quele è il minore e quale il maggiore
{
  int num1, num2;
  printf("inserisci il  1° numero\n");
  scanf("%d", &num1);
  printf("inserisci il  2° numero\n");
  scanf("%d", &num2);
  if (num1 > num2)
    printf("il numero 1 è maggiore del secondo inserito");
  else if (num1 < num2)
    printf("il numero 1 è minore del secondo inserito");
  else
    printf("i numeri sono uguali");
}