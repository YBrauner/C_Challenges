/*Yaron Brauner; s0571574; Aufgabe 5 */

#include <stdio.h>
#include <string.h>
#define MAX 101

int main()
{
    printf("Bitte Zeichenkette eingeben (max  100 Zeichen): ");
    char arr[MAX]={ 0 }; //Array muss ausreichend lang sein
    int i = 0;
    char c;

    //Eingabe von getchar wird direkt dem jeweiligen Index vonn arr zugewiesen

    while ((arr[i] = getchar()) != '\n'){
        i++;
    }
    printf("Die umgekehrte Zeichenkette lautet: ");

    //jetzt arr in umgekehrter Reihenfolge ausgeben

    for (int j=MAX; j>=0; j--){
        printf("%c", arr[j]);
    }
    printf("\n");

    return 0;
}