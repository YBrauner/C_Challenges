/*Yaron Brauner; s0571574; Aufgabe 4 */

#include <stdio.h>

int main()
{
    printf("Bitte Zeichenkette eingeben: ");
    int j = 0;
    while (getchar() != '\n'){
        j++;
    }
    if ((j>=4) && (j<=10)){
        printf("OKAY\n");
        return 0;
    }
    if (j<4){
        printf("Eingabe zu kurz\n");
        return 0;
    }
    if (j>10){
        printf("Eingabe zu lang\n");
        return 0;
    }
    return 0;
}