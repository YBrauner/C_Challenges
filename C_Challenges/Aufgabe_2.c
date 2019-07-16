/*Yaron Brauner; s0571574; Aufgabe 2 */

#include <stdio.h>

int main()
{
    int alter;
    int Jahr_aktuell = 2019;
    printf("Bitte Alter in Jahren eingeben: ");
    scanf("%i",&alter);
    int Jahr_geburt = Jahr_aktuell-alter;
    printf("Das Geburtsjahr ist %i\n",Jahr_geburt);
    return 0;
}