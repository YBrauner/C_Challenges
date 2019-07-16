/*Yaron Brauner; s0571574; Aufgabe 15 */

#include <stdio.h>
#define MAX 7

int max(int  maxi)
{
    int result =0;
    for(int i=0; i<maxi; i++){
        result = (15 + (result*16));
    }
    return result;
}
int main()
{
    int input;
    printf("Bitte Zahl <= %i eingeben: ",max(MAX));
    scanf("%i", &input);

    int calc_inp  = input;
    int res = 0;
    int rest;
    char hex[MAX];
    int countbin = 0;
    int val = 1;
    int count_index_bin = 0;

    for(int i=0; i<MAX; i++){ //alle elemente auf 0 setzen
        hex[i] = 0;
    }

    while (val == 1){
        res =  0;
        printf("%i",calc_inp);
        while(calc_inp >= 16){ //durch 16 teilen und rest ermitteln
            calc_inp = calc_inp -16;
            res++;
        }
        printf(" / 16 = %i, rest %i\n",res, calc_inp);
        if(calc_inp == 10){ //je nachdem ob rest == 10,11,12,13,14,15  oder <10,  A,B,C,D,E,F oder die Zahl <10 in array hex
            hex[countbin] = 'A';
        }
        else  if(calc_inp == 11){
            hex[countbin]= 'B';
        }
        else  if(calc_inp == 12){
            hex[countbin]= 'C';
        }
        else  if(calc_inp == 13){
            hex[countbin]= 'D';
        }
        else  if(calc_inp == 14){
            hex[countbin]= 'E';
        }
        else  if(calc_inp == 15){
            hex[countbin]= 'F';
        }
        else  if(calc_inp < 10){
            hex[countbin]= (48  +calc_inp);
        }
        countbin++;
        calc_inp = res; //calc_bin wird zu neuem ergebnis der division
        if(res == 0){ //abbruch der schleife wenn ergebnis der division 0 ist, egal ob rest 1 oder 0
            val = 0;
        }
        count_index_bin++;
    }

    printf("\n");
    for (int i=MAX; i>=0; i--){ //array hex rückwärts ausgeben
        printf("%c", hex[i]);
    }
    printf("\n");
    return 0;
}