/*Yaron Brauner; s0571574; Aufgabe 9 */

/*Jede Eingabe wird verborgen, bei ENTER wird die Eingabe um 3 erhöht und ausgegeben; beenden des Programms durch '?' ENTER*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Warte auf Eingabe; durch '?' und ENTER beenden.\n");
    system("stty -echo");

    while ((ch=getchar()) != '?'){
        system("stty echo");
        printf("%c",ch+3);
        system("stty -echo");
    }
    system("stty echo");
    printf("\n");

    return 0;
}