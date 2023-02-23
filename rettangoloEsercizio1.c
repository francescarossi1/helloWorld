#include<stdio.h>
void main( ) {
 //Esercizio 1: RETTANGOLO
 // dopo aver letto in input i valori della base e dell'altezza di un rettangolo 
 //calcolare il perimetro e l'area, visualizzando a video i risultati.
  
  float base, altezza, area, perimetro;
  printf("Scrivi il valore della base \n");
  scanf ("%f", &base);
  printf("Scrivi il valore dell'altezza \n");
  scanf ("%f", &altezza);
  perimetro= (base+altezza)*2;
  printf("Il perimetro del rettangolo è: %.2f\n", perimetro);
  area= base*altezza;
  printf("L'area del rettangolo è: %.2f\n", area);

} 