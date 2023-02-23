// scrivere un programma che dopo aver letto una stringa conti
// quante consonanti e vocali contiene
#include <stdio.h>
int main()
{
    int i = 0, cons = 0, voc = 0, lung = 0;
    char str[20];
    printf("Inserisci la stringa\n");
    scanf("%s", str);
    while (str[i] != '\0')
    {
        i++;
        // lung++;
    }
    lung = i;
    for (int i = 0; i < lung; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            voc++;
        }
        else if (str[i] != 'a' || str[i] != 'e' || str[i] != 'i' || str[i] != 'o' || str[i] != 'u' && (str[i] > 97 && str[i] < 122))
        {
            cons++;
        }
    }
    printf("\nle consonati presenti nella stringa sono :%d", cons);
    printf("\nle vocali presenti nella stringa sono :%d\n", voc);
}