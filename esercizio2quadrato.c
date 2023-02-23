#include <stdio.h>
void main()
{
  // Esercizio 1: QUADRATO
  //  dopo aver letto in input il valore di un lato del quadrato
  // calcolare il perimetro e l'area, visualizzando a video i risultati.

  float lato, area, perimetro;
  printf("Scrivi il valore del lato del quadrato \n");
  scanf("%f", &lato);
  perimetro = lato * 4;
  printf("Il perimetro del quadrato è: %.2f\n", perimetro);
  area = lato * lato;
  printf("L'area del quadrato è: %.2f\n", area);
}