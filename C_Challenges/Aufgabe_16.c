/*Yaron Brauner; s0571574; Aufgabe 16 */

#include <stdio.h>
#define MAX 20

int main()
{
    struct autodaten
    {
        char Marke[MAX];
        char Name[MAX];
        int Gewicht;
        int Baujahr;
        int Leistung;
    }daten;

    printf(" Bitte geben sie ihre  Autodaten ein: ");

    int k=0;
    int countmarke=0;
    printf("\nAutomarke: ");
    while((daten.Marke[k] = getchar()) != '\n'){
        k++;
        countmarke++;
    }

    int l=0;
    int countname=0;
    printf("\nName: ");
    while((daten.Name[l] =  getchar()) != '\n'){
        l++;
        countname++;
    }

    printf("\nGewicht in KG: ");
    scanf("%i",&daten.Gewicht);
    printf("\nBaujahr: ");
    scanf("%i",&daten.Baujahr);
    printf("\nLeistung in PS: ");
    scanf("%i",&daten.Leistung);

    printf("\nIhre Daten:\nAutomarke: ");
    for(int i=0; i<countmarke; i++){
        printf("%c",daten.Marke[i]);
    }
    printf("\nName: ");
    for(int i=0; i<countname; i++){
        printf("%c",daten.Name[i]);
    }
    printf("\nGewicht: %ikg\nBaujahr: %i\nLeistung: %iPS\n",daten.Gewicht,daten.Baujahr,daten.Leistung);
    return 0;
}