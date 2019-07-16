/*Yaron Brauner; s0571574; Aufgabe 12 */

#include <stdio.h>

int main()
{
    char mother[2][26] = {0};
    int CODE;

    printf("Bitte Zahl zwischen 0 und 26 eingeben: ");
    scanf("%i",&CODE);
    printf("\n");

    if ((CODE < 0) || (CODE > 26)){
        printf("Error, ungültige Zahl!\n");   
        return 0;
    }

    for (int i=0; i<26; i++){   //erste Zeile mit A-Z belegen
        mother[0][i] = 65+i;
    }
    for (int j=0; j<= (26 - (CODE+1)); j++){ //zweite Zeile mit a+CODE bis
        mother[1][j] = ((65+CODE)+j);
    }
    int l;
    for (int k=(26-CODE), l=0; k<26; k++, l++){
        mother[1][k] = 65+l;
    }

    for (int m=0; m<26; m++){
        printf("%c",mother[1][m]);
    }
    printf("\n");

    return 0;
} 