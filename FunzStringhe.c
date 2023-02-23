// funzioni stringhe
#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0, lung1, lung2;
    char str1[20], str2[20], str3[40];
    printf("Inserisci la prima stringa\n");
    scanf("%s", str1);
    lung1 = strlen(str1);
    printf("la lunghezza della stringa è %d\n", lung1);
    printf("Inserisci la seconda stringa\n");
    scanf("%s", str2);
    lung2 = strlen(str1);
    printf("la lunghezza della stringa è %d\n", lung2);
    if (strcmp(str1, str2) == 0)
    {
        printf("la lunghezza delle due stringhe è uguale\n");
    }
    else
    {
        printf("la lunghezza delle due stringhe è diversa\n");
    }
    strcat(str1, str2);
    printf("stringhe concatenate %s\n", str1);
    strcpy(str1, str2);
    printf("stringhe copiate %s\n", str1);
    return 0;
}