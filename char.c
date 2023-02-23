// esercizio char 8/02/2023
#include <stdio.h>
void main()
{
    char carattere;
    printf("Inserisci il carattere");
    scanf("%c", &carattere);
    // carattere =get char();
    printf("Hai inserito il sequente carattere: %c", carattere);
    putchar(carattere);
    printf("Il codice ASCII del carattere inserito %d", carattere);
    char str[20];
    int i = 0;
    printf("Inserisci una stringa");
    scanf("%s", str);
    printf("Hai inserito la seguente stringa %s", str);
    while (str[1] != '\0')
    {
        i++;
    }
    printf("la stringa è lunga %d", i);
}