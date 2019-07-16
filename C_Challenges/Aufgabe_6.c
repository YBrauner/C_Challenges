/*Yaron Brauner; s0571574; Aufgabe 6 */

#include <stdio.h>
#include <string.h>
#define MAX 10

int main()
{
    printf("Bitte Zahlenreihe eingeben, jede Zahl eine neue Eingabe (durch ENTER getrennt): ");
    int num[MAX]={};
    int i = 0;
    int a;
    int max;
    int min;

    //Einlesen der Zahlenreihe als einzelne int Werte

    while (i<MAX){
        scanf("%i", &a);
        num[i] = a;
        i++;
    }
    
    max = num[0];
    min = num[0];

    //min und max ermitteln aus num

    for (int  j=0; j<MAX-1; j++){
        if (num[j+1] <= min){
            min = num[j+1];
        }
        if (num[j+1] >= max){
            max = num[j+1];
        }
    }

    //Ausgabe des min und max

    printf("Die kleinste Zahl: %i, die größste Zahl: %i.\n",min,max);
    
    return 0;
}